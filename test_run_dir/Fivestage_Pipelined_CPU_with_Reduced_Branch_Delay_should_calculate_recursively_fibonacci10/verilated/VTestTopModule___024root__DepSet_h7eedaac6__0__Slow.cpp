// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule__pch.h"
#include "VTestTopModule___024root.h"

VL_ATTR_COLD void VTestTopModule___024root___eval_static(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTestTopModule___024root___eval_initial__TOP(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD void VTestTopModule___024root___eval_initial(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_initial\n"); );
    // Body
    VTestTopModule___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_clock__0 
        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_clock;
}

extern const VlWide<18>/*575:0*/ VTestTopModule__ConstPool__CONST_h780fb785_0;

VL_ATTR_COLD void VTestTopModule___024root___eval_initial__TOP(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 132, 0, VL_CVT_PACK_STR_NW(18, VTestTopModule__ConstPool__CONST_h780fb785_0)
                 ,  &(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTestTopModule___024root___eval_final(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__stl(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTestTopModule___024root___eval_phase__stl(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD void VTestTopModule___024root___eval_settle(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTestTopModule___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 3783, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTestTopModule___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestTopModule___024root___stl_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 = 0;
    CData/*3:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data = 0;
    CData/*0:0*/ __VdfgTmp_h7e662f10__0;
    __VdfgTmp_h7e662f10__0 = 0;
    CData/*0:0*/ __VdfgTmp_h05b4cc3a__0;
    __VdfgTmp_h05b4cc3a__0 = 0;
    // Body
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 
        = (1ULL + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles);
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_clock 
        = (0U == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv));
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0x83U == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_13 
            = (0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_16 
            = (0U != (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_13 
            = (2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_16 
            = (2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out));
    }
    vlSelf->io_mem_debug_read_data = ((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                       [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                       << 0x18U) | 
                                      ((vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                        << 0x10U) | 
                                       ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                         [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                         << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0])));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func 
        = ((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out))
            ? ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                           >> 0xcU)))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                             >> 0xcU)))
                                                         ? 0xaU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                               >> 0xcU)))
                                                           ? 3U
                                                           : 
                                                          ((0x40000000U 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)
                                                            ? 2U
                                                            : 1U))))))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                    | ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                       | ((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                          | ((0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                             | ((0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                                | ((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                                   | (0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in 
        = ((0xc80U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                       >> 0x14U)) ? (IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles 
                                             >> 0x20U))
            : ((0xc00U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                           >> 0x14U)) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles)
                : ((0x342U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                               >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                    : ((0x341U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                   >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                        : ((0x340U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                       >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                            : ((0x305U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                           >> 0x14U))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                : ((0x304U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                               >> 0x14U))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                    : ((0x300U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                   >> 0x14U))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                        : 0U))))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out) 
            & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out)) 
               & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out) 
                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0 
        = ((0x73U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out) 
           | (0x100073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9 
        = ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
              >> 0x1fU) ? 0x1fffffU : 0U) << 0xbU) 
           | (0x7ffU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                        >> 0x14U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 
        = ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
           | (0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)));
    __VdfgTmp_h05b4cc3a__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                              == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                           >> 0x14U)));
    vlSelf->__VdfgTmp_ha885c88e__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_3
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_hcdfd3b03__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_2
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_haeeb6a10__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_0
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_h65e1bffd__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_1
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0];
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out) 
            & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out)) 
               & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out) 
                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))))
                     ? 2U : 0U));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem 
        = ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in 
        = ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
            ? 0U : (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                             >> 0xfU)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out)
            : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out
                : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in 
        = ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
            ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                  >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
               | ((0xff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out) 
                  | ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                >> 9U)) | (0x7feU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                            >> 0x14U)))))
            : ((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                : ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                    ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                    : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                        ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                              >> 0x1fU) ? 0xfffffU : 0U) 
                            << 0xcU) | ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                 >> 7U)))))
                        : ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                            ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                  >> 0x1fU) ? 0x1fffffU
                                  : 0U) << 0xbU) | 
                               ((0x7e0U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                            >> 7U))))
                            : ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9
                                : ((3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                    ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9
                                    : ((0x13U == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                        ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9
                                        : ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                              >> 0x1fU)
                                              ? 0xfffffU
                                              : 0U) 
                                            << 0xcU) 
                                           | (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                              >> 0x14U))))))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
           | (0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out) 
            & ((IData)(__VdfgTmp_h05b4cc3a__0) & (0U 
                                                  != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                         == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                      >> 0x14U))) & 
                        (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he041c36b__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
              >> 7U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b652b6__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->__VdfgTmp_h65e1bffd__0) 
              >> 7U));
    vlSelf->__VdfgTmp_he1cdd106__0 = (((IData)(vlSelf->__VdfgTmp_h65e1bffd__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_haeeb6a10__0));
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = (0x1fffffffU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out);
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in 
            = ((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                << 0x18U) | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                              [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                              << 0x10U) | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                            [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                                            << 8U) 
                                           | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                           [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0])));
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)
                ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out)
                         ? (IData)((0xffffffffffULL 
                                    & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                        ? ((QData)((IData)(
                                                           (0x1ffU 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out))) 
                                           << (0x18U 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out 
                                                  << 3U)))
                                        : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                                ? (QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out)))
                                                : ((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out))) 
                                                   << 0x10U))
                                            : (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out))))))
                         : 0U));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b2b4b2__0 
            = vlSelf->__VdfgTmp_hcdfd3b03__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57415__0 
            = vlSelf->__VdfgTmp_haeeb6a10__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he392d391__0 
            = vlSelf->__VdfgTmp_h65e1bffd__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57a1f__0 
            = vlSelf->__VdfgTmp_he1cdd106__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data 
            = (((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
                << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hcdfd3b03__0) 
                              << 0x10U) | (IData)(vlSelf->__VdfgTmp_he1cdd106__0)));
    } else {
        if ((0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
            vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                = ((IData)(0x1000U) + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                               << 2U)));
            vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                = ((0x83U >= (0xffU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                    ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
                   [(0xffU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                    : 0U);
            vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 1U;
        } else {
            vlSelf->TestTopModule__DOT__mem_io_bundle_address = 0U;
            vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = 0U;
            vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 0U;
        }
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in = 0x13U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b2b4b2__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57415__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he392d391__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57a1f__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data = 0U;
    }
    __VdfgTmp_h7e662f10__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out));
    vlSelf->io_regs_debug_read_data = ((0U == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? 0U : ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                                  == (IData)(vlSelf->io_regs_debug_read_address)) 
                                                 & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                                 : 
                                                ((0x1fU 
                                                  == (IData)(vlSelf->io_regs_debug_read_address))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31
                                                  : 
                                                 ((0x1eU 
                                                   == (IData)(vlSelf->io_regs_debug_read_address))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                                                   : 
                                                  ((0x1dU 
                                                    == (IData)(vlSelf->io_regs_debug_read_address))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelf->io_regs_debug_read_address))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->io_regs_debug_read_address))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                                      : 
                                                     ((0x1aU 
                                                       == (IData)(vlSelf->io_regs_debug_read_address))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                                       : 
                                                      ((0x19U 
                                                        == (IData)(vlSelf->io_regs_debug_read_address))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlSelf->io_regs_debug_read_address))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->io_regs_debug_read_address))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                          : 
                                                         ((0x16U 
                                                           == (IData)(vlSelf->io_regs_debug_read_address))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                           : 
                                                          ((0x15U 
                                                            == (IData)(vlSelf->io_regs_debug_read_address))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                            : 
                                                           ((0x14U 
                                                             == (IData)(vlSelf->io_regs_debug_read_address))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->io_regs_debug_read_address))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                              : 
                                                             ((0x12U 
                                                               == (IData)(vlSelf->io_regs_debug_read_address))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                               : 
                                                              ((0x11U 
                                                                == (IData)(vlSelf->io_regs_debug_read_address))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                                : 
                                                               ((0x10U 
                                                                 == (IData)(vlSelf->io_regs_debug_read_address))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                                 : 
                                                                ((0xfU 
                                                                  == (IData)(vlSelf->io_regs_debug_read_address))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                                  : 
                                                                 ((0xeU 
                                                                   == (IData)(vlSelf->io_regs_debug_read_address))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                                   : 
                                                                  ((0xdU 
                                                                    == (IData)(vlSelf->io_regs_debug_read_address))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                                    : 
                                                                   ((0xcU 
                                                                     == (IData)(vlSelf->io_regs_debug_read_address))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                                     : 
                                                                    ((0xbU 
                                                                      == (IData)(vlSelf->io_regs_debug_read_address))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                                      : 
                                                                     ((0xaU 
                                                                       == (IData)(vlSelf->io_regs_debug_read_address))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                                       : 
                                                                      ((9U 
                                                                        == (IData)(vlSelf->io_regs_debug_read_address))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                        : 
                                                                       ((8U 
                                                                         == (IData)(vlSelf->io_regs_debug_read_address))
                                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                         : 
                                                                        ((7U 
                                                                          == (IData)(vlSelf->io_regs_debug_read_address))
                                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSelf->io_regs_debug_read_address))
                                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                           : 
                                                                          ((5U 
                                                                            == (IData)(vlSelf->io_regs_debug_read_address))
                                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                            : 
                                                                           ((4U 
                                                                             == (IData)(vlSelf->io_regs_debug_read_address))
                                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                             : 
                                                                            ((3U 
                                                                              == (IData)(vlSelf->io_regs_debug_read_address))
                                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                              : 
                                                                             ((2U 
                                                                               == (IData)(vlSelf->io_regs_debug_read_address))
                                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->io_regs_debug_read_address))
                                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in 
        = ((0U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                            >> 0x14U))) ? 0U : ((((0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)) 
                                                 & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                                 : 
                                                ((0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                      >> 0x14U)))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31
                                                  : 
                                                 ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                       >> 0x14U)))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                        >> 0x14U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                         >> 0x14U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                          >> 0x14U)))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                                      : 
                                                     ((0x1aU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                           >> 0x14U)))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                                       : 
                                                      ((0x19U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                            >> 0x14U)))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                                        : 
                                                       ((0x18U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                             >> 0x14U)))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                              >> 0x14U)))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                          : 
                                                         ((0x16U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                               >> 0x14U)))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                           : 
                                                          ((0x15U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                >> 0x14U)))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                            : 
                                                           ((0x14U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                 >> 0x14U)))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                             : 
                                                            ((0x13U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                  >> 0x14U)))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                              : 
                                                             ((0x12U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                   >> 0x14U)))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                               : 
                                                              ((0x11U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                    >> 0x14U)))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                                : 
                                                               ((0x10U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                     >> 0x14U)))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                                 : 
                                                                ((0xfU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                      >> 0x14U)))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                                  : 
                                                                 ((0xeU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                       >> 0x14U)))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                                   : 
                                                                  ((0xdU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                        >> 0x14U)))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                                    : 
                                                                   ((0xcU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                         >> 0x14U)))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                                     : 
                                                                    ((0xbU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                          >> 0x14U)))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                                      : 
                                                                     ((0xaU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                           >> 0x14U)))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                                       : 
                                                                      ((9U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                            >> 0x14U)))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                        : 
                                                                       ((8U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                             >> 0x14U)))
                                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                         : 
                                                                        ((7U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                              >> 0x14U)))
                                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                          : 
                                                                         ((6U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                               >> 0x14U)))
                                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                           : 
                                                                          ((5U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                                >> 0x14U)))
                                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                            : 
                                                                           ((4U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                                >> 0x14U)))
                                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                             : 
                                                                            ((3U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                                >> 0x14U)))
                                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                              : 
                                                                             ((2U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                                >> 0x14U)))
                                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                                >> 0x14U)))
                                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
        = ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
            ? 0U : ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)) 
                     & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out))
                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                     : ((0x1fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31
                         : ((0x1eU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                             : ((0x1dU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                 : ((0x1cU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                     : ((0x1bU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                         : ((0x1aU 
                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                             : ((0x19U 
                                                 == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                                 : 
                                                ((0x18U 
                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                  : 
                                                 ((0x17U 
                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                   : 
                                                  ((0x16U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                      : 
                                                     ((0x13U 
                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                        : 
                                                       ((0x11U 
                                                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                         : 
                                                        ((0x10U 
                                                          == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                           : 
                                                          ((0xeU 
                                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                            : 
                                                           ((0xdU 
                                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                             : 
                                                            ((0xcU 
                                                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                              : 
                                                             ((0xbU 
                                                               == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                               : 
                                                              ((0xaU 
                                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                                : 
                                                               ((9U 
                                                                 == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                 : 
                                                                ((8U 
                                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                  : 
                                                                 ((7U 
                                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                   : 
                                                                  ((6U 
                                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                    : 
                                                                   ((5U 
                                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                      : 
                                                                     ((3U 
                                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
                                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                         : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))))))))))))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
           + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall 
        = ((((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
             | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out)) 
            & ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out)) 
               & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out) 
                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in)) 
                  | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out) 
                     == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                  >> 0x14U)))))) | 
           ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out) 
               & ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out)) 
                  & ((IData)(__VdfgTmp_h7e662f10__0) 
                     | (IData)(__VdfgTmp_h05b4cc3a__0))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out) 
            & ((IData)(__VdfgTmp_h7e662f10__0) & (0U 
                                                  != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in)) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))))
                     ? 2U : 0U));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7 
        = ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
            ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
            : ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                : ((0U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in
                    : 0U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__out)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out
            : TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data 
        = ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                         >> 0xcU))) ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out 
                                       | (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                   >> 0xfU)))
            : ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                             >> 0xcU))) ? ((~ (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                  >> 0xfU))) 
                                           & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out)
                : ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                 >> 0xcU))) ? (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                  >> 0xfU))
                    : ((2U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                     >> 0xcU))) ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out 
                                                   | TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data)
                        : ((3U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                         >> 0xcU)))
                            ? ((~ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data) 
                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out)
                            : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                             >> 0xcU)))
                                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data
                                : 0U))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)
            ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data
                : ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                    ? ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57a1f__0)
                        : VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data, 0x10U))
                    : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                        ? ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                            ? ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b652b6__0)
                                  ? 0xffffU : 0U) << 0x10U) 
                               | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57a1f__0))
                            : ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he041c36b__0)
                                  ? 0xffffU : 0U) << 0x10U) 
                               | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                   ? (((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_hcdfd3b03__0))
                                   : 0U))) : ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                               ? ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b2b4b2__0)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he392d391__0)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57415__0)
                                                     : 
                                                    VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data, 0x18U))))
                                               : ((0U 
                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                                    ? 
                                                   (((((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                                       & ((IData)(vlSelf->__VdfgTmp_hcdfd3b03__0) 
                                                          >> 7U))
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b2b4b2__0))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                                     ? 
                                                    ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b652b6__0)
                                                        ? 0xffffffU
                                                        : 0U) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he392d391__0))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                                      ? 
                                                     (((((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                                         & ((IData)(vlSelf->__VdfgTmp_haeeb6a10__0) 
                                                            >> 7U))
                                                         ? 0xffffffU
                                                         : 0U) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57415__0))
                                                      : 
                                                     ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he041c36b__0)
                                                         ? 0xffffffU
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                                          ? (IData)(vlSelf->__VdfgTmp_ha885c88e__0)
                                                          : 0U)))))
                                                   : 0U)))))
            : 0U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 
        = ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
            ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
            : ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                : ((0U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in
                    : 0U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_result 
        = (IData)((0x7fffffffffffffffULL & ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                             ? (QData)((IData)(
                                                               (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                + TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                             : ((2U 
                                                 == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                 ? (QData)((IData)(
                                                                   (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                    - TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                                 : 
                                                ((3U 
                                                  == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                  ? 
                                                 ((QData)((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1)) 
                                                  << 
                                                  (0x1fU 
                                                   & TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                      ? 
                                                                     VL_LTS_III(32, TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1, TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                       ? 
                                                                      (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                       ^ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                        ? 
                                                                       (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                        | TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                         ? 
                                                                        (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                         & TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                          ? 
                                                                         (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1, 
                                                                                (0x1fU 
                                                                                & TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func)) 
                                                                           & (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                              < TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12 
        = ((0x340U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch);
    if ((0x341U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2 
            = ((0x342U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause);
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x341U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x305U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x300U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address 
        = ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
            ? (TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 
               + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in)
            : ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                    ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                    : 0U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt 
        = (0xfffffff7U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h49fcdd7d__0 
        = ((0U != vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__out) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
              >> 3U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
            ? ((0x100073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                ? 3U : ((0x73U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                         ? 0xbU : 0xaU)) : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h49fcdd7d__0)
                                             ? ((1U 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__out)
                                                 ? 0x80000007U
                                                 : 0x8000000bU)
                                             : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
                                                 & (0x342U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                                                 : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0) 
           | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h49fcdd7d__0) 
              | (0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_3 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
           & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
              | (((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                  & ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                   >> 0xcU))) ? (TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 
                                                 >= TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7)
                      : ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                       >> 0xcU))) ? 
                         (TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 
                          < TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7)
                          : ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                           >> 0xcU)))
                              ? VL_GTES_III(32, TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6, TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7)
                              : ((4U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                               >> 0xcU)))
                                  ? VL_LTS_III(32, TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6, TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7)
                                  : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                   >> 0xcU)))
                                      ? (TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 
                                         != TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7)
                                      : (IData)(((0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                 & (TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 
                                                    == TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7))))))))) 
                 | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert))));
}

VL_ATTR_COLD void VTestTopModule___024root___eval_stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTestTopModule___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VTestTopModule___024root___eval_triggers__stl(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD bool VTestTopModule___024root___eval_phase__stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTestTopModule___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTestTopModule___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TestTopModule.cpu.cpu.if2id.instruction_clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TestTopModule.cpu.cpu.if2id.instruction_clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestTopModule___024root___ctor_var_reset(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_regs_debug_read_address = VL_RAND_RESET_I(5);
    vlSelf->io_mem_debug_read_address = VL_RAND_RESET_I(32);
    vlSelf->io_regs_debug_read_data = VL_RAND_RESET_I(32);
    vlSelf->io_mem_debug_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_io_bundle_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__CPU_clkdiv = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 132; ++__Vi0) {
        vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_3 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_clock = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out = VL_RAND_RESET_I(12);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_result = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57a1f__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b652b6__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he041c36b__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b2b4b2__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he392d391__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57415__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h49fcdd7d__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_ha885c88e__0 = 0;
    vlSelf->__VdfgTmp_hcdfd3b03__0 = 0;
    vlSelf->__VdfgTmp_he1cdd106__0 = 0;
    vlSelf->__VdfgTmp_h65e1bffd__0 = 0;
    vlSelf->__VdfgTmp_haeeb6a10__0 = 0;
    vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VTestTopModule___024root___configure_coverage(VTestTopModule___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
