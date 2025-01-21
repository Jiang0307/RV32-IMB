package riscv.core

import chisel3._
import chisel3.experimental.ChiselEnum
import chisel3.util._
import riscv.Parameters

object ALUFunctions extends ChiselEnum {
  val zero, add, sub, sll, slt, xor, or, and, srl, sra, sltu, clz, ctz, cpop, sextb, sexth, bseti, bclri, binvi, bexti, rori, orcb, rev8 = Value
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
    val result = allOr & 0x1.U // 提取最低有效位，確認是否需要全設置為 1
    Mux(result === 1.U, 0xFF.U(8.W), 0x00.U(8.W)) // 如果任何位為 1，整個字節設置為 1，否則為 0
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
      io.result := io.op1(7, 0).asSInt.asUInt
    }
    is(ALUFunctions.sexth) {
      io.result := io.op1(15, 0).asSInt.asUInt
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
  }
}
