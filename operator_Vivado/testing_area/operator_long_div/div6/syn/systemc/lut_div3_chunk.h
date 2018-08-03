// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _lut_div3_chunk_HH_
#define _lut_div3_chunk_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "operator_long_divbkb.h"

namespace ap_rtl {

struct lut_div3_chunk : public sc_module {
    // Port declarations 5
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<4> > d_V;
    sc_in< sc_lv<2> > r_in_V;
    sc_out< sc_lv<4> > ap_return_0;
    sc_out< sc_lv<2> > ap_return_1;
    sc_signal< sc_lv<1> > ap_var_for_const0;
    sc_signal< sc_lv<1> > ap_var_for_const1;


    // Module declarations
    lut_div3_chunk(sc_module_name name);
    SC_HAS_PROCESS(lut_div3_chunk);

    ~lut_div3_chunk();

    sc_trace_file* mVcdFile;

    operator_long_divbkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_long_divbkb_U1;
    operator_long_divbkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_long_divbkb_U2;
    operator_long_divbkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_long_divbkb_U3;
    operator_long_divbkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_long_divbkb_U4;
    operator_long_divbkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_long_divbkb_U5;
    operator_long_divbkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>* operator_long_divbkb_U6;
    sc_signal< sc_lv<6> > p_Result_8_fu_34_p3;
    sc_signal< sc_lv<1> > agg_result_V_i2_fu_176_p66;
    sc_signal< sc_lv<1> > agg_result_V_i_fu_42_p66;
    sc_signal< sc_lv<1> > agg_result_V_i1_fu_720_p66;
    sc_signal< sc_lv<1> > agg_result_V_i8_fu_586_p66;
    sc_signal< sc_lv<1> > agg_result_V_i6_fu_452_p66;
    sc_signal< sc_lv<1> > agg_result_V_i4_fu_318_p66;
    sc_signal< sc_lv<4> > p_Result_1_fu_854_p5;
    sc_signal< sc_lv<2> > p_Result_s_fu_310_p3;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_p_Result_1_fu_854_p5();
    void thread_p_Result_8_fu_34_p3();
    void thread_p_Result_s_fu_310_p3();
};

}

using namespace ap_rtl;

#endif
