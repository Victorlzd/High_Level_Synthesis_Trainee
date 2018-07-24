// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "long_div3.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic long_div3::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic long_div3::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> long_div3::ap_ST_fsm_state1 = "1";
const sc_lv<8> long_div3::ap_ST_fsm_state2 = "10";
const sc_lv<8> long_div3::ap_ST_fsm_state3 = "100";
const sc_lv<8> long_div3::ap_ST_fsm_state4 = "1000";
const sc_lv<8> long_div3::ap_ST_fsm_state5 = "10000";
const sc_lv<8> long_div3::ap_ST_fsm_state6 = "100000";
const sc_lv<8> long_div3::ap_ST_fsm_state7 = "1000000";
const sc_lv<8> long_div3::ap_ST_fsm_state8 = "10000000";
const sc_lv<32> long_div3::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> long_div3::ap_const_lv32_1 = "1";
const sc_lv<32> long_div3::ap_const_lv32_2 = "10";
const sc_lv<32> long_div3::ap_const_lv32_3 = "11";
const sc_lv<32> long_div3::ap_const_lv32_4 = "100";
const sc_lv<32> long_div3::ap_const_lv32_5 = "101";
const sc_lv<32> long_div3::ap_const_lv32_6 = "110";
const sc_lv<32> long_div3::ap_const_lv32_7 = "111";
const sc_lv<2> long_div3::ap_const_lv2_0 = "00";
const sc_lv<32> long_div3::ap_const_lv32_3C = "111100";
const sc_lv<32> long_div3::ap_const_lv32_3F = "111111";
const sc_lv<32> long_div3::ap_const_lv32_38 = "111000";
const sc_lv<32> long_div3::ap_const_lv32_3B = "111011";
const sc_lv<32> long_div3::ap_const_lv32_34 = "110100";
const sc_lv<32> long_div3::ap_const_lv32_37 = "110111";
const sc_lv<32> long_div3::ap_const_lv32_30 = "110000";
const sc_lv<32> long_div3::ap_const_lv32_33 = "110011";
const sc_lv<32> long_div3::ap_const_lv32_2C = "101100";
const sc_lv<32> long_div3::ap_const_lv32_2F = "101111";
const sc_lv<32> long_div3::ap_const_lv32_28 = "101000";
const sc_lv<32> long_div3::ap_const_lv32_2B = "101011";
const sc_lv<32> long_div3::ap_const_lv32_24 = "100100";
const sc_lv<32> long_div3::ap_const_lv32_27 = "100111";
const sc_lv<32> long_div3::ap_const_lv32_20 = "100000";
const sc_lv<32> long_div3::ap_const_lv32_23 = "100011";
const sc_lv<32> long_div3::ap_const_lv32_1C = "11100";
const sc_lv<32> long_div3::ap_const_lv32_1F = "11111";
const sc_lv<32> long_div3::ap_const_lv32_18 = "11000";
const sc_lv<32> long_div3::ap_const_lv32_1B = "11011";
const sc_lv<32> long_div3::ap_const_lv32_14 = "10100";
const sc_lv<32> long_div3::ap_const_lv32_17 = "10111";
const sc_lv<32> long_div3::ap_const_lv32_10 = "10000";
const sc_lv<32> long_div3::ap_const_lv32_13 = "10011";
const sc_lv<32> long_div3::ap_const_lv32_C = "1100";
const sc_lv<32> long_div3::ap_const_lv32_F = "1111";
const sc_lv<32> long_div3::ap_const_lv32_8 = "1000";
const sc_lv<32> long_div3::ap_const_lv32_B = "1011";
const bool long_div3::ap_const_boolean_1 = true;

