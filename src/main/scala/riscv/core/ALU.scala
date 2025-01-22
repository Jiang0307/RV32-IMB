package riscv.core

import chisel3._
import chisel3.experimental.ChiselEnum
import chisel3.util._
import riscv.Parameters

object ALUFunctions extends ChiselEnum {
  val zero, add, sub, sll, slt, xor, or, and, srl, sra, sltu, clz, ctz, cpop, sextb, sexth, bseti, bclri, binvi, bexti, rori, orcb, rev8, clmul, bset, bclr, rol, binv, clmulr, sh1add, clmulh, zexth, min, sh2add, xnor, minu, bext, ror, max, sh3add, orn, maxu, andn = Value
}

class ALU extends Module {
  val io = IO(new Bundle {
    val func = Input(ALUFunctions())

    val op1 = Input(UInt(Parameters.DataWidth))
    val op2 = Input(UInt(Parameters.DataWidth))

    val result = Output(UInt(Parameters.DataWidth))
  })

  def orByte(byte: UInt): UInt = {
    val allOr = byte | (byte >> 1) | (byte >> 2) | (byte >> 3) | (byte >> 4) | (byte >> 5) | (byte >> 6) | (byte >> 7)  // 將所有位累積 OR
    val result = allOr & 0x1.U                    // 提取最低有效位，確認是否需要全設置為 1
    Mux(result === 1.U, 0xFF.U(8.W), 0x00.U(8.W)) // 如果任何位為 1，整個字節設置為 1，否則為 0
  }

  def clmul(op1: UInt, op2: UInt): UInt = {
    val partialResults = Wire(Vec(32, UInt(64.W))) // 每步計算的中間結果
    partialResults(0) := Mux(op2(0), op1, 0.U)     // 初始化第一步結果

    for (i <- 1 until 32) {
      partialResults(i) := partialResults(i - 1) ^ Mux(op2(i), op1 << i, 0.U)
    }

    partialResults(31)(31, 0) // 最後的結果
  }

  def clmulh(op1: UInt, op2: UInt): UInt = {
    val partialResults = Wire(Vec(32, UInt(64.W))) // 每步計算的中間結果
    partialResults(0) := Mux(op2(0), op1, 0.U)     // 初始化第一步結果

    for (i <- 1 until 32) {
      partialResults(i) := partialResults(i - 1) ^ Mux(op2(i), op1 << i, 0.U)
    }

    partialResults(31)(63, 32) // 最後的結果
  }

  def clmulr(op1: UInt, op2: UInt): UInt = {
    val partialResults = Wire(Vec(32, UInt(64.W))) // 每步計算的中間結果
    partialResults(0) := Mux(op2(0), op1, 0.U)     // 初始化第一步結果

    for (i <- 1 until 32) {
      partialResults(i) := partialResults(i - 1) ^ Mux(op2(i), op1 << i, 0.U)
    }

    partialResults(31)(62, 31) // 最後的結果
  }

