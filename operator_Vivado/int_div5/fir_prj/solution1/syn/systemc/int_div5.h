// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _int_div5_HH_
#define _int_div5_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lut_div5_chunk.h"

namespace ap_rtl {

struct int_div5 : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > in_r;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    int_div5(sc_module_name name);
    SC_HAS_PROCESS(int_div5);

    ~int_div5();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    lut_div5_chunk* grp_lut_div5_chunk_fu_70;
    lut_div5_chunk* grp_lut_div5_chunk_fu_77;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > reg_100;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > r_V_reg_232;
    sc_signal< sc_lv<3> > p_Result_s_4_reg_237;
    sc_signal< sc_lv<3> > p_Result_14_1_reg_242;
    sc_signal< sc_lv<3> > p_Result_14_2_reg_247;
    sc_signal< sc_lv<3> > p_Result_14_3_reg_252;
    sc_signal< sc_lv<3> > p_Result_14_4_reg_257;
    sc_signal< sc_lv<3> > p_Result_14_5_reg_262;
    sc_signal< sc_lv<3> > p_Result_14_6_reg_267;
    sc_signal< sc_lv<3> > p_Result_14_7_reg_272;
    sc_signal< sc_lv<3> > p_Result_14_8_reg_277;
    sc_signal< sc_lv<3> > tmp_fu_210_p1;
    sc_signal< sc_lv<3> > tmp_reg_282;
    sc_signal< sc_lv<3> > q_chunk_V_ret7_reg_287;
    sc_signal< sc_lv<3> > q_chunk_V_ret7_1_reg_292;
    sc_signal< sc_lv<3> > q_chunk_V_ret7_2_reg_297;
    sc_signal< sc_lv<3> > q_chunk_V_ret7_3_reg_302;
    sc_signal< sc_lv<3> > q_chunk_V_ret7_4_reg_307;
    sc_signal< sc_lv<3> > q_chunk_V_ret7_5_reg_312;
    sc_signal< sc_lv<3> > q_chunk_V_ret7_6_reg_317;
    sc_signal< sc_lv<3> > q_chunk_V_ret7_7_reg_322;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_70_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_70_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_70_r_in_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_70_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_70_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_77_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_77_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_77_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_77_ap_return_1;
    sc_signal< sc_lv<3> > d_chunk_V_fu_115_p1;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<2> > p_Result_s_fu_105_p4;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<2> ap_const_lv2_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_d_chunk_V_fu_115_p1();
    void thread_grp_lut_div5_chunk_fu_70_d_V();
    void thread_grp_lut_div5_chunk_fu_70_r_in_V();
    void thread_grp_lut_div5_chunk_fu_77_d_V();
    void thread_p_Result_s_fu_105_p4();
    void thread_tmp_fu_210_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