long_div3::long_div3(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_lut_div3_chunk_fu_86 = new lut_div3_chunk("grp_lut_div3_chunk_fu_86");
    grp_lut_div3_chunk_fu_86->ap_ready(grp_lut_div3_chunk_fu_86_ap_ready);
    grp_lut_div3_chunk_fu_86->d_V(grp_lut_div3_chunk_fu_86_d_V);
    grp_lut_div3_chunk_fu_86->r_in_V(grp_lut_div3_chunk_fu_86_r_in_V);
    grp_lut_div3_chunk_fu_86->ap_return_0(grp_lut_div3_chunk_fu_86_ap_return_0);
    grp_lut_div3_chunk_fu_86->ap_return_1(grp_lut_div3_chunk_fu_86_ap_return_1);
    grp_lut_div3_chunk_fu_93 = new lut_div3_chunk("grp_lut_div3_chunk_fu_93");
    grp_lut_div3_chunk_fu_93->ap_ready(grp_lut_div3_chunk_fu_93_ap_ready);
    grp_lut_div3_chunk_fu_93->d_V(grp_lut_div3_chunk_fu_93_d_V);
    grp_lut_div3_chunk_fu_93->r_in_V(grp_lut_div3_chunk_fu_86_ap_return_1);
    grp_lut_div3_chunk_fu_93->ap_return_0(grp_lut_div3_chunk_fu_93_ap_return_0);
    grp_lut_div3_chunk_fu_93->ap_return_1(grp_lut_div3_chunk_fu_93_ap_return_1);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_ap_return);
    sensitive << ( q_chunk_V_reg_299 );
    sensitive << ( q_chunk_V_0_1_reg_304 );
    sensitive << ( q_chunk_V_0_2_reg_379 );
    sensitive << ( q_chunk_V_0_3_reg_384 );
    sensitive << ( q_chunk_V_0_4_reg_389 );
    sensitive << ( q_chunk_V_0_5_reg_394 );
    sensitive << ( q_chunk_V_0_6_reg_399 );
    sensitive << ( q_chunk_V_0_7_reg_404 );
    sensitive << ( q_chunk_V_0_8_reg_409 );
    sensitive << ( q_chunk_V_0_9_reg_414 );
    sensitive << ( q_chunk_V_0_s_reg_419 );
    sensitive << ( q_chunk_V_0_10_reg_424 );
    sensitive << ( q_chunk_V_0_11_reg_429 );
    sensitive << ( q_chunk_V_0_12_reg_434 );
    sensitive << ( grp_lut_div3_chunk_fu_86_ap_return_0 );
    sensitive << ( grp_lut_div3_chunk_fu_93_ap_return_0 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_grp_lut_div3_chunk_fu_86_d_V);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in_r );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( p_Result_2_reg_309 );
    sensitive << ( p_Result_4_reg_319 );
    sensitive << ( p_Result_6_reg_329 );
    sensitive << ( p_Result_8_reg_339 );
    sensitive << ( p_Result_s_4_reg_349 );
    sensitive << ( p_Result_11_reg_359 );
    sensitive << ( p_Result_13_reg_369 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_grp_lut_div3_chunk_fu_86_r_in_V);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( reg_116 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_grp_lut_div3_chunk_fu_93_d_V);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in_r );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( p_Result_3_reg_314 );
    sensitive << ( p_Result_5_reg_324 );
    sensitive << ( p_Result_7_reg_334 );
    sensitive << ( p_Result_9_reg_344 );
    sensitive << ( p_Result_10_reg_354 );
    sensitive << ( p_Result_12_reg_364 );
    sensitive << ( tmp_reg_374 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_tmp_fu_273_p1);
    sensitive << ( in_r );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "00000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "long_div3_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, in_r, "(port)in_r");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, reg_116, "reg_116");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, q_chunk_V_reg_299, "q_chunk_V_reg_299");
    sc_trace(mVcdFile, q_chunk_V_0_1_reg_304, "q_chunk_V_0_1_reg_304");
    sc_trace(mVcdFile, p_Result_2_reg_309, "p_Result_2_reg_309");
    sc_trace(mVcdFile, p_Result_3_reg_314, "p_Result_3_reg_314");
    sc_trace(mVcdFile, p_Result_4_reg_319, "p_Result_4_reg_319");
    sc_trace(mVcdFile, p_Result_5_reg_324, "p_Result_5_reg_324");
    sc_trace(mVcdFile, p_Result_6_reg_329, "p_Result_6_reg_329");
    sc_trace(mVcdFile, p_Result_7_reg_334, "p_Result_7_reg_334");
    sc_trace(mVcdFile, p_Result_8_reg_339, "p_Result_8_reg_339");
    sc_trace(mVcdFile, p_Result_9_reg_344, "p_Result_9_reg_344");
    sc_trace(mVcdFile, p_Result_s_4_reg_349, "p_Result_s_4_reg_349");
    sc_trace(mVcdFile, p_Result_10_reg_354, "p_Result_10_reg_354");
    sc_trace(mVcdFile, p_Result_11_reg_359, "p_Result_11_reg_359");
    sc_trace(mVcdFile, p_Result_12_reg_364, "p_Result_12_reg_364");
    sc_trace(mVcdFile, p_Result_13_reg_369, "p_Result_13_reg_369");
    sc_trace(mVcdFile, tmp_fu_273_p1, "tmp_fu_273_p1");
    sc_trace(mVcdFile, tmp_reg_374, "tmp_reg_374");
    sc_trace(mVcdFile, q_chunk_V_0_2_reg_379, "q_chunk_V_0_2_reg_379");
    sc_trace(mVcdFile, q_chunk_V_0_3_reg_384, "q_chunk_V_0_3_reg_384");
    sc_trace(mVcdFile, q_chunk_V_0_4_reg_389, "q_chunk_V_0_4_reg_389");
    sc_trace(mVcdFile, q_chunk_V_0_5_reg_394, "q_chunk_V_0_5_reg_394");
    sc_trace(mVcdFile, q_chunk_V_0_6_reg_399, "q_chunk_V_0_6_reg_399");
    sc_trace(mVcdFile, q_chunk_V_0_7_reg_404, "q_chunk_V_0_7_reg_404");
    sc_trace(mVcdFile, q_chunk_V_0_8_reg_409, "q_chunk_V_0_8_reg_409");
    sc_trace(mVcdFile, q_chunk_V_0_9_reg_414, "q_chunk_V_0_9_reg_414");
    sc_trace(mVcdFile, q_chunk_V_0_s_reg_419, "q_chunk_V_0_s_reg_419");
    sc_trace(mVcdFile, q_chunk_V_0_10_reg_424, "q_chunk_V_0_10_reg_424");
    sc_trace(mVcdFile, q_chunk_V_0_11_reg_429, "q_chunk_V_0_11_reg_429");
    sc_trace(mVcdFile, q_chunk_V_0_12_reg_434, "q_chunk_V_0_12_reg_434");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_86_ap_ready, "grp_lut_div3_chunk_fu_86_ap_ready");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_86_d_V, "grp_lut_div3_chunk_fu_86_d_V");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_86_r_in_V, "grp_lut_div3_chunk_fu_86_r_in_V");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_86_ap_return_0, "grp_lut_div3_chunk_fu_86_ap_return_0");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_86_ap_return_1, "grp_lut_div3_chunk_fu_86_ap_return_1");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_93_ap_ready, "grp_lut_div3_chunk_fu_93_ap_ready");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_93_d_V, "grp_lut_div3_chunk_fu_93_d_V");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_93_ap_return_0, "grp_lut_div3_chunk_fu_93_ap_return_0");
    sc_trace(mVcdFile, grp_lut_div3_chunk_fu_93_ap_return_1, "grp_lut_div3_chunk_fu_93_ap_return_1");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("long_div3.hdltvin.dat");
    mHdltvoutHandle.open("long_div3.hdltvout.dat");
}

