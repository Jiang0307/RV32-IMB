package riscv.core.fivestage_final

import chisel3._
import chisel3.util._
import riscv.Parameters

//opcode
object InstructionTypes {
  val L  = "b0000011".U
  val I  = "b0010011".U
  val S  = "b0100011".U
  val RM = "b0110011".U
  val B  = "b1100011".U
}

//opcode
object Instructions {
  val lui   = "b0110111".U
  val nop   = "b0000001".U
  val jal   = "b1101111".U
  val jalr  = "b1100111".U
  val auipc = "b0010111".U
  val csr   = "b1110011".U
  val fence = "b0001111".U
}

//funct3
object InstructionsTypeL {
  val lb  = "b000".U
  val lh  = "b001".U
  val lw  = "b010".U
  val lbu = "b100".U
  val lhu = "b101".U
}

//funct3
object InstructionsTypeI {
  val addi  = 0.U
  val slli_and_B_extension  = 1.U //
  val slti  = 2.U
  val sltiu = 3.U
  val xori  = 4.U
  val srli_srai_and_B_extension   = 5.U //
  val ori   = 6.U
  val andi  = 7.U
}

//funct7
object InstructionsTypeI_funct3is1_funct7 {
  val slli  = "b0000000".U
  val bseti = "b0010100".U
  val bclri = "b0100100".U
  val binvi = "b0110100".U
  val other = "b0110000".U 
}

//funct7
object InstructionsTypeI_funct3is5_funct7 {
  val srli  = "b0000000".U
  val srai  = "b0100000".U
  val bexti = "b0100100".U
  val rori  = "b0110000".U
  val orcb  = "b0010100".U
  val rev8  = "b0110100".U
}

//shamt
object InstructionsTypeI_funct3is1_funct7is48_shamt {
  val clz   = "b00000".U
  val ctz   = "b00001".U
  val cpop  = "b00010".U
  val sextb = "b00100".U
  val sexth = "b00101".U
}

//funct3
object InstructionsTypeR {
  val add_sub = 0.U
  val sll_and_B_extension     = 1.U // ++
  val slt_and_B_extension     = 2.U // +++
  val sltu_and_B_extension    = 3.U // +++
  val xor_and_B_extension     = 4.U // +++
  val srl_sra_and_B_extension = 5.U // +++
  val or_and_B_extension      = 6.U // +++
  val and_and_B_extension     = 7.U // +++
}

// sll_and_B_extension
object InstructionsTypeR_funct3is1_funct7 {
  val sll   = "b0000000".U
  val clmul = "b0000101".U
  val bset  = "b0010100".U
  val bclr  = "b0100100".U
  val rol   = "b0110000".U
  val binv  = "b0110100".U
}

// slt_and_B_extension
object InstructionsTypeR_funct3is2_funct7 {
  val slt    = "b0000000".U
  val clmulr = "b0000101".U
  val sh1add = "b0010000".U
}

// sltu_and_B_extension
object InstructionsTypeR_funct3is3_funct7 {
  val sltu   = "b0000000".U
  val clmulh = "b0000101".U
}

// xor_and_B_extension
object InstructionsTypeR_funct3is4_funct7 {
  val xor    = "b0000000".U
  val zexth  = "b0000100".U
  val min    = "b0000101".U
  val sh2add = "b0010000".U
  val xnor   = "b0100000".U
}

// srl_sra_and_B_extension
object InstructionsTypeR_funct3is5_funct7 {
  val srl  = "b0000000".U
  val sra  = "b0100000".U
  val minu = "b0000101".U
  val bext = "b0100100".U
  val ror  = "b0110000".U
}

// or_and_B_extension
object InstructionsTypeR_funct3is6_funct7 {
  val or      = "b0000000".U
  val max     = "b0000101".U
  val sh3add  = "b0010000".U
  val orn     = "b0100000".U
}

// and_and_B_extension
object InstructionsTypeR_funct3is7_funct7 {
  val and  = "b0000000".U
  val maxu = "b0000101".U
  val andn = "b0100000".U
}

//funct3
object InstructionsTypeS {
  val sb = "b000".U
  val sh = "b001".U
  val sw = "b010".U
}

//funct3
object InstructionsTypeM {
  val mul    = 0.U
  val mulh   = 1.U
  val mulhsu = 2.U
  val mulhum = 3.U
  val div    = 4.U
  val divu   = 5.U
  val rem    = 6.U
  val remu   = 7.U
}

//funct3
object InstructionsTypeB {
  val beq  = "b000".U
  val bne  = "b001".U
  val blt  = "b100".U
  val bge  = "b101".U
  val bltu = "b110".U
  val bgeu = "b111".U
}

