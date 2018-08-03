// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _operator_double_div5_HH_
#define _operator_double_div5_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lut_div5_chunk.h"

namespace ap_rtl {

struct operator_double_div5 : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<64> > in_r;
    sc_out< sc_lv<64> > ap_return;


    // Module declarations
    operator_double_div5(sc_module_name name);
    SC_HAS_PROCESS(operator_double_div5);

    ~operator_double_div5();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    lut_div5_chunk* grp_lut_div5_chunk_fu_153;
    lut_div5_chunk* grp_lut_div5_chunk_fu_160;
    lut_div5_chunk* grp_lut_div5_chunk_fu_166;
    lut_div5_chunk* grp_lut_div5_chunk_fu_172;
    lut_div5_chunk* grp_lut_div5_chunk_fu_178;
    lut_div5_chunk* grp_lut_div5_chunk_fu_184;
    lut_div5_chunk* grp_lut_div5_chunk_fu_190;
    lut_div5_chunk* grp_lut_div5_chunk_fu_196;
    lut_div5_chunk* call_ret4_14_i_i_lut_div5_chunk_fu_202;
    lut_div5_chunk* call_ret4_15_i_i_lut_div5_chunk_fu_208;
    lut_div5_chunk* call_ret4_16_i_i_lut_div5_chunk_fu_214;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > p_Repl2_2_reg_806;
    sc_signal< sc_lv<52> > new_mant_V_fu_310_p1;
    sc_signal< sc_lv<1> > tmp_1_fu_342_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_816;
    sc_signal< sc_lv<11> > p_Repl2_1_fu_374_p3;
    sc_signal< sc_lv<11> > p_Repl2_1_reg_820;
    sc_signal< sc_lv<3> > q_chunk_V_ret2_1_i_i_reg_825;
    sc_signal< sc_lv<3> > q_chunk_V_ret2_2_i_i_reg_830;
    sc_signal< sc_lv<3> > q_chunk_V_ret2_3_i_i_reg_835;
    sc_signal< sc_lv<3> > q_chunk_V_ret2_4_i_i_reg_840;
    sc_signal< sc_lv<3> > q_chunk_V_ret2_5_i_i_reg_845;
    sc_signal< sc_lv<3> > q_chunk_V_ret2_6_i_i_reg_850;
    sc_signal< sc_lv<3> > r_V_ret3_6_i_i_reg_855;
    sc_signal< sc_lv<3> > p_Result_22_7_i_i_reg_860;
    sc_signal< sc_lv<3> > p_Result_22_8_i_i_reg_865;
    sc_signal< sc_lv<3> > p_Result_22_9_i_i_reg_870;
    sc_signal< sc_lv<3> > p_Result_22_i_i_10_reg_875;
    sc_signal< sc_lv<3> > p_Result_22_10_i_i_reg_880;
    sc_signal< sc_lv<3> > p_Result_22_11_i_i_reg_885;
    sc_signal< sc_lv<3> > p_Result_22_12_i_i_reg_890;
    sc_signal< sc_lv<3> > p_Result_22_13_i_i_reg_895;
    sc_signal< sc_lv<3> > p_Result_22_14_i_i_reg_900;
    sc_signal< sc_lv<3> > p_Result_22_15_i_i_reg_905;
    sc_signal< sc_lv<3> > tmp_9_fu_726_p1;
    sc_signal< sc_lv<3> > tmp_9_reg_910;
    sc_signal< sc_lv<1> > tmp_10_fu_730_p1;
    sc_signal< sc_lv<1> > tmp_10_reg_915;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_153_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_153_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_153_r_in_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_153_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_153_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_160_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_160_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_160_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_160_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_166_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_166_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_166_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_166_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_172_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_172_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_172_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_172_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_178_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_178_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_178_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_178_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_184_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_184_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_184_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_184_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_190_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_190_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_190_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_190_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_196_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_196_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_196_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_196_ap_return_1;
    sc_signal< sc_logic > call_ret4_14_i_i_lut_div5_chunk_fu_202_ap_ready;
    sc_signal< sc_lv<3> > call_ret4_14_i_i_lut_div5_chunk_fu_202_ap_return_0;
    sc_signal< sc_lv<3> > call_ret4_14_i_i_lut_div5_chunk_fu_202_ap_return_1;
    sc_signal< sc_logic > call_ret4_15_i_i_lut_div5_chunk_fu_208_ap_ready;
    sc_signal< sc_lv<3> > call_ret4_15_i_i_lut_div5_chunk_fu_208_ap_return_0;
    sc_signal< sc_lv<3> > call_ret4_15_i_i_lut_div5_chunk_fu_208_ap_return_1;
    sc_signal< sc_logic > call_ret4_16_i_i_lut_div5_chunk_fu_214_ap_ready;
    sc_signal< sc_lv<3> > call_ret4_16_i_i_lut_div5_chunk_fu_214_ap_return_0;
    sc_signal< sc_lv<3> > call_ret4_16_i_i_lut_div5_chunk_fu_214_ap_return_1;
    sc_signal< sc_lv<52> > new_mant_V_1_fu_760_p19;
    sc_signal< sc_lv<52> > ap_phi_mux_p_Repl2_s_phi_fu_147_p4;
    sc_signal< sc_lv<52> > p_Repl2_s_reg_144;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<3> > d_chunk_V_fu_544_p1;
    sc_signal< sc_lv<64> > p_Val2_s_fu_288_p1;
    sc_signal< sc_lv<2> > tmp_fu_318_p4;
    sc_signal< sc_lv<1> > icmp_fu_328_p2;
    sc_signal< sc_lv<11> > new_exp_V_fu_300_p4;
    sc_signal< sc_lv<11> > shift_V_cast_cast_fu_334_p3;
    sc_signal< sc_lv<1> > tmp_2_fu_348_p2;
    sc_signal< sc_lv<1> > tmp_7_fu_368_p2;
    sc_signal< sc_lv<11> > p_new_exp_V_1_fu_360_p3;
    sc_signal< sc_lv<11> > new_exp_V_1_fu_354_p2;
    sc_signal< sc_lv<10> > tmp_8_fu_394_p4;
    sc_signal< sc_lv<1> > tmp_4_fu_382_p2;
    sc_signal< sc_lv<1> > tmp_5_fu_388_p2;
    sc_signal< sc_lv<1> > sel_tmp3_demorgan_fu_422_p2;
    sc_signal< sc_lv<1> > icmp4_fu_404_p2;
    sc_signal< sc_lv<1> > sel_tmp3_fu_428_p2;
    sc_signal< sc_lv<1> > sel_tmp4_fu_434_p2;
    sc_signal< sc_lv<11> > shift_V_fu_410_p2;
    sc_signal< sc_lv<11> > shift_V_1_fu_416_p2;
    sc_signal< sc_lv<11> > shift_V_2_fu_440_p3;
    sc_signal< sc_lv<1> > sel_tmp7_fu_456_p2;
    sc_signal< sc_lv<1> > sel_tmp8_fu_462_p2;
    sc_signal< sc_lv<11> > shift_V_3_fu_448_p3;
    sc_signal< sc_lv<53> > xf_V_5_cast_fu_314_p1;
    sc_signal< sc_lv<53> > tmp_3_fu_476_p3;
    sc_signal< sc_lv<53> > xf_V_1_fu_484_p3;
    sc_signal< sc_lv<11> > shift_V_4_fu_468_p3;
    sc_signal< sc_lv<53> > tmp_cast_fu_500_p1;
    sc_signal< sc_lv<53> > r_V_3_fu_504_p2;
    sc_signal< sc_lv<56> > p_cast_fu_492_p1;
    sc_signal< sc_lv<56> > tmp_s_fu_496_p1;
    sc_signal< sc_lv<56> > r_V_1_cast_fu_510_p1;
    sc_signal< sc_lv<56> > r_V_4_fu_514_p2;
    sc_signal< sc_lv<56> > xf_V_3_fu_520_p3;
    sc_signal< sc_lv<56> > xf_V_fu_528_p2;
    sc_signal< sc_lv<2> > p_Result_i_i_fu_534_p4;
    sc_signal< sc_lv<64> > p_Result_s_fu_794_p4;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<11> ap_const_lv11_3;
    static const sc_lv<11> ap_const_lv11_2;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<56> ap_const_lv56_2;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_20;
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
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_p_Repl2_s_phi_fu_147_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_d_chunk_V_fu_544_p1();
    void thread_grp_lut_div5_chunk_fu_153_d_V();
    void thread_grp_lut_div5_chunk_fu_153_r_in_V();
    void thread_grp_lut_div5_chunk_fu_160_d_V();
    void thread_grp_lut_div5_chunk_fu_166_d_V();
    void thread_grp_lut_div5_chunk_fu_172_d_V();
    void thread_grp_lut_div5_chunk_fu_178_d_V();
    void thread_grp_lut_div5_chunk_fu_184_d_V();
    void thread_grp_lut_div5_chunk_fu_190_d_V();
    void thread_grp_lut_div5_chunk_fu_196_d_V();
    void thread_icmp4_fu_404_p2();
    void thread_icmp_fu_328_p2();
    void thread_new_exp_V_1_fu_354_p2();
    void thread_new_exp_V_fu_300_p4();
    void thread_new_mant_V_1_fu_760_p19();
    void thread_new_mant_V_fu_310_p1();
    void thread_p_Repl2_1_fu_374_p3();
    void thread_p_Result_i_i_fu_534_p4();
    void thread_p_Result_s_fu_794_p4();
    void thread_p_Val2_s_fu_288_p1();
    void thread_p_cast_fu_492_p1();
    void thread_p_new_exp_V_1_fu_360_p3();
    void thread_r_V_1_cast_fu_510_p1();
    void thread_r_V_3_fu_504_p2();
    void thread_r_V_4_fu_514_p2();
    void thread_sel_tmp3_demorgan_fu_422_p2();
    void thread_sel_tmp3_fu_428_p2();
    void thread_sel_tmp4_fu_434_p2();
    void thread_sel_tmp7_fu_456_p2();
    void thread_sel_tmp8_fu_462_p2();
    void thread_shift_V_1_fu_416_p2();
    void thread_shift_V_2_fu_440_p3();
    void thread_shift_V_3_fu_448_p3();
    void thread_shift_V_4_fu_468_p3();
    void thread_shift_V_cast_cast_fu_334_p3();
    void thread_shift_V_fu_410_p2();
    void thread_tmp_10_fu_730_p1();
    void thread_tmp_1_fu_342_p2();
    void thread_tmp_2_fu_348_p2();
    void thread_tmp_3_fu_476_p3();
    void thread_tmp_4_fu_382_p2();
    void thread_tmp_5_fu_388_p2();
    void thread_tmp_7_fu_368_p2();
    void thread_tmp_8_fu_394_p4();
    void thread_tmp_9_fu_726_p1();
    void thread_tmp_cast_fu_500_p1();
    void thread_tmp_fu_318_p4();
    void thread_tmp_s_fu_496_p1();
    void thread_xf_V_1_fu_484_p3();
    void thread_xf_V_3_fu_520_p3();
    void thread_xf_V_5_cast_fu_314_p1();
    void thread_xf_V_fu_528_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