long_div3::~long_div3() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete grp_lut_div3_chunk_fu_86;
    delete grp_lut_div3_chunk_fu_93;
}

void long_div3::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        p_Result_10_reg_354 = in_r.read().range(19, 16);
        p_Result_11_reg_359 = in_r.read().range(15, 12);
        p_Result_12_reg_364 = in_r.read().range(11, 8);
        p_Result_13_reg_369 = in_r.read().range(7, 4);
        p_Result_2_reg_309 = in_r.read().range(55, 52);
        p_Result_3_reg_314 = in_r.read().range(51, 48);
        p_Result_4_reg_319 = in_r.read().range(47, 44);
        p_Result_5_reg_324 = in_r.read().range(43, 40);
        p_Result_6_reg_329 = in_r.read().range(39, 36);
        p_Result_7_reg_334 = in_r.read().range(35, 32);
        p_Result_8_reg_339 = in_r.read().range(31, 28);
        p_Result_9_reg_344 = in_r.read().range(27, 24);
        p_Result_s_4_reg_349 = in_r.read().range(23, 20);
        q_chunk_V_0_1_reg_304 = grp_lut_div3_chunk_fu_93_ap_return_0.read();
        q_chunk_V_reg_299 = grp_lut_div3_chunk_fu_86_ap_return_0.read();
        tmp_reg_374 = tmp_fu_273_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_chunk_V_0_10_reg_424 = grp_lut_div3_chunk_fu_93_ap_return_0.read();
        q_chunk_V_0_s_reg_419 = grp_lut_div3_chunk_fu_86_ap_return_0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        q_chunk_V_0_11_reg_429 = grp_lut_div3_chunk_fu_86_ap_return_0.read();
        q_chunk_V_0_12_reg_434 = grp_lut_div3_chunk_fu_93_ap_return_0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        q_chunk_V_0_2_reg_379 = grp_lut_div3_chunk_fu_86_ap_return_0.read();
        q_chunk_V_0_3_reg_384 = grp_lut_div3_chunk_fu_93_ap_return_0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        q_chunk_V_0_4_reg_389 = grp_lut_div3_chunk_fu_86_ap_return_0.read();
        q_chunk_V_0_5_reg_394 = grp_lut_div3_chunk_fu_93_ap_return_0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        q_chunk_V_0_6_reg_399 = grp_lut_div3_chunk_fu_86_ap_return_0.read();
        q_chunk_V_0_7_reg_404 = grp_lut_div3_chunk_fu_93_ap_return_0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        q_chunk_V_0_8_reg_409 = grp_lut_div3_chunk_fu_86_ap_return_0.read();
        q_chunk_V_0_9_reg_414 = grp_lut_div3_chunk_fu_93_ap_return_0.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        reg_116 = grp_lut_div3_chunk_fu_93_ap_return_1.read();
    }
}

