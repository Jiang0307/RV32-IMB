package riscv.core

import chisel3._
import chisel3.util._
import riscv.core.fivestage_final.InstructionTypes
import riscv.core.fivestage_final.Instructions
import riscv.core.fivestage_final.InstructionsTypeI
import riscv.core.fivestage_final.InstructionsTypeR
import riscv.core.fivestage_final.InstructionsTypeI_funct3is1_funct7
import riscv.core.fivestage_final.InstructionsTypeI_funct3is5_funct7
import riscv.core.fivestage_final.InstructionsTypeI_funct3is1_funct7is48_shamt

class ALUControl extends Module {
  val io = IO(new Bundle {
    val opcode = Input(UInt(7.W))
    val funct3 = Input(UInt(3.W))
    val funct7 = Input(UInt(7.W))
    val rs2_or_shamt = Input(UInt(5.W))

    val alu_funct = Output(ALUFunctions())
  })

  io.alu_funct := ALUFunctions.zero
  //val temp = io.rs2_or_shamt

  switch(io.opcode) {
    is(InstructionTypes.I) {
      io.alu_funct := MuxLookup(
        io.funct3,
        ALUFunctions.zero,
        IndexedSeq(
          InstructionsTypeI.addi  -> ALUFunctions.add,
          InstructionsTypeI.slti  -> ALUFunctions.slt,
          InstructionsTypeI.sltiu -> ALUFunctions.sltu,
          InstructionsTypeI.xori  -> ALUFunctions.xor,
          InstructionsTypeI.ori   -> ALUFunctions.or,
          InstructionsTypeI.andi  -> ALUFunctions.and,
          InstructionsTypeI.slli_and_other  -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeI_funct3is1_funct7.slli  -> ALUFunctions.sll,
              InstructionsTypeI_funct3is1_funct7.bseti -> ALUFunctions.zero,
              InstructionsTypeI_funct3is1_funct7.bclri -> ALUFunctions.zero,
              InstructionsTypeI_funct3is1_funct7.binvi -> ALUFunctions.zero,
              InstructionsTypeI_funct3is1_funct7.other -> MuxLookup(
                io.rs2_or_shamt,
                ALUFunctions.zero,
                IndexedSeq(
                  InstructionsTypeI_funct3is1_funct7is48_shamt.clz   -> ALUFunctions.clz,
                  InstructionsTypeI_funct3is1_funct7is48_shamt.ctz   -> ALUFunctions.ctz,
                  InstructionsTypeI_funct3is1_funct7is48_shamt.cpop  -> ALUFunctions.cpop,
                  InstructionsTypeI_funct3is1_funct7is48_shamt.sextb   -> ALUFunctions.sextb,
                  InstructionsTypeI_funct3is1_funct7is48_shamt.sexth   -> ALUFunctions.sexth
                )
              )
            )
          ),
          InstructionsTypeI.sri_and_other   -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeI_funct3is5_funct7.srli -> ALUFunctions.srl,
              InstructionsTypeI_funct3is5_funct7.srai -> ALUFunctions.sra,
              InstructionsTypeI_funct3is5_funct7.bexti -> ALUFunctions.zero,
              InstructionsTypeI_funct3is5_funct7.rori -> ALUFunctions.zero,
              InstructionsTypeI_funct3is5_funct7.orcb -> ALUFunctions.zero,
              InstructionsTypeI_funct3is5_funct7.rev8 -> ALUFunctions.zero,
            )
          )
        ),
      )
    }
    is(InstructionTypes.RM) {
      io.alu_funct := MuxLookup(
        io.funct3,
        ALUFunctions.zero,
        IndexedSeq(
          InstructionsTypeR.add_sub -> Mux(io.funct7(5), ALUFunctions.sub, ALUFunctions.add),
          InstructionsTypeR.sll     -> ALUFunctions.sll,
          InstructionsTypeR.slt     -> ALUFunctions.slt,
          InstructionsTypeR.sltu    -> ALUFunctions.sltu,
          InstructionsTypeR.xor     -> ALUFunctions.xor,
          InstructionsTypeR.or      -> ALUFunctions.or,
          InstructionsTypeR.and     -> ALUFunctions.and,
          InstructionsTypeR.sr      -> Mux(io.funct7(5), ALUFunctions.sra, ALUFunctions.srl)
        ),
      )
    }
    is(InstructionTypes.B) {
      io.alu_funct := ALUFunctions.add
    }
    is(InstructionTypes.L) {
      io.alu_funct := ALUFunctions.add
    }
    is(InstructionTypes.S) {
      io.alu_funct := ALUFunctions.add
    }
    is(Instructions.jal) {
      io.alu_funct := ALUFunctions.add
    }
    is(Instructions.jalr) {
      io.alu_funct := ALUFunctions.add
    }
    is(Instructions.lui) {
      io.alu_funct := ALUFunctions.add
    }
    is(Instructions.auipc) {
      io.alu_funct := ALUFunctions.add
    }
  }
}