//funct3
object InstructionsTypeCSR {
  val csrrw  = "b001".U
  val csrrs  = "b010".U
  val csrrc  = "b011".U
  val csrrwi = "b101".U
  val csrrsi = "b110".U
  val csrrci = "b111".U
}

object InstructionsNop {
  val nop = 0x00000013L.U(Parameters.DataWidth)
}

object InstructionsRet {
  val mret = 0x30200073L.U(Parameters.DataWidth)
  val ret  = 0x00008067L.U(Parameters.DataWidth)
}

object InstructionsEnv {
  val ecall  = 0x00000073L.U(Parameters.DataWidth)
  val ebreak = 0x00100073L.U(Parameters.DataWidth)
}

object ALUOp1Source {
  val Register           = 0.U(1.W)
  val InstructionAddress = 1.U(1.W)
}

object ALUOp2Source {
  val Register  = 0.U(1.W)
  val Immediate = 1.U(1.W)
}

object RegWriteSource {
  val ALUResult              = 0.U(2.W)
  val Memory                 = 1.U(2.W)
  val CSR                    = 2.U(2.W)
  val NextInstructionAddress = 3.U(2.W)
}

class InstructionDecode extends Module {
  val io = IO(new Bundle {
    val instruction               = Input(UInt(Parameters.InstructionWidth))
    val instruction_address       = Input(UInt(Parameters.AddrWidth)) // if2id.io.output_instruction_address
    val reg1_data                 = Input(UInt(Parameters.DataWidth)) // regs.io.read_data1
    val reg2_data                 = Input(UInt(Parameters.DataWidth)) // regs.io.read_data2
    val forward_from_mem          = Input(UInt(Parameters.DataWidth)) // mem.io.forward_data
    val forward_from_wb           = Input(UInt(Parameters.DataWidth)) // wb.io.regs_write_data
    val reg1_forward              = Input(UInt(2.W))                  // forwarding.io.reg1_forward_id
    val reg2_forward              = Input(UInt(2.W))                  // forwarding.io.reg2_forward_id
    val interrupt_assert          = Input(Bool())                     // clint.io.id_interrupt_assert
    val interrupt_handler_address = Input(UInt(Parameters.AddrWidth)) // clint.io.id_interrupt_handler_address

    val regs_reg1_read_address = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
    val regs_reg2_read_address = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
    val ex_immediate           = Output(UInt(Parameters.DataWidth))
    val ex_aluop1_source       = Output(UInt(1.W))
    val ex_aluop2_source       = Output(UInt(1.W))
    val ex_memory_read_enable  = Output(Bool())
    val ex_memory_write_enable = Output(Bool())
    val ex_reg_write_source    = Output(UInt(2.W))
    val ex_reg_write_enable    = Output(Bool())
    val ex_reg_write_address   = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
    val ex_csr_address         = Output(UInt(Parameters.CSRRegisterAddrWidth))
    val ex_csr_write_enable    = Output(Bool())
    val ctrl_jump_instruction  = Output(Bool())                     // ctrl.io.jump_instruction_id
    val clint_jump_flag        = Output(Bool())                     // clint.io.jump_flag
    val clint_jump_address     = Output(UInt(Parameters.AddrWidth)) // clint.io.jump_address
    val if_jump_flag           = Output(Bool())                     // ctrl.io.jump_flag , inst_fetch.io.jump_flag_id
    val if_jump_address        = Output(UInt(Parameters.AddrWidth)) // inst_fetch.io.jump_address_id
  })
  val opcode = io.instruction(6, 0)
  val funct3 = io.instruction(14, 12)
  val funct7 = io.instruction(31, 25)
  val rd     = io.instruction(11, 7)
  val rs1    = io.instruction(19, 15)
  val rs2_or_shamt    = io.instruction(24, 20)