void long_div3::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void long_div3::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void long_div3::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void long_div3::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void long_div3::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void long_div3::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void long_div3::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void long_div3::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void long_div3::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void long_div3::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void long_div3::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void long_div3::thread_ap_return() {
    ap_return = esl_concat<60,4>(esl_concat<56,4>(esl_concat<52,4>(esl_concat<48,4>(esl_concat<44,4>(esl_concat<40,4>(esl_concat<36,4>(esl_concat<32,4>(esl_concat<28,4>(esl_concat<24,4>(esl_concat<20,4>(esl_concat<16,4>(esl_concat<12,4>(esl_concat<8,4>(esl_concat<4,4>(q_chunk_V_reg_299.read(), q_chunk_V_0_1_reg_304.read()), q_chunk_V_0_2_reg_379.read()), q_chunk_V_0_3_reg_384.read()), q_chunk_V_0_4_reg_389.read()), q_chunk_V_0_5_reg_394.read()), q_chunk_V_0_6_reg_399.read()), q_chunk_V_0_7_reg_404.read()), q_chunk_V_0_8_reg_409.read()), q_chunk_V_0_9_reg_414.read()), q_chunk_V_0_s_reg_419.read()), q_chunk_V_0_10_reg_424.read()), q_chunk_V_0_11_reg_429.read()), q_chunk_V_0_12_reg_434.read()), grp_lut_div3_chunk_fu_86_ap_return_0.read()), grp_lut_div3_chunk_fu_93_ap_return_0.read());
}

void long_div3::thread_grp_lut_div3_chunk_fu_86_d_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_lut_div3_chunk_fu_86_d_V = p_Result_13_reg_369.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        grp_lut_div3_chunk_fu_86_d_V = p_Result_11_reg_359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_lut_div3_chunk_fu_86_d_V = p_Result_s_4_reg_349.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_lut_div3_chunk_fu_86_d_V = p_Result_8_reg_339.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        grp_lut_div3_chunk_fu_86_d_V = p_Result_6_reg_329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        grp_lut_div3_chunk_fu_86_d_V = p_Result_4_reg_319.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_lut_div3_chunk_fu_86_d_V = p_Result_2_reg_309.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_lut_div3_chunk_fu_86_d_V = in_r.read().range(63, 60);
    } else {
        grp_lut_div3_chunk_fu_86_d_V = "XXXX";
    }
}

void long_div3::thread_grp_lut_div3_chunk_fu_86_r_in_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        grp_lut_div3_chunk_fu_86_r_in_V = reg_116.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_lut_div3_chunk_fu_86_r_in_V = ap_const_lv2_0;
    } else {
        grp_lut_div3_chunk_fu_86_r_in_V =  (sc_lv<2>) ("XX");
    }
}

void long_div3::thread_grp_lut_div3_chunk_fu_93_d_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_lut_div3_chunk_fu_93_d_V = tmp_reg_374.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        grp_lut_div3_chunk_fu_93_d_V = p_Result_12_reg_364.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_lut_div3_chunk_fu_93_d_V = p_Result_10_reg_354.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_lut_div3_chunk_fu_93_d_V = p_Result_9_reg_344.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        grp_lut_div3_chunk_fu_93_d_V = p_Result_7_reg_334.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        grp_lut_div3_chunk_fu_93_d_V = p_Result_5_reg_324.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_lut_div3_chunk_fu_93_d_V = p_Result_3_reg_314.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_lut_div3_chunk_fu_93_d_V = in_r.read().range(59, 56);
    } else {
        grp_lut_div3_chunk_fu_93_d_V = "XXXX";
    }
}

void long_div3::thread_tmp_fu_273_p1() {
    tmp_fu_273_p1 = in_r.read().range(4-1, 0);
}

void long_div3::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

void long_div3::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_r\" :  \"" << in_r.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
