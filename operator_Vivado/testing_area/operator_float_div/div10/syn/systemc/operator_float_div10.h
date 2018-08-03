// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _operator_float_div10_HH_
#define _operator_float_div10_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lut_div5_chunk.h"

namespace ap_rtl {

struct operator_float_div10 : public sc_module {
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
    operator_float_div10(sc_module_name name);
    SC_HAS_PROCESS(operator_float_div10);

    ~operator_float_div10();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    lut_div5_chunk* grp_lut_div5_chunk_fu_115;
    lut_div5_chunk* grp_lut_div5_chunk_fu_122;
    lut_div5_chunk* grp_lut_div5_chunk_fu_128;
    lut_div5_chunk* grp_lut_div5_chunk_fu_134;
    lut_div5_chunk* call_ret4_7_i_i_lut_div5_chunk_fu_140;
    lut_div5_chunk* call_ret4_8_i_i_lut_div5_chunk_fu_146;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > p_Repl2_2_reg_584;
    sc_signal< sc_lv<23> > new_mant_V_fu_202_p1;
    sc_signal< sc_lv<1> > tmp_1_fu_234_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_594;
    sc_signal< sc_lv<8> > p_Repl2_1_fu_266_p3;
    sc_signal< sc_lv<8> > p_Repl2_1_reg_598;
    sc_signal< sc_lv<3> > q_chunk_V_ret2_2_i_i_reg_603;
    sc_signal< sc_lv<3> > r_V_ret3_2_i_i_reg_608;
    sc_signal< sc_lv<3> > p_Result_22_3_i_i_reg_613;
    sc_signal< sc_lv<3> > p_Result_22_4_i_i_reg_618;
    sc_signal< sc_lv<3> > p_Result_22_5_i_i_reg_623;
    sc_signal< sc_lv<3> > p_Result_22_6_i_i_reg_628;
    sc_signal< sc_lv<3> > p_Result_22_7_i_i_reg_633;
    sc_signal< sc_lv<3> > tmp_15_fu_524_p1;
    sc_signal< sc_lv<3> > tmp_15_reg_638;
    sc_signal< sc_lv<2> > tmp_16_fu_528_p1;
    sc_signal< sc_lv<2> > tmp_16_reg_643;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_115_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_115_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_115_r_in_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_115_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_115_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_122_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_122_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_122_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_122_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_128_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_128_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_128_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_128_ap_return_1;
    sc_signal< sc_logic > grp_lut_div5_chunk_fu_134_ap_ready;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_134_d_V;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_134_ap_return_0;
    sc_signal< sc_lv<3> > grp_lut_div5_chunk_fu_134_ap_return_1;
    sc_signal< sc_logic > call_ret4_7_i_i_lut_div5_chunk_fu_140_ap_ready;
    sc_signal< sc_lv<3> > call_ret4_7_i_i_lut_div5_chunk_fu_140_ap_return_0;
    sc_signal< sc_lv<3> > call_ret4_7_i_i_lut_div5_chunk_fu_140_ap_return_1;
    sc_signal< sc_logic > call_ret4_8_i_i_lut_div5_chunk_fu_146_ap_ready;
    sc_signal< sc_lv<3> > call_ret4_8_i_i_lut_div5_chunk_fu_146_ap_return_0;
    sc_signal< sc_lv<3> > call_ret4_8_i_i_lut_div5_chunk_fu_146_ap_return_1;
    sc_signal< sc_lv<23> > new_mant_V_1_fu_553_p9;
    sc_signal< sc_lv<23> > ap_phi_mux_p_Repl2_s_phi_fu_109_p4;
    sc_signal< sc_lv<23> > p_Repl2_s_reg_106;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<3> > d_chunk_V_fu_436_p1;
    sc_signal< sc_lv<32> > p_Val2_s_fu_180_p1;
    sc_signal< sc_lv<2> > tmp_fu_210_p4;
    sc_signal< sc_lv<1> > icmp_fu_220_p2;
    sc_signal< sc_lv<8> > new_exp_V_fu_192_p4;
    sc_signal< sc_lv<8> > p_cast_cast_fu_226_p3;
    sc_signal< sc_lv<1> > tmp_2_fu_240_p2;
    sc_signal< sc_lv<1> > tmp_9_fu_260_p2;
    sc_signal< sc_lv<8> > p_new_exp_V_1_fu_252_p3;
    sc_signal< sc_lv<8> > new_exp_V_1_fu_246_p2;
    sc_signal< sc_lv<1> > tmp_4_fu_274_p2;
    sc_signal< sc_lv<1> > tmp_5_fu_280_p2;
    sc_signal< sc_lv<1> > sel_tmp_fu_312_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_318_p2;
    sc_signal< sc_lv<8> > shift_V_cast_cast_fu_286_p3;
    sc_signal< sc_lv<8> > shift_V_1_fu_306_p2;
    sc_signal< sc_lv<1> > sel_tmp6_demorgan_fu_332_p2;
    sc_signal< sc_lv<1> > tmp_7_fu_294_p2;
    sc_signal< sc_lv<1> > sel_tmp6_fu_338_p2;
    sc_signal< sc_lv<1> > sel_tmp7_fu_344_p2;
    sc_signal< sc_lv<8> > shift_V_fu_300_p2;
    sc_signal< sc_lv<8> > shift_V_2_fu_324_p3;
    sc_signal< sc_lv<8> > shift_V_3_fu_350_p3;
    sc_signal< sc_lv<24> > xf_V_3_cast_fu_206_p1;
    sc_signal< sc_lv<24> > tmp_s_fu_366_p3;
    sc_signal< sc_lv<24> > xf_V_1_fu_374_p3;
    sc_signal< sc_lv<8> > shift_V_4_fu_358_p3;
    sc_signal< sc_lv<24> > tmp_6_cast_fu_390_p1;
    sc_signal< sc_lv<32> > tmp_3_fu_382_p1;
    sc_signal< sc_lv<32> > tmp_6_fu_386_p1;
    sc_signal< sc_lv<24> > tmp_8_fu_394_p2;
    sc_signal< sc_lv<32> > tmp_10_fu_400_p2;
    sc_signal< sc_lv<28> > tmp_11_fu_406_p1;
    sc_signal< sc_lv<28> > tmp_13_fu_410_p1;
    sc_signal< sc_lv<28> > xf_V_2_fu_414_p3;
    sc_signal< sc_lv<28> > xf_V_fu_422_p2;
    sc_signal< sc_lv<1> > tmp_14_fu_428_p3;
    sc_signal< sc_lv<32> > p_Result_s_fu_572_p4;
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
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<8> ap_const_lv8_4;
    static const sc_lv<8> ap_const_lv8_3;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_FE;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<28> ap_const_lv28_2;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1A;
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
    void thread_ap_phi_mux_p_Repl2_s_phi_fu_109_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_d_chunk_V_fu_436_p1();
    void thread_grp_lut_div5_chunk_fu_115_d_V();
    void thread_grp_lut_div5_chunk_fu_115_r_in_V();
    void thread_grp_lut_div5_chunk_fu_122_d_V();
    void thread_grp_lut_div5_chunk_fu_128_d_V();
    void thread_grp_lut_div5_chunk_fu_134_d_V();
    void thread_icmp_fu_220_p2();
    void thread_new_exp_V_1_fu_246_p2();
    void thread_new_exp_V_fu_192_p4();
    void thread_new_mant_V_1_fu_553_p9();
    void thread_new_mant_V_fu_202_p1();
    void thread_p_Repl2_1_fu_266_p3();
    void thread_p_Result_s_fu_572_p4();
    void thread_p_Val2_s_fu_180_p1();
    void thread_p_cast_cast_fu_226_p3();
    void thread_p_new_exp_V_1_fu_252_p3();
    void thread_sel_tmp2_fu_318_p2();
    void thread_sel_tmp6_demorgan_fu_332_p2();
    void thread_sel_tmp6_fu_338_p2();
    void thread_sel_tmp7_fu_344_p2();
    void thread_sel_tmp_fu_312_p2();
    void thread_shift_V_1_fu_306_p2();
    void thread_shift_V_2_fu_324_p3();
    void thread_shift_V_3_fu_350_p3();
    void thread_shift_V_4_fu_358_p3();
    void thread_shift_V_cast_cast_fu_286_p3();
    void thread_shift_V_fu_300_p2();
    void thread_tmp_10_fu_400_p2();
    void thread_tmp_11_fu_406_p1();
    void thread_tmp_13_fu_410_p1();
    void thread_tmp_14_fu_428_p3();
    void thread_tmp_15_fu_524_p1();
    void thread_tmp_16_fu_528_p1();
    void thread_tmp_1_fu_234_p2();
    void thread_tmp_2_fu_240_p2();
    void thread_tmp_3_fu_382_p1();
    void thread_tmp_4_fu_274_p2();
    void thread_tmp_5_fu_280_p2();
    void thread_tmp_6_cast_fu_390_p1();
    void thread_tmp_6_fu_386_p1();
    void thread_tmp_7_fu_294_p2();
    void thread_tmp_8_fu_394_p2();
    void thread_tmp_9_fu_260_p2();
    void thread_tmp_fu_210_p4();
    void thread_tmp_s_fu_366_p3();
    void thread_xf_V_1_fu_374_p3();
    void thread_xf_V_2_fu_414_p3();
    void thread_xf_V_3_cast_fu_206_p1();
    void thread_xf_V_fu_422_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