  io.regs_reg1_read_address := Mux(opcode === Instructions.lui, 0.U(Parameters.PhysicalRegisterAddrWidth), rs1)
  io.regs_reg2_read_address := rs2_or_shamt
  io.ex_immediate := MuxLookup(
    opcode,
    Cat(Fill(20, io.instruction(31)), io.instruction(31, 20)),
    IndexedSeq(
      InstructionTypes.I -> Cat(Fill(21, io.instruction(31)), io.instruction(30, 20)),
      InstructionTypes.L -> Cat(Fill(21, io.instruction(31)), io.instruction(30, 20)),
      Instructions.jalr  -> Cat(Fill(21, io.instruction(31)), io.instruction(30, 20)),
      InstructionTypes.S -> Cat(Fill(21, io.instruction(31)), io.instruction(30, 25), io.instruction(11, 7)),
      InstructionTypes.B -> Cat(
        Fill(20, io.instruction(31)),
        io.instruction(7),
        io.instruction(30, 25),
        io.instruction(11, 8),
        0.U(1.W)
      ),
      Instructions.lui   -> Cat(io.instruction(31, 12), 0.U(12.W)),
      Instructions.auipc -> Cat(io.instruction(31, 12), 0.U(12.W)),
      Instructions.jal -> Cat(
        Fill(12, io.instruction(31)),
        io.instruction(19, 12),
        io.instruction(20),
        io.instruction(30, 21),
        0.U(1.W)
      )
    )
  )
  io.ex_aluop1_source := Mux(
    opcode === Instructions.auipc || opcode === InstructionTypes.B || opcode === Instructions.jal,
    ALUOp1Source.InstructionAddress,
    ALUOp1Source.Register
  )
  io.ex_aluop2_source := Mux(
    opcode === InstructionTypes.RM,
    ALUOp2Source.Register,
    ALUOp2Source.Immediate
  )
  io.ex_memory_read_enable  := opcode === InstructionTypes.L
  io.ex_memory_write_enable := opcode === InstructionTypes.S
  io.ex_reg_write_source := MuxLookup(
    opcode,
    RegWriteSource.ALUResult,
    IndexedSeq(
      InstructionTypes.L -> RegWriteSource.Memory,
      Instructions.csr   -> RegWriteSource.CSR,
      Instructions.jal   -> RegWriteSource.NextInstructionAddress,
      Instructions.jalr  -> RegWriteSource.NextInstructionAddress
    )
  )
  io.ex_reg_write_enable := (opcode === InstructionTypes.RM) || (opcode === InstructionTypes.I) ||
    (opcode === InstructionTypes.L) || (opcode === Instructions.auipc) || (opcode === Instructions.lui) ||
    (opcode === Instructions.jal) || (opcode === Instructions.jalr) || (opcode === Instructions.csr)
  io.ex_reg_write_address := io.instruction(11, 7)
  io.ex_csr_address       := io.instruction(31, 20)
  io.ex_csr_write_enable := (opcode === Instructions.csr) && (
    funct3 === InstructionsTypeCSR.csrrw || funct3 === InstructionsTypeCSR.csrrwi ||
      funct3 === InstructionsTypeCSR.csrrs || funct3 === InstructionsTypeCSR.csrrsi ||
      funct3 === InstructionsTypeCSR.csrrc || funct3 === InstructionsTypeCSR.csrrci
  )

  val reg1_data = MuxLookup(
    io.reg1_forward,
    0.U,
    IndexedSeq(
      ForwardingType.NoForward      -> (io.reg1_data),
      ForwardingType.ForwardFromWB  -> (io.forward_from_wb),
      ForwardingType.ForwardFromMEM -> (io.forward_from_mem)
    )
  )
  val reg2_data = MuxLookup(
    io.reg2_forward,
    0.U,
    IndexedSeq(
      ForwardingType.NoForward      -> (io.reg2_data),
      ForwardingType.ForwardFromWB  -> (io.forward_from_wb),
      ForwardingType.ForwardFromMEM -> (io.forward_from_mem)
    )
  )
  io.ctrl_jump_instruction := opcode === Instructions.jal ||
    (opcode === Instructions.jalr) ||
    (opcode === InstructionTypes.B)

  io.if_jump_flag := opcode === Instructions.jal ||
    (opcode === Instructions.jalr) ||
    (opcode === InstructionTypes.B) && MuxLookup(
      funct3,
      false.B,
      IndexedSeq(
        InstructionsTypeB.beq  -> (reg1_data === reg2_data),
        InstructionsTypeB.bne  -> (reg1_data =/= reg2_data),
        InstructionsTypeB.blt  -> (reg1_data.asSInt < reg2_data.asSInt),
        InstructionsTypeB.bge  -> (reg1_data.asSInt >= reg2_data.asSInt),
        InstructionsTypeB.bltu -> (reg1_data.asUInt < reg2_data.asUInt),
        InstructionsTypeB.bgeu -> (reg1_data.asUInt >= reg2_data.asUInt)
      )
    ) || io.interrupt_assert

  io.if_jump_address := Mux(
    io.interrupt_assert,
    io.interrupt_handler_address,
    MuxLookup(
      opcode,
      0.U,
      IndexedSeq(
        InstructionTypes.B -> (io.instruction_address + io.ex_immediate),
        Instructions.jal   -> (io.instruction_address + io.ex_immediate),
        Instructions.jalr  -> (reg1_data + io.ex_immediate)
      )
    )
  )
  io.clint_jump_flag := io.ctrl_jump_instruction
  io.clint_jump_address := MuxLookup(
    opcode,
    0.U,
    IndexedSeq(
      InstructionTypes.B -> (io.instruction_address + io.ex_immediate),
      Instructions.jal   -> (io.instruction_address + io.ex_immediate),
      Instructions.jalr  -> (reg1_data + io.ex_immediate)
    )
  )
}
