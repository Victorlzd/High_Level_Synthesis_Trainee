// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _operator_double_div3_HH_
#define _operator_double_div3_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lut_div3_chunk.h"

namespace ap_rtl {

struct operator_double_div3 : public sc_module {
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
    operator_double_div3(sc_module_name name);
    SC_HAS_PROCESS(operator_double_div3);

    ~operator_double_div3();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    lut_div3_chunk* grp_lut_div3_chunk_fu_127;
    lut_div3_chunk* grp_lut_div3_chunk_fu_134;
    lut_div3_chunk* grp_lut_div3_chunk_fu_140;
    lut_div3_chunk* grp_lut_div3_chunk_fu_146;
    lut_div3_chunk* grp_lut_div3_chunk_fu_152;
    lut_div3_chunk* grp_lut_div3_chunk_fu_158;
    lut_div3_chunk* call_ret4_10_i_i_lut_div3_chunk_fu_164;
    lut_div3_chunk* call_ret4_11_i_i_lut_div3_chunk_fu_170;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > p_Repl2_2_reg_663;
    sc_signal< sc_lv<52> > new_mant_V_fu_248_p1;
    sc_signal< sc_lv<1> > tmp_1_fu_272_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_673;
    sc_signal< sc_lv<11> > p_Repl2_1_fu_304_p3;
    sc_signal< sc_lv<11> > p_Repl2_1_reg_677;
    sc_signal< sc_lv<4> > q_chunk_V_ret2_i_i_reg_682;
    sc_signal< sc_lv<4> > q_chunk_V_ret2_1_i_i_reg_687;
    sc_signal< sc_lv<4> > q_chunk_V_ret2_2_i_i_reg_692;
    sc_signal< sc_lv<4> > q_chunk_V_ret2_3_i_i_reg_697;
    sc_signal< sc_lv<4> > q_chunk_V_ret2_4_i_i_reg_702;
    sc_signal< sc_lv<2> > r_V_ret3_4_i_i_reg_707;
    sc_signal< sc_lv<4> > p_Result_22_5_i_i_reg_712;
    sc_signal< sc_lv<4> > p_Result_22_6_i_i_reg_717;
    sc_signal< sc_lv<4> > p_Result_22_7_i_i_reg_722;
    sc_signal< sc_lv<4> > p_Result_22_8_i_i_reg_727;
    sc_signal< sc_lv<4> > p_Result_22_9_i_i_reg_732;
    sc_signal< sc_lv<4> > p_Result_22_i_i_8_reg_737;
    sc_signal< sc_lv<4> > p_Result_22_10_i_i_reg_742;
    sc_signal< sc_lv<4> > tmp_9_fu_604_p1;
    sc_signal< sc_lv<4> > tmp_9_reg_747;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_127_ap_ready;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_127_d_V;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_127_r_in_V;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_127_ap_return_0;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_127_ap_return_1;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_134_ap_ready;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_134_d_V;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_134_ap_return_0;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_134_ap_return_1;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_140_ap_ready;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_140_d_V;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_140_ap_return_0;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_140_ap_return_1;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_146_ap_ready;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_146_d_V;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_146_ap_return_0;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_146_ap_return_1;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_152_ap_ready;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_152_d_V;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_152_ap_return_0;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_152_ap_return_1;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_158_ap_ready;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_158_d_V;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_158_ap_return_0;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_158_ap_return_1;
    sc_signal< sc_logic > call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_ready;
    sc_signal< sc_lv<4> > call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_return_0;
    sc_signal< sc_lv<2> > call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_return_1;
    sc_signal< sc_logic > call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_ready;
    sc_signal< sc_lv<4> > call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_return_0;
    sc_signal< sc_lv<2> > call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_return_1;
    sc_signal< sc_lv<52> > new_mant_V_1_fu_625_p14;
    sc_signal< sc_lv<52> > ap_phi_mux_p_Repl2_s_phi_fu_121_p4;
    sc_signal< sc_lv<52> > p_Repl2_s_reg_118;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > d_chunk_V_fu_474_p1;
    sc_signal< sc_lv<64> > p_Val2_s_fu_226_p1;
    sc_signal< sc_lv<1> > tmp_fu_256_p3;
    sc_signal< sc_lv<11> > new_exp_V_fu_238_p4;
    sc_signal< sc_lv<11> > shift_V_cast_cast_fu_264_p3;
    sc_signal< sc_lv<1> > tmp_2_fu_278_p2;
    sc_signal< sc_lv<1> > tmp_7_fu_298_p2;
    sc_signal< sc_lv<11> > p_new_exp_V_1_fu_290_p3;
    sc_signal< sc_lv<11> > new_exp_V_1_fu_284_p2;
    sc_signal< sc_lv<10> > tmp_8_fu_324_p4;
    sc_signal< sc_lv<1> > tmp_4_fu_312_p2;
    sc_signal< sc_lv<1> > tmp_5_fu_318_p2;
    sc_signal< sc_lv<1> > sel_tmp3_demorgan_fu_352_p2;
    sc_signal< sc_lv<1> > icmp_fu_334_p2;
    sc_signal< sc_lv<1> > sel_tmp3_fu_358_p2;
    sc_signal< sc_lv<1> > sel_tmp4_fu_364_p2;
    sc_signal< sc_lv<11> > shift_V_fu_340_p2;
    sc_signal< sc_lv<11> > shift_V_1_fu_346_p2;
    sc_signal< sc_lv<11> > shift_V_2_fu_370_p3;
    sc_signal< sc_lv<1> > sel_tmp7_fu_386_p2;
    sc_signal< sc_lv<1> > sel_tmp8_fu_392_p2;
    sc_signal< sc_lv<11> > shift_V_3_fu_378_p3;
    sc_signal< sc_lv<53> > xf_V_5_cast_fu_252_p1;
    sc_signal< sc_lv<53> > tmp_3_fu_406_p3;
    sc_signal< sc_lv<53> > xf_V_1_fu_414_p3;
    sc_signal< sc_lv<11> > shift_V_4_fu_398_p3;
    sc_signal< sc_lv<53> > tmp_cast_fu_430_p1;
    sc_signal< sc_lv<53> > r_V_3_fu_434_p2;
    sc_signal< sc_lv<55> > p_cast_fu_422_p1;
    sc_signal< sc_lv<55> > tmp_s_fu_426_p1;
    sc_signal< sc_lv<55> > r_V_1_cast_fu_440_p1;
    sc_signal< sc_lv<55> > r_V_4_fu_444_p2;
    sc_signal< sc_lv<55> > xf_V_3_fu_450_p3;
    sc_signal< sc_lv<55> > xf_V_fu_458_p2;
    sc_signal< sc_lv<3> > p_Result_i_i_fu_464_p4;
    sc_signal< sc_lv<64> > p_Result_s_fu_651_p4;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<11> ap_const_lv11_2;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<55> ap_const_lv55_1;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1F;
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
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_p_Repl2_s_phi_fu_121_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_d_chunk_V_fu_474_p1();
    void thread_grp_lut_div3_chunk_fu_127_d_V();
    void thread_grp_lut_div3_chunk_fu_127_r_in_V();
    void thread_grp_lut_div3_chunk_fu_134_d_V();
    void thread_grp_lut_div3_chunk_fu_140_d_V();
    void thread_grp_lut_div3_chunk_fu_146_d_V();
    void thread_grp_lut_div3_chunk_fu_152_d_V();
    void thread_grp_lut_div3_chunk_fu_158_d_V();
    void thread_icmp_fu_334_p2();
    void thread_new_exp_V_1_fu_284_p2();
    void thread_new_exp_V_fu_238_p4();
    void thread_new_mant_V_1_fu_625_p14();
    void thread_new_mant_V_fu_248_p1();
    void thread_p_Repl2_1_fu_304_p3();
    void thread_p_Result_i_i_fu_464_p4();
    void thread_p_Result_s_fu_651_p4();
    void thread_p_Val2_s_fu_226_p1();
    void thread_p_cast_fu_422_p1();
    void thread_p_new_exp_V_1_fu_290_p3();
    void thread_r_V_1_cast_fu_440_p1();
    void thread_r_V_3_fu_434_p2();
    void thread_r_V_4_fu_444_p2();
    void thread_sel_tmp3_demorgan_fu_352_p2();
    void thread_sel_tmp3_fu_358_p2();
    void thread_sel_tmp4_fu_364_p2();
    void thread_sel_tmp7_fu_386_p2();
    void thread_sel_tmp8_fu_392_p2();
    void thread_shift_V_1_fu_346_p2();
    void thread_shift_V_2_fu_370_p3();
    void thread_shift_V_3_fu_378_p3();
    void thread_shift_V_4_fu_398_p3();
    void thread_shift_V_cast_cast_fu_264_p3();
    void thread_shift_V_fu_340_p2();
    void thread_tmp_1_fu_272_p2();
    void thread_tmp_2_fu_278_p2();
    void thread_tmp_3_fu_406_p3();
    void thread_tmp_4_fu_312_p2();
    void thread_tmp_5_fu_318_p2();
    void thread_tmp_7_fu_298_p2();
    void thread_tmp_8_fu_324_p4();
    void thread_tmp_9_fu_604_p1();
    void thread_tmp_cast_fu_430_p1();
    void thread_tmp_fu_256_p3();
    void thread_tmp_s_fu_426_p1();
    void thread_xf_V_1_fu_414_p3();
    void thread_xf_V_3_fu_450_p3();
    void thread_xf_V_5_cast_fu_252_p1();
    void thread_xf_V_fu_458_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
