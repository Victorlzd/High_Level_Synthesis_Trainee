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


    // Module declarations
    operator_float_div3(sc_module_name name);
    SC_HAS_PROCESS(operator_float_div3);

    ~operator_float_div3();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > p_Repl2_2_reg_501;
    sc_signal< sc_lv<26> > xf_V_4_fu_158_p2;
    sc_signal< sc_lv<26> > xf_V_4_reg_506;
    sc_signal< sc_lv<6> > tmp_6_cast_fu_206_p1;
    sc_signal< sc_lv<6> > tmp_6_cast_reg_513;
    sc_signal< sc_lv<23> > new_mant_V_4_fu_310_p3;
    sc_signal< sc_lv<23> > new_mant_V_4_reg_518;
    sc_signal< sc_lv<1> > sel_tmp5_fu_324_p2;
    sc_signal< sc_lv<1> > sel_tmp5_reg_524;
    sc_signal< sc_lv<1> > sel_tmp8_fu_336_p2;
    sc_signal< sc_lv<1> > sel_tmp8_reg_529;
    sc_signal< sc_lv<1> > sel_tmp3_fu_348_p2;
    sc_signal< sc_lv<1> > sel_tmp3_reg_534;
    sc_signal< sc_lv<8> > p_Repl2_1_fu_402_p3;
    sc_signal< sc_lv<8> > p_Repl2_1_reg_539;
    sc_signal< sc_lv<32> > p_Val2_s_fu_88_p1;
    sc_signal< sc_lv<23> > new_mant_V_1_fu_118_p1;
    sc_signal< sc_lv<1> > tmp_fu_126_p2;
    sc_signal< sc_lv<8> > new_exp_V_fu_100_p4;
    sc_signal< sc_lv<25> > p_shl_fu_146_p3;
    sc_signal< sc_lv<26> > p_shl_cast_fu_154_p1;
    sc_signal< sc_lv<26> > xf_V_3_fu_122_p1;
    sc_signal< sc_lv<26> > p_Result_s_fu_164_p4;
    sc_signal< sc_lv<32> > p_Result_1_fu_174_p3;
    sc_signal< sc_lv<32> > val_assign_fu_182_p3;
    sc_signal< sc_lv<5> > clz_V_fu_190_p1;
    sc_signal< sc_lv<6> > new_exp_V_1_fu_210_p2;
    sc_signal< sc_lv<8> > r_V_cast_cast_fu_220_p3;
    sc_signal< sc_lv<24> > tmp_7_fu_234_p3;
    sc_signal< sc_lv<26> > p_shl1_fu_246_p4;
    sc_signal< sc_lv<26> > p_Result_2_fu_242_p1;
    sc_signal< sc_lv<26> > xf_V_2_fu_256_p2;
    sc_signal< sc_lv<23> > tmp_8_fu_262_p4;
    sc_signal< sc_lv<23> > tmp_11_fu_272_p4;
    sc_signal< sc_lv<1> > tmp_5_fu_200_p2;
    sc_signal< sc_lv<1> > tmp_3_fu_228_p2;
    sc_signal< sc_lv<1> > sel_tmp_fu_290_p2;
    sc_signal< sc_lv<1> > sel_tmp1_fu_296_p2;
    sc_signal< sc_lv<23> > new_mant_V_8_fu_282_p3;
    sc_signal< sc_lv<23> > new_mant_V_3_fu_302_p3;
    sc_signal< sc_lv<8> > p_cast_cast_fu_132_p3;
    sc_signal< sc_lv<1> > tmp_1_fu_140_p2;
    sc_signal< sc_lv<1> > tmp_4_fu_194_p2;
    sc_signal< sc_lv<1> > sel_tmp7_fu_330_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_342_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_110_p3;
    sc_signal< sc_lv<1> > newSel_fu_354_p2;
    sc_signal< sc_lv<8> > new_exp_V_1_cast_fu_216_p1;
    sc_signal< sc_lv<8> > new_exp_V_2_fu_318_p2;
    sc_signal< sc_lv<1> > or_cond_fu_368_p2;
    sc_signal< sc_lv<8> > newSel_cast_fu_360_p3;
    sc_signal< sc_lv<8> > newSel1_fu_374_p3;
    sc_signal< sc_lv<1> > or_cond1_fu_382_p2;
    sc_signal< sc_lv<1> > or_cond2_fu_396_p2;
    sc_signal< sc_lv<8> > newSel2_fu_388_p3;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > r_V_fu_410_p2;
    sc_signal< sc_lv<6> > tmp_2_fu_433_p2;
    sc_signal< sc_lv<32> > tmp_s_fu_430_p1;
    sc_signal< sc_lv<32> > tmp_11_cast_fu_439_p1;
    sc_signal< sc_lv<26> > tmp_cast_fu_426_p1;
    sc_signal< sc_lv<32> > tmp_6_fu_443_p2;
    sc_signal< sc_lv<26> > tmp_9_fu_449_p2;
    sc_signal< sc_lv<1> > tmp_15_fu_415_p3;
    sc_signal< sc_lv<23> > tmp_17_fu_454_p1;
    sc_signal< sc_lv<23> > tmp_18_fu_458_p1;
    sc_signal< sc_lv<23> > new_mant_V_5_fu_462_p3;
    sc_signal< sc_lv<23> > new_mant_V_2_fu_423_p1;
    sc_signal< sc_lv<23> > new_mant_V_6_fu_470_p3;
    sc_signal< sc_lv<23> > new_mant_V_7_fu_476_p3;
    sc_signal< sc_lv<23> > new_mant_V_fu_483_p3;
    sc_signal< sc_lv<32> > p_Result_3_fu_489_p4;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<23> ap_const_lv23_2AAAAA;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_3;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<6> ap_const_lv6_3;
    static const sc_lv<8> ap_const_lv8_FD;
    static const sc_lv<8> ap_const_lv8_FE;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<6> ap_const_lv6_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<6> ap_const_lv6_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_clz_V_fu_190_p1();
    void thread_newSel1_fu_374_p3();
    void thread_newSel2_fu_388_p3();
    void thread_newSel_cast_fu_360_p3();
    void thread_newSel_fu_354_p2();
    void thread_new_exp_V_1_cast_fu_216_p1();
    void thread_new_exp_V_1_fu_210_p2();
    void thread_new_exp_V_2_fu_318_p2();
    void thread_new_exp_V_fu_100_p4();
    void thread_new_mant_V_1_fu_118_p1();
    void thread_new_mant_V_2_fu_423_p1();
    void thread_new_mant_V_3_fu_302_p3();
    void thread_new_mant_V_4_fu_310_p3();
    void thread_new_mant_V_5_fu_462_p3();
    void thread_new_mant_V_6_fu_470_p3();
    void thread_new_mant_V_7_fu_476_p3();
    void thread_new_mant_V_8_fu_282_p3();
    void thread_new_mant_V_fu_483_p3();
    void thread_or_cond1_fu_382_p2();
    void thread_or_cond2_fu_396_p2();
    void thread_or_cond_fu_368_p2();
    void thread_p_Repl2_1_fu_402_p3();
    void thread_p_Result_1_fu_174_p3();
    void thread_p_Result_2_fu_242_p1();
    void thread_p_Result_3_fu_489_p4();
    void thread_p_Result_s_fu_164_p4();
    void thread_p_Val2_s_fu_88_p1();
    void thread_p_cast_cast_fu_132_p3();
    void thread_p_shl1_fu_246_p4();
    void thread_p_shl_cast_fu_154_p1();
    void thread_p_shl_fu_146_p3();
    void thread_r_V_cast_cast_fu_220_p3();
    void thread_r_V_fu_410_p2();
    void thread_sel_tmp1_fu_296_p2();
    void thread_sel_tmp2_fu_342_p2();
    void thread_sel_tmp3_fu_348_p2();
    void thread_sel_tmp5_fu_324_p2();
    void thread_sel_tmp7_fu_330_p2();
    void thread_sel_tmp8_fu_336_p2();
    void thread_sel_tmp_fu_290_p2();
    void thread_tmp_10_fu_110_p3();
    void thread_tmp_11_cast_fu_439_p1();
    void thread_tmp_11_fu_272_p4();
    void thread_tmp_15_fu_415_p3();
    void thread_tmp_17_fu_454_p1();
    void thread_tmp_18_fu_458_p1();
    void thread_tmp_1_fu_140_p2();
    void thread_tmp_2_fu_433_p2();
    void thread_tmp_3_fu_228_p2();
    void thread_tmp_4_fu_194_p2();
    void thread_tmp_5_fu_200_p2();
    void thread_tmp_6_cast_fu_206_p1();
    void thread_tmp_6_fu_443_p2();
    void thread_tmp_7_fu_234_p3();
    void thread_tmp_8_fu_262_p4();
    void thread_tmp_9_fu_449_p2();
    void thread_tmp_cast_fu_426_p1();
    void thread_tmp_fu_126_p2();
    void thread_tmp_s_fu_430_p1();
    void thread_val_assign_fu_182_p3();
    void thread_xf_V_2_fu_256_p2();
    void thread_xf_V_3_fu_122_p1();
    void thread_xf_V_4_fu_158_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
