// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestTopModule.h for the primary calling header

#ifndef VERILATED_VTESTTOPMODULE___024ROOT_H_
#define VERILATED_VTESTTOPMODULE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VTestTopModule__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestTopModule___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_clock;
        VL_IN8(reset,0,0);
        VL_IN8(io_regs_debug_read_address,4,0);
        CData/*1:0*/ TestTopModule__DOT__CPU_clkdiv;
        CData/*1:0*/ TestTopModule__DOT___CPU_next_T_2;
        CData/*0:0*/ TestTopModule__DOT__mem__DOT__mem_0_MPORT_en;
        CData/*0:0*/ TestTopModule__DOT__rom_loader__DOT__valid;
        CData/*0:0*/ TestTopModule__DOT__rom_loader__DOT___GEN_0;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_3;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__out;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out;
        CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_13;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_16;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b652b6__0;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he041c36b__0;
        CData/*7:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b2b4b2__0;
        CData/*7:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he392d391__0;
        CData/*7:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57415__0;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out;
        CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out;
        CData/*4:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0;
        CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h49fcdd7d__0;
        CData/*7:0*/ __VdfgTmp_ha885c88e__0;
        CData/*7:0*/ __VdfgTmp_hcdfd3b03__0;
        CData/*7:0*/ __VdfgTmp_h65e1bffd__0;
        CData/*7:0*/ __VdfgTmp_haeeb6a10__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0;
        SData/*12:0*/ TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0;
        SData/*11:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out;
        SData/*15:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57a1f__0;
        SData/*15:0*/ __VdfgTmp_he1cdd106__0;
        VL_IN(io_mem_debug_read_address,31,0);
        VL_OUT(io_regs_debug_read_data,31,0);
        VL_OUT(io_mem_debug_read_data,31,0);
        IData/*31:0*/ TestTopModule__DOT__mem_io_bundle_address;
        IData/*31:0*/ TestTopModule__DOT__mem_io_bundle_write_data;
    };
    struct {
        IData/*31:0*/ TestTopModule__DOT__rom_loader__DOT__address;
        IData/*31:0*/ TestTopModule__DOT__rom_loader__DOT___address_T_1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__myreg;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_result;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out;
    };
    struct {
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2;
        IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
        IData/*31:0*/ __Vdly__TestTopModule__DOT__rom_loader__DOT__address;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles;
        QData/*63:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_0;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_1;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_2;
        VlUnpacked<CData/*7:0*/, 8192> TestTopModule__DOT__mem__DOT__mem_3;
        VlUnpacked<IData/*31:0*/, 232> TestTopModule__DOT__instruction_rom__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTestTopModule__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestTopModule___024root(VTestTopModule__Syms* symsp, const char* v__name);
    ~VTestTopModule___024root();
    VL_UNCOPYABLE(VTestTopModule___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
