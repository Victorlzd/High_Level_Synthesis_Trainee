// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _int_div3_HH_
#define _int_div3_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "int_div3_mux_646_bkb.h"

namespace ap_rtl {

struct int_div3 : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > in_r;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_lv<1> > ap_var_for_const0;
    sc_signal< sc_lv<1> > ap_var_for_const1;


    // Module declarations
    int_div3(sc_module_name name);
    SC_HAS_PROCESS(int_div3);

    ~int_div3();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U1;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U2;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U3;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U4;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U5;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U6;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U7;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U8;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U9;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U10;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U11;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U12;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U13;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U14;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U15;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U16;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U17;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U18;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U19;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U20;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U21;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U22;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U23;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U24;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U25;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U26;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U27;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U28;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U29;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U30;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U31;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U32;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U33;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U34;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U35;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U36;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U37;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U38;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U39;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U40;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U41;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U42;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U43;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U44;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U45;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U46;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U47;
    int_div3_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* int_div3_mux_646_bkb_U48;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > agg_result_V_i4_i_fu_350_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i_reg_6694;
    sc_signal< sc_lv<1> > agg_result_V_i6_i_fu_484_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i_reg_6699;
    sc_signal< sc_lv<1> > agg_result_V_i8_i_fu_618_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i_reg_6704;
    sc_signal< sc_lv<1> > agg_result_V_i1_i_fu_752_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i_reg_6709;
    sc_signal< sc_lv<1> > agg_result_V_i4_i5_fu_1174_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i5_reg_6714;
    sc_signal< sc_lv<1> > agg_result_V_i6_i6_fu_1308_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i6_reg_6719;
    sc_signal< sc_lv<1> > agg_result_V_i8_i7_fu_1442_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i7_reg_6724;
    sc_signal< sc_lv<1> > agg_result_V_i1_i8_fu_1576_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i8_reg_6729;
    sc_signal< sc_lv<1> > agg_result_V_i4_i1_fu_1998_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i1_reg_6734;
    sc_signal< sc_lv<1> > agg_result_V_i6_i1_fu_2132_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i1_reg_6739;
    sc_signal< sc_lv<1> > agg_result_V_i8_i1_fu_2266_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i1_reg_6744;
    sc_signal< sc_lv<1> > agg_result_V_i1_i1_fu_2400_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i1_reg_6749;
    sc_signal< sc_lv<1> > agg_result_V_i_i3_fu_2554_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i3_reg_6754;
    sc_signal< sc_lv<1> > agg_result_V_i2_i2_fu_2688_p66;
    sc_signal< sc_lv<1> > agg_result_V_i2_i2_reg_6759;
    sc_signal< sc_lv<1> > agg_result_V_i4_i2_fu_2822_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i2_reg_6764;
    sc_signal< sc_lv<1> > agg_result_V_i6_i2_fu_2956_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i2_reg_6769;
    sc_signal< sc_lv<1> > agg_result_V_i8_i2_fu_3090_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i2_reg_6774;
    sc_signal< sc_lv<1> > agg_result_V_i1_i2_fu_3224_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i2_reg_6779;
    sc_signal< sc_lv<4> > p_Repl2_4_reg_6784;
    sc_signal< sc_lv<4> > p_Repl2_5_reg_6789;
    sc_signal< sc_lv<4> > p_Repl2_6_reg_6794;
    sc_signal< sc_lv<4> > p_Repl2_7_fu_3388_p1;
    sc_signal< sc_lv<4> > p_Repl2_7_reg_6799;
    sc_signal< sc_lv<4> > p_Repl2_s_fu_64_p4;
    sc_signal< sc_lv<6> > p_Result_s_fu_74_p3;
    sc_signal< sc_lv<1> > agg_result_V_i2_i_fu_216_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i_fu_82_p66;
    sc_signal< sc_lv<4> > p_Repl2_1_fu_886_p4;
    sc_signal< sc_lv<6> > p_Result_1_fu_896_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i3_fu_1040_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i2_fu_906_p66;
    sc_signal< sc_lv<4> > p_Repl2_2_fu_1710_p4;
    sc_signal< sc_lv<6> > p_Result_2_fu_1720_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i1_fu_1864_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i1_fu_1730_p66;
    sc_signal< sc_lv<4> > p_Repl2_3_fu_2534_p4;
    sc_signal< sc_lv<6> > p_Result_3_fu_2544_p4;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > p_Result_4_fu_3392_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i4_fu_3533_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i4_fu_3399_p66;
    sc_signal< sc_lv<6> > p_Result_5_fu_4203_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i5_fu_4346_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i5_fu_4212_p66;
    sc_signal< sc_lv<6> > p_Result_6_fu_5016_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i6_fu_5159_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i6_fu_5025_p66;
    sc_signal< sc_lv<6> > p_Result_7_fu_5829_p4;
    sc_signal< sc_lv<1> > agg_result_V_i1_i3_fu_4069_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i3_fu_3935_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i3_fu_3801_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i3_fu_3667_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i4_fu_4882_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i4_fu_4748_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i4_fu_4614_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i4_fu_4480_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i5_fu_5695_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i5_fu_5561_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i5_fu_5427_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i6_fu_5293_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i6_fu_6508_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i6_fu_6374_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i7_fu_6240_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i7_fu_6106_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i68_fu_5838_p66;
    sc_signal< sc_lv<1> > agg_result_V_i2_i69_fu_5972_p66;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_p_Repl2_1_fu_886_p4();
    void thread_p_Repl2_2_fu_1710_p4();
    void thread_p_Repl2_3_fu_2534_p4();
    void thread_p_Repl2_7_fu_3388_p1();
    void thread_p_Repl2_s_fu_64_p4();
    void thread_p_Result_1_fu_896_p4();
    void thread_p_Result_2_fu_1720_p4();
    void thread_p_Result_3_fu_2544_p4();
    void thread_p_Result_4_fu_3392_p4();
    void thread_p_Result_5_fu_4203_p4();
    void thread_p_Result_6_fu_5016_p4();
    void thread_p_Result_7_fu_5829_p4();
    void thread_p_Result_s_fu_74_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif