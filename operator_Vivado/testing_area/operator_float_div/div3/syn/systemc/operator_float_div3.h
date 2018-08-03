// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _operator_float_div3_HH_
#define _operator_float_div3_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "operator_float_dibkb.h"

namespace ap_rtl {

struct operator_float_div3 : public sc_module {
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
    operator_float_div3(sc_module_name name);
    SC_HAS_PROCESS(operator_float_div3);

    ~operator_float_div3();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U1;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U2;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U3;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U4;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U5;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U6;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U7;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U8;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U9;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U10;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U11;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U12;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U13;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U14;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U15;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U16;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U17;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U18;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U19;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U20;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U21;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U22;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U23;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U24;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U25;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U26;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U27;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U28;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U29;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U30;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U31;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U32;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U33;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U34;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U35;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U36;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U37;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U38;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U39;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U40;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U41;
    operator_float_dibkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_float_dibkb_U42;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > p_Repl2_9_reg_6163;
    sc_signal< sc_lv<23> > new_mant_V_fu_127_p1;
    sc_signal< sc_lv<1> > tmp_1_fu_151_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_6173;
    sc_signal< sc_lv<8> > p_Repl2_1_fu_183_p3;
    sc_signal< sc_lv<8> > p_Repl2_1_reg_6177;
    sc_signal< sc_lv<6> > p_Result_1_fu_1183_p4;
    sc_signal< sc_lv<6> > p_Result_1_reg_6182;
    sc_signal< sc_lv<1> > agg_result_V_i_i1_fu_1193_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i1_reg_6190;
    sc_signal< sc_lv<1> > agg_result_V_i2_i1_fu_1327_p66;
    sc_signal< sc_lv<1> > agg_result_V_i2_i1_reg_6195;
    sc_signal< sc_lv<4> > p_Repl2_4_reg_6200;
    sc_signal< sc_lv<4> > p_Repl2_5_reg_6205;
    sc_signal< sc_lv<4> > p_Repl2_6_reg_6210;
    sc_signal< sc_lv<4> > p_Repl2_7_reg_6215;
    sc_signal< sc_lv<4> > p_Repl2_8_fu_1501_p1;
    sc_signal< sc_lv<4> > p_Repl2_8_reg_6220;
    sc_signal< sc_lv<23> > new_mant_V_1_fu_6100_p24;
    sc_signal< sc_lv<23> > ap_phi_mux_p_Repl2_s_phi_fu_99_p4;
    sc_signal< sc_lv<23> > p_Repl2_s_reg_96;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > p_Val2_s_fu_105_p1;
    sc_signal< sc_lv<1> > tmp_fu_135_p3;
    sc_signal< sc_lv<8> > new_exp_V_fu_117_p4;
    sc_signal< sc_lv<8> > shift_V_cast_cast_fu_143_p3;
    sc_signal< sc_lv<1> > tmp_2_fu_157_p2;
    sc_signal< sc_lv<1> > tmp_8_fu_177_p2;
    sc_signal< sc_lv<8> > p_new_exp_V_1_fu_169_p3;
    sc_signal< sc_lv<8> > new_exp_V_1_fu_163_p2;
    sc_signal< sc_lv<7> > tmp_12_fu_203_p4;
    sc_signal< sc_lv<1> > tmp_4_fu_191_p2;
    sc_signal< sc_lv<1> > tmp_5_fu_197_p2;
    sc_signal< sc_lv<1> > sel_tmp3_demorgan_fu_231_p2;
    sc_signal< sc_lv<1> > icmp_fu_213_p2;
    sc_signal< sc_lv<1> > sel_tmp3_fu_237_p2;
    sc_signal< sc_lv<1> > sel_tmp4_fu_243_p2;
    sc_signal< sc_lv<8> > shift_V_fu_219_p2;
    sc_signal< sc_lv<8> > shift_V_1_fu_225_p2;
    sc_signal< sc_lv<8> > shift_V_2_fu_249_p3;
    sc_signal< sc_lv<1> > sel_tmp7_fu_265_p2;
    sc_signal< sc_lv<1> > sel_tmp8_fu_271_p2;
    sc_signal< sc_lv<8> > shift_V_3_fu_257_p3;
    sc_signal< sc_lv<24> > xf_V_3_cast_fu_131_p1;
    sc_signal< sc_lv<24> > tmp_9_fu_285_p3;
    sc_signal< sc_lv<24> > xf_V_1_fu_293_p3;
    sc_signal< sc_lv<8> > shift_V_4_fu_277_p3;
    sc_signal< sc_lv<24> > tmp_3_cast_fu_309_p1;
    sc_signal< sc_lv<32> > tmp_s_fu_301_p1;
    sc_signal< sc_lv<32> > tmp_3_fu_305_p1;
    sc_signal< sc_lv<24> > tmp_7_fu_313_p2;
    sc_signal< sc_lv<32> > tmp_6_fu_319_p2;
    sc_signal< sc_lv<26> > tmp_10_fu_325_p1;
    sc_signal< sc_lv<26> > tmp_13_fu_329_p1;
    sc_signal< sc_lv<26> > xf_V_2_fu_333_p3;
    sc_signal< sc_lv<26> > xf_V_fu_341_p2;
    sc_signal< sc_lv<2> > p_Result_i_i_fu_347_p4;
    sc_signal< sc_lv<4> > d_chunk_V_fu_357_p1;
    sc_signal< sc_lv<6> > p_Result_s_fu_361_p3;
    sc_signal< sc_lv<1> > agg_result_V_i2_i_fu_503_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i_fu_369_p66;
    sc_signal< sc_lv<4> > p_Repl2_3_fu_1173_p4;
    sc_signal< sc_lv<6> > p_Result_2_fu_2037_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i2_fu_2178_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i2_fu_2044_p66;
    sc_signal< sc_lv<6> > p_Result_3_fu_2848_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i3_fu_2991_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i3_fu_2857_p66;
    sc_signal< sc_lv<6> > p_Result_4_fu_3661_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i4_fu_3804_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i4_fu_3670_p66;
    sc_signal< sc_lv<6> > p_Result_5_fu_4474_p4;
    sc_signal< sc_lv<1> > agg_result_V_i2_i5_fu_4617_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i5_fu_4483_p66;
    sc_signal< sc_lv<6> > p_Result_6_fu_5287_p4;
    sc_signal< sc_lv<1> > agg_result_V_i8_i1_fu_1771_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i1_fu_1638_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i1_fu_1505_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i1_fu_2714_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i2_fu_2580_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i2_fu_2446_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i2_fu_2312_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i2_fu_3527_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i3_fu_3393_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i3_fu_3259_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i3_fu_3125_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i3_fu_4340_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i4_fu_4206_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i4_fu_4072_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i4_fu_3938_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i4_fu_5153_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i5_fu_5019_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i5_fu_4885_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i5_fu_4751_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i5_fu_5966_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i6_fu_5832_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i6_fu_5698_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_i6_fu_5564_p66;
    sc_signal< sc_lv<32> > p_Result_7_fu_6151_p4;
    sc_signal< sc_lv<1> > agg_result_V_i4_i_fu_637_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_i_fu_771_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_i_fu_905_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i_fu_1039_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_i19_fu_1904_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_i68_fu_5296_p66;
    sc_signal< sc_lv<1> > agg_result_V_i2_i69_fu_5430_p66;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<26> ap_const_lv26_1;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_p_Repl2_s_phi_fu_99_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_d_chunk_V_fu_357_p1();
    void thread_icmp_fu_213_p2();
    void thread_new_exp_V_1_fu_163_p2();
    void thread_new_exp_V_fu_117_p4();
    void thread_new_mant_V_1_fu_6100_p24();
    void thread_new_mant_V_fu_127_p1();
    void thread_p_Repl2_1_fu_183_p3();
    void thread_p_Repl2_3_fu_1173_p4();
    void thread_p_Repl2_8_fu_1501_p1();
    void thread_p_Result_1_fu_1183_p4();
    void thread_p_Result_2_fu_2037_p4();
    void thread_p_Result_3_fu_2848_p4();
    void thread_p_Result_4_fu_3661_p4();
    void thread_p_Result_5_fu_4474_p4();
    void thread_p_Result_6_fu_5287_p4();
    void thread_p_Result_7_fu_6151_p4();
    void thread_p_Result_i_i_fu_347_p4();
    void thread_p_Result_s_fu_361_p3();
    void thread_p_Val2_s_fu_105_p1();
    void thread_p_new_exp_V_1_fu_169_p3();
    void thread_sel_tmp3_demorgan_fu_231_p2();
    void thread_sel_tmp3_fu_237_p2();
    void thread_sel_tmp4_fu_243_p2();
    void thread_sel_tmp7_fu_265_p2();
    void thread_sel_tmp8_fu_271_p2();
    void thread_shift_V_1_fu_225_p2();
    void thread_shift_V_2_fu_249_p3();
    void thread_shift_V_3_fu_257_p3();
    void thread_shift_V_4_fu_277_p3();
    void thread_shift_V_cast_cast_fu_143_p3();
    void thread_shift_V_fu_219_p2();
    void thread_tmp_10_fu_325_p1();
    void thread_tmp_12_fu_203_p4();
    void thread_tmp_13_fu_329_p1();
    void thread_tmp_1_fu_151_p2();
    void thread_tmp_2_fu_157_p2();
    void thread_tmp_3_cast_fu_309_p1();
    void thread_tmp_3_fu_305_p1();
    void thread_tmp_4_fu_191_p2();
    void thread_tmp_5_fu_197_p2();
    void thread_tmp_6_fu_319_p2();
    void thread_tmp_7_fu_313_p2();
    void thread_tmp_8_fu_177_p2();
    void thread_tmp_9_fu_285_p3();
    void thread_tmp_fu_135_p3();
    void thread_tmp_s_fu_301_p1();
    void thread_xf_V_1_fu_293_p3();
    void thread_xf_V_2_fu_333_p3();
    void thread_xf_V_3_cast_fu_131_p1();
    void thread_xf_V_fu_341_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
