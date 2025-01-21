package riscv.core

import chisel3._
import chisel3.util._
import riscv.core.fivestage_final.InstructionTypes
import riscv.core.fivestage_final.Instructions
import riscv.core.fivestage_final.InstructionsTypeI
import riscv.core.fivestage_final.InstructionsTypeI_funct3is1_funct7
import riscv.core.fivestage_final.InstructionsTypeI_funct3is5_funct7
import riscv.core.fivestage_final.InstructionsTypeI_funct3is1_funct7is48_shamt

import riscv.core.fivestage_final.InstructionsTypeR
import riscv.core.fivestage_final.InstructionsTypeR_funct3is1_funct7
import riscv.core.fivestage_final.InstructionsTypeR_funct3is2_funct7
import riscv.core.fivestage_final.InstructionsTypeR_funct3is3_funct7
import riscv.core.fivestage_final.InstructionsTypeR_funct3is4_funct7
import riscv.core.fivestage_final.InstructionsTypeR_funct3is5_funct7
import riscv.core.fivestage_final.InstructionsTypeR_funct3is6_funct7
import riscv.core.fivestage_final.InstructionsTypeR_funct3is7_funct7

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
          InstructionsTypeI.slli_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeI_funct3is1_funct7.slli  -> ALUFunctions.sll,
              InstructionsTypeI_funct3is1_funct7.bseti -> ALUFunctions.bseti,
              InstructionsTypeI_funct3is1_funct7.bclri -> ALUFunctions.bclri,
              InstructionsTypeI_funct3is1_funct7.binvi -> ALUFunctions.binvi,
              InstructionsTypeI_funct3is1_funct7.other -> MuxLookup(
                io.rs2_or_shamt,
                ALUFunctions.zero,
                IndexedSeq(
                  InstructionsTypeI_funct3is1_funct7is48_shamt.clz   -> ALUFunctions.clz,
                  InstructionsTypeI_funct3is1_funct7is48_shamt.ctz   -> ALUFunctions.ctz,
                  InstructionsTypeI_funct3is1_funct7is48_shamt.cpop  -> ALUFunctions.cpop,
                  InstructionsTypeI_funct3is1_funct7is48_shamt.sextb -> ALUFunctions.sextb,
                  InstructionsTypeI_funct3is1_funct7is48_shamt.sexth -> ALUFunctions.sexth
                )
              )
            )
          ),
          InstructionsTypeI.srli_srai_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeI_funct3is5_funct7.srli  -> ALUFunctions.srl,
              InstructionsTypeI_funct3is5_funct7.srai  -> ALUFunctions.sra,
              InstructionsTypeI_funct3is5_funct7.bexti -> ALUFunctions.bexti,
              InstructionsTypeI_funct3is5_funct7.rori  -> ALUFunctions.rori,
              InstructionsTypeI_funct3is5_funct7.orcb  -> ALUFunctions.orcb,
              InstructionsTypeI_funct3is5_funct7.rev8  -> ALUFunctions.rev8
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
          InstructionsTypeR.sll_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeR_funct3is1_funct7.sll -> ALUFunctions.sll,
              InstructionsTypeR_funct3is1_funct7.clmul -> ALUFunctions.clmul,
              InstructionsTypeR_funct3is1_funct7.bset -> ALUFunctions.bset,
              InstructionsTypeR_funct3is1_funct7.bclr -> ALUFunctions.bclr,
              InstructionsTypeR_funct3is1_funct7.rol -> ALUFunctions.rol,
              InstructionsTypeR_funct3is1_funct7.binv -> ALUFunctions.binv
            )
          ),
          InstructionsTypeR.slt_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeR_funct3is2_funct7.slt -> ALUFunctions.slt,
              InstructionsTypeR_funct3is2_funct7.clmulr -> ALUFunctions.clmulr,
              InstructionsTypeR_funct3is2_funct7.sh1add -> ALUFunctions.sh1add
            )
          ),
          InstructionsTypeR.sltu_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeR_funct3is3_funct7.sltu -> ALUFunctions.sltu,
              InstructionsTypeR_funct3is3_funct7.clmulh -> ALUFunctions.clmulh
            )
          ),
          InstructionsTypeR.xor_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeR_funct3is4_funct7.xor -> ALUFunctions.xor,
              InstructionsTypeR_funct3is4_funct7.zexth -> ALUFunctions.zexth,
              InstructionsTypeR_funct3is4_funct7.min -> ALUFunctions.min,
              InstructionsTypeR_funct3is4_funct7.sh2add -> ALUFunctions.sh2add,
              InstructionsTypeR_funct3is4_funct7.xnor -> ALUFunctions.xnor
            )
          ),
          InstructionsTypeR.srl_sra_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeR_funct3is5_funct7.srl -> ALUFunctions.srl,
              InstructionsTypeR_funct3is5_funct7.sra -> ALUFunctions.sra,
              InstructionsTypeR_funct3is5_funct7.minu -> ALUFunctions.minu,
              InstructionsTypeR_funct3is5_funct7.bext -> ALUFunctions.bext,
              InstructionsTypeR_funct3is5_funct7.ror -> ALUFunctions.ror
            )
          ),
          InstructionsTypeR.or_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeR_funct3is6_funct7.or -> ALUFunctions.or,
              InstructionsTypeR_funct3is6_funct7.max -> ALUFunctions.max,
              InstructionsTypeR_funct3is6_funct7.sh3add -> ALUFunctions.sh3add,
              InstructionsTypeR_funct3is6_funct7.orn -> ALUFunctions.orn
            )
          ),
          InstructionsTypeR.and_and_B_extension -> MuxLookup(
            io.funct7,
            ALUFunctions.zero,
            IndexedSeq(
              InstructionsTypeR_funct3is7_funct7.and -> ALUFunctions.and,
              InstructionsTypeR_funct3is7_funct7.maxu -> ALUFunctions.maxu,
              InstructionsTypeR_funct3is7_funct7.andn -> ALUFunctions.andn
            )
          )
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
