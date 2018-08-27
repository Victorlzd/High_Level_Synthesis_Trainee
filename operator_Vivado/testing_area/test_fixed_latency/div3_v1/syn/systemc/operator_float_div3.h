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

#include "lut_div3_chunk.h"
#include "operator_float_dibkb.h"
#include "operator_float_dicud.h"

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
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    operator_float_div3(sc_module_name name);
    SC_HAS_PROCESS(operator_float_div3);

    ~operator_float_div3();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    lut_div3_chunk* grp_lut_div3_chunk_fu_94;
    operator_float_dibkb<1,4,1,23,8,23>* operator_float_dibkb_U9;
    operator_float_dicud<1,4,0,32,8,32>* operator_float_dicud_U10;
    sc_signal< sc_lv<22> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > reg_117;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_94_ap_idle;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_94_ap_ready;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_94_ap_done;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<1> > p_Repl2_2_reg_456;
    sc_signal< sc_lv<8> > new_exp_V_fu_134_p4;
    sc_signal< sc_lv<8> > new_exp_V_reg_461;
    sc_signal< sc_lv<23> > new_mant_V_1_fu_144_p1;
    sc_signal< sc_lv<23> > new_mant_V_1_reg_469;
    sc_signal< sc_lv<8> > shift_V_cast_cast_fu_156_p3;
    sc_signal< sc_lv<8> > shift_V_cast_cast_reg_476;
    sc_signal< sc_lv<1> > tmp_3_fu_164_p2;
    sc_signal< sc_lv<1> > tmp_3_reg_483;
    sc_signal< sc_lv<1> > tmp_4_fu_170_p2;
    sc_signal< sc_lv<1> > tmp_4_reg_491;
    sc_signal< sc_lv<1> > icmp_fu_186_p2;
    sc_signal< sc_lv<1> > icmp_reg_497;
    sc_signal< sc_lv<8> > shift_V_fu_192_p2;
    sc_signal< sc_lv<8> > shift_V_reg_503;
    sc_signal< sc_lv<8> > shift_V_1_fu_198_p2;
    sc_signal< sc_lv<8> > shift_V_1_reg_508;
    sc_signal< sc_lv<8> > shift_V_4_fu_258_p3;
    sc_signal< sc_lv<8> > shift_V_4_reg_513;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_5_fu_265_p2;
    sc_signal< sc_lv<1> > tmp_5_reg_519;
    sc_signal< sc_lv<8> > p_Repl2_1_fu_270_p3;
    sc_signal< sc_lv<8> > p_Repl2_1_reg_524;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<23> > grp_fu_286_p2;
    sc_signal< sc_lv<23> > tmp_2_reg_544;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<26> > tmp_11_fu_297_p1;
    sc_signal< sc_lv<26> > tmp_11_reg_549;
    sc_signal< sc_lv<26> > xf_V_fu_304_p3;
    sc_signal< sc_lv<26> > xf_V_reg_554;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<2> > p_Result_i_i_reg_560;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > p_Result_25_i_i_reg_565;
    sc_signal< sc_lv<4> > p_Result_25_1_i_i_reg_570;
    sc_signal< sc_lv<4> > p_Result_25_2_i_i_reg_575;
    sc_signal< sc_lv<4> > p_Result_25_3_i_i_reg_580;
    sc_signal< sc_lv<4> > p_Result_25_4_i_i_reg_585;
    sc_signal< sc_lv<4> > tmp_13_fu_391_p1;
    sc_signal< sc_lv<4> > tmp_13_reg_590;
    sc_signal< sc_lv<4> > d_chunk_V_fu_395_p1;
    sc_signal< sc_lv<4> > d_chunk_V_reg_595;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_94_ap_return_0;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_94_ap_return_1;
    sc_signal< sc_lv<4> > call_ret2_i_i_reg_600_0;
    sc_signal< sc_lv<4> > call_ret3_i_i_reg_605_0;
    sc_signal< sc_lv<4> > call_ret4_i_i_reg_610_0;
    sc_signal< sc_lv<4> > call_ret5_i_i_reg_615_0;
    sc_signal< sc_lv<4> > call_ret6_i_i_reg_620_0;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_94_ap_start;
    sc_signal< sc_lv<4> > grp_lut_div3_chunk_fu_94_d_V;
    sc_signal< sc_lv<2> > grp_lut_div3_chunk_fu_94_r_in_V;
    sc_signal< sc_logic > grp_lut_div3_chunk_fu_94_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<32> > p_Val2_s_fu_122_p1;
    sc_signal< sc_lv<1> > tmp_fu_148_p3;
    sc_signal< sc_lv<7> > tmp_8_fu_176_p4;
    sc_signal< sc_lv<1> > tmp_1_fu_204_p2;
    sc_signal< sc_lv<8> > new_exp_V_1_fu_208_p2;
    sc_signal< sc_lv<1> > sel_tmp2_demorgan_fu_220_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_224_p2;
    sc_signal< sc_lv<1> > sel_tmp3_fu_230_p2;
    sc_signal< sc_lv<8> > shift_V_2_fu_235_p3;
    sc_signal< sc_lv<1> > sel_tmp6_fu_248_p2;
    sc_signal< sc_lv<1> > sel_tmp7_fu_253_p2;
    sc_signal< sc_lv<8> > shift_V_3_fu_241_p3;
    sc_signal< sc_lv<8> > new_exp_V_2_fu_212_p3;
    sc_signal< sc_lv<23> > grp_fu_286_p1;
    sc_signal< sc_lv<32> > grp_fu_291_p0;
    sc_signal< sc_lv<32> > grp_fu_291_p1;
    sc_signal< sc_lv<32> > grp_fu_291_p2;
    sc_signal< sc_lv<26> > tmp_6_fu_301_p1;
    sc_signal< sc_lv<26> > p_Result_s_fu_310_p4;
    sc_signal< sc_lv<26> > xf_V_1_fu_319_p3;
    sc_signal< sc_lv<26> > xf_V_4_fu_325_p2;
    sc_signal< sc_lv<3> > tmp_14_fu_418_p1;
    sc_signal< sc_lv<23> > new_mant_V_fu_422_p7;
    sc_signal< sc_lv<23> > p_Repl2_s_fu_438_p3;
    sc_signal< sc_lv<32> > p_Result_1_fu_444_p4;
    sc_signal< sc_lv<22> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<22> ap_ST_fsm_state1;
    static const sc_lv<22> ap_ST_fsm_state2;
    static const sc_lv<22> ap_ST_fsm_state3;
    static const sc_lv<22> ap_ST_fsm_state4;
    static const sc_lv<22> ap_ST_fsm_state5;
    static const sc_lv<22> ap_ST_fsm_state6;
    static const sc_lv<22> ap_ST_fsm_state7;
    static const sc_lv<22> ap_ST_fsm_state8;
    static const sc_lv<22> ap_ST_fsm_state9;
    static const sc_lv<22> ap_ST_fsm_state10;
    static const sc_lv<22> ap_ST_fsm_state11;
    static const sc_lv<22> ap_ST_fsm_state12;
    static const sc_lv<22> ap_ST_fsm_state13;
    static const sc_lv<22> ap_ST_fsm_state14;
    static const sc_lv<22> ap_ST_fsm_state15;
    static const sc_lv<22> ap_ST_fsm_state16;
    static const sc_lv<22> ap_ST_fsm_state17;
    static const sc_lv<22> ap_ST_fsm_state18;
    static const sc_lv<22> ap_ST_fsm_state19;
    static const sc_lv<22> ap_ST_fsm_state20;
    static const sc_lv<22> ap_ST_fsm_state21;
    static const sc_lv<22> ap_ST_fsm_state22;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<26> ap_const_lv26_1;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_d_chunk_V_fu_395_p1();
    void thread_grp_fu_286_p1();
    void thread_grp_fu_291_p0();
    void thread_grp_fu_291_p1();
    void thread_grp_lut_div3_chunk_fu_94_ap_start();
    void thread_grp_lut_div3_chunk_fu_94_d_V();
    void thread_grp_lut_div3_chunk_fu_94_r_in_V();
    void thread_icmp_fu_186_p2();
    void thread_new_exp_V_1_fu_208_p2();
    void thread_new_exp_V_2_fu_212_p3();
    void thread_new_exp_V_fu_134_p4();
    void thread_new_mant_V_1_fu_144_p1();
    void thread_new_mant_V_fu_422_p7();
    void thread_p_Repl2_1_fu_270_p3();
    void thread_p_Repl2_s_fu_438_p3();
    void thread_p_Result_1_fu_444_p4();
    void thread_p_Result_s_fu_310_p4();
    void thread_p_Val2_s_fu_122_p1();
    void thread_sel_tmp2_demorgan_fu_220_p2();
    void thread_sel_tmp2_fu_224_p2();
    void thread_sel_tmp3_fu_230_p2();
    void thread_sel_tmp6_fu_248_p2();
    void thread_sel_tmp7_fu_253_p2();
    void thread_shift_V_1_fu_198_p2();
    void thread_shift_V_2_fu_235_p3();
    void thread_shift_V_3_fu_241_p3();
    void thread_shift_V_4_fu_258_p3();
    void thread_shift_V_cast_cast_fu_156_p3();
    void thread_shift_V_fu_192_p2();
    void thread_tmp_11_fu_297_p1();
    void thread_tmp_13_fu_391_p1();
    void thread_tmp_14_fu_418_p1();
    void thread_tmp_1_fu_204_p2();
    void thread_tmp_3_fu_164_p2();
    void thread_tmp_4_fu_170_p2();
    void thread_tmp_5_fu_265_p2();
    void thread_tmp_6_fu_301_p1();
    void thread_tmp_8_fu_176_p4();
    void thread_tmp_fu_148_p3();
    void thread_xf_V_1_fu_319_p3();
    void thread_xf_V_4_fu_325_p2();
    void thread_xf_V_fu_304_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