  io.result := 0.U
  switch(io.func) {
    is(ALUFunctions.add) {
      io.result := io.op1 + io.op2
    }
    is(ALUFunctions.sub) {
      io.result := io.op1 - io.op2
    }
    is(ALUFunctions.sll) {
      io.result := io.op1 << io.op2(4, 0)
    }
    is(ALUFunctions.slt) {
      io.result := io.op1.asSInt < io.op2.asSInt
    }
    is(ALUFunctions.xor) {
      io.result := io.op1 ^ io.op2
    }
    is(ALUFunctions.or) {
      io.result := io.op1 | io.op2
    }
    is(ALUFunctions.and) {
      io.result := io.op1 & io.op2
    }
    is(ALUFunctions.srl) {
      io.result := io.op1 >> io.op2(4, 0)
    }
    is(ALUFunctions.sra) {
      io.result := (io.op1.asSInt >> io.op2(4, 0)).asUInt
    }
    is(ALUFunctions.sltu) {
      io.result := io.op1 < io.op2
    }
    is(ALUFunctions.clz) {
      io.result := PriorityEncoder(Reverse(io.op1))
    }
    is(ALUFunctions.ctz) {
      io.result := PriorityEncoder(io.op1)
    }
    is(ALUFunctions.cpop) {
      io.result := PopCount(io.op1)
    }
    is(ALUFunctions.sextb) {
      io.result := Cat(Fill(24, io.op1(7)), io.op1(7, 0))
    }
    is(ALUFunctions.sexth) {
      io.result := Cat(Fill(16, io.op1(15)), io.op1(15, 0))
    }
    is(ALUFunctions.bseti) {
      io.result := io.op1 | (1.U << io.op2(4, 0))
    }
    is(ALUFunctions.bclri) {
      io.result := io.op1 & ~(1.U << io.op2(4, 0))
    }
    is(ALUFunctions.binvi) {
      io.result := io.op1 ^ (1.U << io.op2(4, 0))
    }
    is(ALUFunctions.bexti) {
      io.result := (io.op1 >> io.op2(4, 0)) & 1.U 
    }
    is(ALUFunctions.rori) {
      io.result := (io.op1 >> io.op2(4, 0)) | (io.op1 << (32.U - io.op2(4, 0)))
    }
    is(ALUFunctions.orcb) {
      io.result := Cat(
        orByte(io.op1(31, 24)),
        orByte(io.op1(23, 16)),
        orByte(io.op1(15, 8)),
        orByte(io.op1(7, 0))
      )
    }
    is(ALUFunctions.rev8) {
      io.result := Cat(
        io.op1(7, 0),
        io.op1(15, 8),
        io.op1(23, 16),
        io.op1(31, 24)
      )
    }
    is(ALUFunctions.clmul) {
      io.result := clmul(io.op1, io.op2)
    }
    is(ALUFunctions.bset) {
      io.result := io.op1 | (1.U << io.op2(4, 0)) 
    }
    is(ALUFunctions.bclr) {
      io.result := io.op1 & ~(1.U << io.op2(4, 0))
    }
    is(ALUFunctions.rol) {
      io.result := (io.op1 << io.op2(4, 0)) | (io.op1 >> (32.U - io.op2(4, 0)))
    }
    is(ALUFunctions.binv) {
      io.result := io.op1 ^ (1.U << io.op2(4, 0))  
    }
    is(ALUFunctions.clmulr) {
      io.result := clmulr(io.op1, io.op2)
    }
    is(ALUFunctions.sh1add) {
      io.result := (io.op1 << 1) + io.op2
    }
    is(ALUFunctions.clmulh) {
      io.result := clmulh(io.op1, io.op2)
    }
    is(ALUFunctions.zexth) {
      io.result := io.op1(15, 0)
    }
    is(ALUFunctions.min) {
      io.result := Mux(io.op1.asSInt <= io.op2.asSInt, io.op1, io.op2)
    }
    is(ALUFunctions.sh2add) {
      io.result := (io.op1 << 2) + io.op2
    }
    is(ALUFunctions.xnor) {
      io.result := ~(io.op1 ^ io.op2)
    }
    is(ALUFunctions.minu) {
      io.result := Mux(io.op1 <= io.op2, io.op1, io.op2)
    }
    is(ALUFunctions.bext) {
      io.result := (io.op1 >> io.op2(4, 0)) & 1.U    
    }
    is(ALUFunctions.ror) {
      io.result := (io.op1 >> io.op2(4, 0)) | (io.op1 << (32.U - io.op2(4, 0)))
    }
    is(ALUFunctions.max) {
      io.result := Mux(io.op1.asSInt >= io.op2.asSInt, io.op1, io.op2)
    }
    is(ALUFunctions.sh3add) {
      io.result := (io.op1 << 3) + io.op2
    }
    is(ALUFunctions.orn) {
      io.result := io.op1 | ~io.op2
    }
    is(ALUFunctions.maxu) {
      io.result := Mux(io.op1 >= io.op2, io.op1, io.op2)
    }
    is(ALUFunctions.andn) {
      io.result := io.op1 & ~io.op2
    }
  }
}