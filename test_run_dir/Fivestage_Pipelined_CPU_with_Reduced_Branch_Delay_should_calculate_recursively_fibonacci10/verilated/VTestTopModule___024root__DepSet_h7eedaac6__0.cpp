// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule__pch.h"
#include "VTestTopModule___024root.h"

VL_INLINE_OPT void VTestTopModule___024root___ico_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___ico_sequent__TOP__0\n"); );
    // Body
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
}

void VTestTopModule___024root___eval_ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTestTopModule___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VTestTopModule___024root___eval_triggers__ico(VTestTopModule___024root* vlSelf);

bool VTestTopModule___024root___eval_phase__ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTestTopModule___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VTestTopModule___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTestTopModule___024root___eval_act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    // Body
    vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address 
        = vlSelf->TestTopModule__DOT__rom_loader__DOT__address;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0U;
    vlSelf->TestTopModule__DOT__CPU_clkdiv = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((3U 
                                                   == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv))
                                                   ? 0U
                                                   : (IData)(vlSelf->TestTopModule__DOT___CPU_next_T_2)));
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                       ? (3U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_16))))
             : (0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 
            = (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
               >> 0x18U);
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                       ? (2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_16))))
             : (0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0 
            = (0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 0x10U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                       ? (0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_13))))
             : (0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0xffU & vlSelf->TestTopModule__DOT__mem_io_bundle_write_data);
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                       ? (1U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_13))))
             : (0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 8U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->io_mem_debug_read_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                      >> 2U));
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_3[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_2[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_1[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    }
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_clock 
        = (0U == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv));
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
    vlSelf->__VdfgTmp_hcdfd3b03__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_2
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_ha885c88e__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_3
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_haeeb6a10__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_0
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_h65e1bffd__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_1
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_he1cdd106__0 = (((IData)(vlSelf->__VdfgTmp_h65e1bffd__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_haeeb6a10__0));
}

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__1(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__1\n"); );
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall))) 
                                                 && (0x33U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall))) 
                                                 && ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                     | ((0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))))));
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
             & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)))) {
            if ((0x1fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xdU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xcU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xbU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xaU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1eU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((8U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1dU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((7U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1cU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x16U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x15U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((9U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1bU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x14U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x18U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x19U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1aU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((6U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xeU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xfU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x10U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x11U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x12U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x13U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
        }
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__out));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 
        = (1ULL + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles);
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in;
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out = 0U;
        } else {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out 
                = (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                            >> 0x14U));
        }
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__out 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_3)
                ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)
                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__myreg
                         : 0U));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out;
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) {
            if ((0x304U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                if ((0x305U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
                }
                if ((0x305U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
                }
            }
            if ((0x304U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
            }
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data;
            if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt;
            } else if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h49fcdd7d__0) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt;
            } else {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = ((0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                        ? ((0xfffffff0U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                           | ((8U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                     >> 4U)) | (7U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))
                        : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus);
            }
        } else if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) {
            if ((0x300U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1;
            }
            if ((0x300U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
            }
        }
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall))) 
                                                 && ((0x73U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                     & ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                             >> 0xcU))) 
                                                        | ((5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                >> 0xcU))) 
                                                           | ((2U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                   >> 0xcU))) 
                                                              | ((6U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                      >> 0xcU))) 
                                                                 | ((3U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                         >> 0xcU))) 
                                                                    | (7U 
                                                                       == 
                                                                       (7U 
                                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                                           >> 0xcU)))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out 
        = ((IData)(vlSelf->reset) ? 0U : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out)
            : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out
                : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall))) 
                                                 && (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall))) 
                                                 && (3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))));
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out 
            = (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                     >> 0xcU));
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_3) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__myreg = 0U;
        } else if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__myreg = 0U;
        }
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_result;
    }
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
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out;
    }
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem 
        = ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__out));
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)
                ? 0U : (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                        >> 0x14U));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out;
    }
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
        = ((IData)(vlSelf->reset) ? 0x13U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)
                                              ? 0x13U
                                              : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall))) 
                                                 && ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                     | ((0x13U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                        | ((3U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                           | ((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                              | ((0x37U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                                 | ((0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                                    | ((0x67U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                                       | (0x73U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)))))))))));
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out = 0x13U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg = 0x13U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out;
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out = 0x1000U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out = 0U;
        } else {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out 
                = ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                    ? 3U : ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                             ? 3U : ((0x73U == (0x7fU 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                      ? 2U : ((3U == 
                                               (0x7fU 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                               ? 1U
                                               : 0U))));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out 
                = (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                            >> 7U));
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_3) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out = 0x1000U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg = 0x1000U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert)
                    ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                        : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h49fcdd7d__0)
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                            : ((0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc
                                : 0U))) : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address);
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out = 0x13U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg = 0x13U;
        } else {
            if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg;
            } else {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in;
            }
            if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)) 
                          | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1;
            }
        }
    }
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in);
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x300U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt 
        = (0xfffffff7U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x305U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x341U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h49fcdd7d__0 
        = ((0U != vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__out) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
              >> 3U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in 
        = ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
            ? 0U : (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                             >> 0xfU)));
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
    __VdfgTmp_h7e662f10__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in));
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
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
           + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_7 
        = ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
            ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
            : ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                : ((0U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in
                    : 0U)));
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
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 
        = ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
            ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
            : ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                : ((0U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in
                    : 0U)));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address 
        = ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
            ? (TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_flag_T_6 
               + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in)
            : ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                    ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                    : 0U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
}

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__2(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address = 0U;
        vlSelf->TestTopModule__DOT__rom_loader__DOT__valid = 0U;
    } else if ((0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address 
            = vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1;
        vlSelf->TestTopModule__DOT__rom_loader__DOT__valid 
            = vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0;
    }
    vlSelf->TestTopModule__DOT__rom_loader__DOT__address 
        = vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address;
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0x83U == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57a1f__0 
            = vlSelf->__VdfgTmp_he1cdd106__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b2b4b2__0 
            = vlSelf->__VdfgTmp_hcdfd3b03__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he392d391__0 
            = vlSelf->__VdfgTmp_h65e1bffd__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57415__0 
            = vlSelf->__VdfgTmp_haeeb6a10__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data 
            = (((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
                << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hcdfd3b03__0) 
                              << 0x10U) | (IData)(vlSelf->__VdfgTmp_he1cdd106__0)));
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
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b652b6__0 
            = ((IData)(vlSelf->__VdfgTmp_h65e1bffd__0) 
               >> 7U);
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he041c36b__0 
            = ((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
               >> 7U);
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57a1f__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b2b4b2__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he392d391__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3f57415__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bundle_read_data = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in = 0x13U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he3b652b6__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT____VdfgTmp_he041c36b__0 = 0U;
    }
}

VL_INLINE_OPT void VTestTopModule___024root___nba_comb__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = (0x1fffffffU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out);
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out;
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
    } else if ((0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
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
}

void VTestTopModule___024root___eval_nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VTestTopModule___024root___eval_triggers__act(VTestTopModule___024root* vlSelf);

bool VTestTopModule___024root___eval_phase__act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestTopModule___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTestTopModule___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestTopModule___024root___eval_phase__nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestTopModule___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__ico(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__nba(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__act(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG

void VTestTopModule___024root___eval(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VTestTopModule___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 3783, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTestTopModule___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTestTopModule___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 3783, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTestTopModule___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TestTopModule.sv", 3783, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTestTopModule___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTestTopModule___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestTopModule___024root___eval_debug_assertions(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_regs_debug_read_address 
                     & 0xe0U))) {
        Verilated::overWidthError("io_regs_debug_read_address");}
}
#endif  // VL_DEBUG
