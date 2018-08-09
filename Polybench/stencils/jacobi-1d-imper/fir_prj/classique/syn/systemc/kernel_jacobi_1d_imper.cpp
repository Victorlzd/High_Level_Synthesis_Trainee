// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "kernel_jacobi_1d_imper.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic kernel_jacobi_1d_imper::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic kernel_jacobi_1d_imper::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state1 = "1";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state2 = "10";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state3 = "100";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state4 = "1000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state5 = "10000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state6 = "100000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state7 = "1000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state8 = "10000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state9 = "100000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state10 = "1000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state11 = "10000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state12 = "100000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state13 = "1000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state14 = "10000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state15 = "100000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state16 = "1000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state17 = "10000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state18 = "100000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state19 = "1000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state20 = "10000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state21 = "100000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state22 = "1000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state23 = "10000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state24 = "100000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state25 = "1000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state26 = "10000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state27 = "100000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state28 = "1000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state29 = "10000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state30 = "100000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state31 = "1000000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state32 = "10000000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state33 = "100000000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state34 = "1000000000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state35 = "10000000000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state36 = "100000000000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state37 = "1000000000000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state38 = "10000000000000000000000000000000000000";
const sc_lv<39> kernel_jacobi_1d_imper::ap_ST_fsm_state39 = "100000000000000000000000000000000000000";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_3 = "11";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_8 = "1000";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_D = "1101";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_1 = "1";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_2 = "10";
const sc_lv<1> kernel_jacobi_1d_imper::ap_const_lv1_0 = "0";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_7 = "111";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_23 = "100011";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_25 = "100101";
const sc_lv<7> kernel_jacobi_1d_imper::ap_const_lv7_0 = "0000000";
const sc_lv<1> kernel_jacobi_1d_imper::ap_const_lv1_1 = "1";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_24 = "100100";
const sc_lv<14> kernel_jacobi_1d_imper::ap_const_lv14_1 = "1";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_26 = "100110";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_4 = "100";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_9 = "1001";
const sc_lv<64> kernel_jacobi_1d_imper::ap_const_lv64_4008000000000000 = "100000000001000000000000000000000000000000000000000000000000000";
const sc_lv<32> kernel_jacobi_1d_imper::ap_const_lv32_E = "1110";
const sc_lv<7> kernel_jacobi_1d_imper::ap_const_lv7_64 = "1100100";
const sc_lv<7> kernel_jacobi_1d_imper::ap_const_lv7_1 = "1";
const sc_lv<14> kernel_jacobi_1d_imper::ap_const_lv14_270F = "10011100001111";
const sc_lv<14> kernel_jacobi_1d_imper::ap_const_lv14_3FFF = "11111111111111";
const bool kernel_jacobi_1d_imper::ap_const_boolean_1 = true;

kernel_jacobi_1d_imper::kernel_jacobi_1d_imper(sc_module_name name) : sc_module(name), mVcdFile(0) {
    kernel_jacobi_1d_bkb_U1 = new kernel_jacobi_1d_bkb<1,5,64,64,64>("kernel_jacobi_1d_bkb_U1");
    kernel_jacobi_1d_bkb_U1->clk(ap_clk);
    kernel_jacobi_1d_bkb_U1->reset(ap_rst);
    kernel_jacobi_1d_bkb_U1->din0(grp_fu_133_p0);
    kernel_jacobi_1d_bkb_U1->din1(grp_fu_133_p1);
    kernel_jacobi_1d_bkb_U1->ce(ap_var_for_const0);
    kernel_jacobi_1d_bkb_U1->dout(grp_fu_133_p2);
    kernel_jacobi_1d_cud_U2 = new kernel_jacobi_1d_cud<1,22,64,64,64>("kernel_jacobi_1d_cud_U2");
    kernel_jacobi_1d_cud_U2->clk(ap_clk);
    kernel_jacobi_1d_cud_U2->reset(ap_rst);
    kernel_jacobi_1d_cud_U2->din0(reg_148);
    kernel_jacobi_1d_cud_U2->din1(ap_var_for_const1);
    kernel_jacobi_1d_cud_U2->ce(ap_var_for_const0);
    kernel_jacobi_1d_cud_U2->dout(grp_fu_137_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_A_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( tmp_1_fu_178_p1 );
    sensitive << ( tmp_5_fu_194_p1 );

    SC_METHOD(thread_A_address1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_2_fu_183_p1 );
    sensitive << ( tmp_9_reg_265 );
    sensitive << ( ap_CS_fsm_state39 );

    SC_METHOD(thread_A_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_A_ce1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state39 );

    SC_METHOD(thread_A_d1);
    sensitive << ( B_q0 );
    sensitive << ( ap_CS_fsm_state39 );

    SC_METHOD(thread_A_we1);
    sensitive << ( ap_CS_fsm_state39 );

    SC_METHOD(thread_B_address0);
    sensitive << ( tmp_2_reg_232 );
    sensitive << ( tmp_9_fu_205_p1 );
    sensitive << ( ap_CS_fsm_state38 );
    sensitive << ( ap_CS_fsm_state37 );

    SC_METHOD(thread_B_ce0);
    sensitive << ( ap_CS_fsm_state38 );
    sensitive << ( ap_CS_fsm_state37 );

    SC_METHOD(thread_B_d0);
    sensitive << ( tmp_7_reg_257 );
    sensitive << ( ap_CS_fsm_state37 );

    SC_METHOD(thread_B_we0);
    sensitive << ( ap_CS_fsm_state37 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state14);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state15);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state36);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state37);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state38);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state39);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond2_fu_154_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond2_fu_154_p2 );

    SC_METHOD(thread_exitcond1_fu_166_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( i_reg_110 );

    SC_METHOD(thread_exitcond2_fu_154_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( t_reg_99 );

    SC_METHOD(thread_exitcond_fu_199_p2);
    sensitive << ( ap_CS_fsm_state38 );
    sensitive << ( j_reg_122 );

    SC_METHOD(thread_grp_fu_133_p0);
    sensitive << ( reg_142 );
    sensitive << ( reg_148 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_grp_fu_133_p1);
    sensitive << ( reg_142 );
    sensitive << ( A_load_1_reg_242 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_i_1_fu_188_p2);
    sensitive << ( i_reg_110 );

    SC_METHOD(thread_j_1_fu_210_p2);
    sensitive << ( j_reg_122 );

    SC_METHOD(thread_t_1_fu_160_p2);
    sensitive << ( t_reg_99 );

    SC_METHOD(thread_tmp_1_fu_178_p1);
    sensitive << ( tmp_fu_172_p2 );

    SC_METHOD(thread_tmp_2_fu_183_p1);
    sensitive << ( i_reg_110 );

    SC_METHOD(thread_tmp_5_fu_194_p1);
    sensitive << ( i_1_fu_188_p2 );

    SC_METHOD(thread_tmp_9_fu_205_p1);
    sensitive << ( j_reg_122 );

    SC_METHOD(thread_tmp_fu_172_p2);
    sensitive << ( i_reg_110 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond1_fu_166_p2 );
    sensitive << ( ap_CS_fsm_state38 );
    sensitive << ( exitcond_fu_199_p2 );
    sensitive << ( exitcond2_fu_154_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    ap_CS_fsm = "000000000000000000000000000000000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "kernel_jacobi_1d_imper_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, tsteps, "(port)tsteps");
    sc_trace(mVcdFile, n, "(port)n");
    sc_trace(mVcdFile, A_address0, "(port)A_address0");
    sc_trace(mVcdFile, A_ce0, "(port)A_ce0");
    sc_trace(mVcdFile, A_q0, "(port)A_q0");
    sc_trace(mVcdFile, A_address1, "(port)A_address1");
    sc_trace(mVcdFile, A_ce1, "(port)A_ce1");
    sc_trace(mVcdFile, A_we1, "(port)A_we1");
    sc_trace(mVcdFile, A_d1, "(port)A_d1");
    sc_trace(mVcdFile, A_q1, "(port)A_q1");
    sc_trace(mVcdFile, B_address0, "(port)B_address0");
    sc_trace(mVcdFile, B_ce0, "(port)B_ce0");
    sc_trace(mVcdFile, B_we0, "(port)B_we0");
    sc_trace(mVcdFile, B_d0, "(port)B_d0");
    sc_trace(mVcdFile, B_q0, "(port)B_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, reg_142, "reg_142");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, grp_fu_133_p2, "grp_fu_133_p2");
    sc_trace(mVcdFile, reg_148, "reg_148");
    sc_trace(mVcdFile, ap_CS_fsm_state14, "ap_CS_fsm_state14");
    sc_trace(mVcdFile, t_1_fu_160_p2, "t_1_fu_160_p2");
    sc_trace(mVcdFile, t_1_reg_219, "t_1_reg_219");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, exitcond1_fu_166_p2, "exitcond1_fu_166_p2");
    sc_trace(mVcdFile, tmp_2_fu_183_p1, "tmp_2_fu_183_p1");
    sc_trace(mVcdFile, tmp_2_reg_232, "tmp_2_reg_232");
    sc_trace(mVcdFile, A_load_1_reg_242, "A_load_1_reg_242");
    sc_trace(mVcdFile, i_1_fu_188_p2, "i_1_fu_188_p2");
    sc_trace(mVcdFile, i_1_reg_247, "i_1_reg_247");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, grp_fu_137_p2, "grp_fu_137_p2");
    sc_trace(mVcdFile, tmp_7_reg_257, "tmp_7_reg_257");
    sc_trace(mVcdFile, ap_CS_fsm_state36, "ap_CS_fsm_state36");
    sc_trace(mVcdFile, tmp_9_fu_205_p1, "tmp_9_fu_205_p1");
    sc_trace(mVcdFile, tmp_9_reg_265, "tmp_9_reg_265");
    sc_trace(mVcdFile, ap_CS_fsm_state38, "ap_CS_fsm_state38");
    sc_trace(mVcdFile, exitcond_fu_199_p2, "exitcond_fu_199_p2");
    sc_trace(mVcdFile, j_1_fu_210_p2, "j_1_fu_210_p2");
    sc_trace(mVcdFile, j_1_reg_275, "j_1_reg_275");
    sc_trace(mVcdFile, t_reg_99, "t_reg_99");
    sc_trace(mVcdFile, i_reg_110, "i_reg_110");
    sc_trace(mVcdFile, ap_CS_fsm_state37, "ap_CS_fsm_state37");
    sc_trace(mVcdFile, exitcond2_fu_154_p2, "exitcond2_fu_154_p2");
    sc_trace(mVcdFile, j_reg_122, "j_reg_122");
    sc_trace(mVcdFile, ap_CS_fsm_state39, "ap_CS_fsm_state39");
    sc_trace(mVcdFile, tmp_1_fu_178_p1, "tmp_1_fu_178_p1");
    sc_trace(mVcdFile, tmp_5_fu_194_p1, "tmp_5_fu_194_p1");
    sc_trace(mVcdFile, grp_fu_133_p0, "grp_fu_133_p0");
    sc_trace(mVcdFile, grp_fu_133_p1, "grp_fu_133_p1");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, ap_CS_fsm_state15, "ap_CS_fsm_state15");
    sc_trace(mVcdFile, tmp_fu_172_p2, "tmp_fu_172_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("kernel_jacobi_1d_imper.hdltvin.dat");
    mHdltvoutHandle.open("kernel_jacobi_1d_imper.hdltvout.dat");
}

kernel_jacobi_1d_imper::~kernel_jacobi_1d_imper() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete kernel_jacobi_1d_bkb_U1;
    delete kernel_jacobi_1d_cud_U2;
}

void kernel_jacobi_1d_imper::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void kernel_jacobi_1d_imper::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv64_4008000000000000;
}

void kernel_jacobi_1d_imper::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond2_fu_154_p2.read(), ap_const_lv1_0))) {
        i_reg_110 = ap_const_lv14_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        i_reg_110 = i_1_reg_247.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_166_p2.read(), ap_const_lv1_1))) {
        j_reg_122 = ap_const_lv14_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        j_reg_122 = j_1_reg_275.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_199_p2.read(), ap_const_lv1_1))) {
        t_reg_99 = t_1_reg_219.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        t_reg_99 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        A_load_1_reg_242 = A_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        i_1_reg_247 = i_1_fu_188_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && esl_seteq<1,1,1>(exitcond_fu_199_p2.read(), ap_const_lv1_0))) {
        j_1_reg_275 = j_1_fu_210_p2.read();
        tmp_9_reg_265 = tmp_9_fu_205_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        reg_142 = A_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        reg_148 = grp_fu_133_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        t_1_reg_219 = t_1_fu_160_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond1_fu_166_p2.read(), ap_const_lv1_0))) {
        tmp_2_reg_232 = tmp_2_fu_183_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        tmp_7_reg_257 = grp_fu_137_p2.read();
    }
}

void kernel_jacobi_1d_imper::thread_A_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        A_address0 =  (sc_lv<14>) (tmp_5_fu_194_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A_address0 =  (sc_lv<14>) (tmp_1_fu_178_p1.read());
    } else {
        A_address0 = "XXXXXXXXXXXXXX";
    }
}

void kernel_jacobi_1d_imper::thread_A_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        A_address1 =  (sc_lv<14>) (tmp_9_reg_265.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A_address1 =  (sc_lv<14>) (tmp_2_fu_183_p1.read());
    } else {
        A_address1 = "XXXXXXXXXXXXXX";
    }
}

void kernel_jacobi_1d_imper::thread_A_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        A_ce0 = ap_const_logic_1;
    } else {
        A_ce0 = ap_const_logic_0;
    }
}

void kernel_jacobi_1d_imper::thread_A_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()))) {
        A_ce1 = ap_const_logic_1;
    } else {
        A_ce1 = ap_const_logic_0;
    }
}

void kernel_jacobi_1d_imper::thread_A_d1() {
    A_d1 = B_q0.read();
}

void kernel_jacobi_1d_imper::thread_A_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        A_we1 = ap_const_logic_1;
    } else {
        A_we1 = ap_const_logic_0;
    }
}

void kernel_jacobi_1d_imper::thread_B_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        B_address0 =  (sc_lv<14>) (tmp_9_fu_205_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        B_address0 =  (sc_lv<14>) (tmp_2_reg_232.read());
    } else {
        B_address0 = "XXXXXXXXXXXXXX";
    }
}

void kernel_jacobi_1d_imper::thread_B_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        B_ce0 = ap_const_logic_1;
    } else {
        B_ce0 = ap_const_logic_0;
    }
}

void kernel_jacobi_1d_imper::thread_B_d0() {
    B_d0 = tmp_7_reg_257.read();
}

void kernel_jacobi_1d_imper::thread_B_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        B_we0 = ap_const_logic_1;
    } else {
        B_we0 = ap_const_logic_0;
    }
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void kernel_jacobi_1d_imper::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void kernel_jacobi_1d_imper::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond2_fu_154_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void kernel_jacobi_1d_imper::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void kernel_jacobi_1d_imper::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond2_fu_154_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void kernel_jacobi_1d_imper::thread_exitcond1_fu_166_p2() {
    exitcond1_fu_166_p2 = (!i_reg_110.read().is_01() || !ap_const_lv14_270F.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_110.read() == ap_const_lv14_270F);
}

void kernel_jacobi_1d_imper::thread_exitcond2_fu_154_p2() {
    exitcond2_fu_154_p2 = (!t_reg_99.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(t_reg_99.read() == ap_const_lv7_64);
}

void kernel_jacobi_1d_imper::thread_exitcond_fu_199_p2() {
    exitcond_fu_199_p2 = (!j_reg_122.read().is_01() || !ap_const_lv14_270F.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_122.read() == ap_const_lv14_270F);
}

void kernel_jacobi_1d_imper::thread_grp_fu_133_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_fu_133_p0 = reg_148.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_fu_133_p0 = reg_142.read();
    } else {
        grp_fu_133_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void kernel_jacobi_1d_imper::thread_grp_fu_133_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_fu_133_p1 = reg_142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_fu_133_p1 = A_load_1_reg_242.read();
    } else {
        grp_fu_133_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void kernel_jacobi_1d_imper::thread_i_1_fu_188_p2() {
    i_1_fu_188_p2 = (!i_reg_110.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(i_reg_110.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void kernel_jacobi_1d_imper::thread_j_1_fu_210_p2() {
    j_1_fu_210_p2 = (!j_reg_122.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(j_reg_122.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void kernel_jacobi_1d_imper::thread_t_1_fu_160_p2() {
    t_1_fu_160_p2 = (!t_reg_99.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(t_reg_99.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void kernel_jacobi_1d_imper::thread_tmp_1_fu_178_p1() {
    tmp_1_fu_178_p1 = esl_zext<64,14>(tmp_fu_172_p2.read());
}

void kernel_jacobi_1d_imper::thread_tmp_2_fu_183_p1() {
    tmp_2_fu_183_p1 = esl_zext<64,14>(i_reg_110.read());
}

void kernel_jacobi_1d_imper::thread_tmp_5_fu_194_p1() {
    tmp_5_fu_194_p1 = esl_zext<64,14>(i_1_fu_188_p2.read());
}

void kernel_jacobi_1d_imper::thread_tmp_9_fu_205_p1() {
    tmp_9_fu_205_p1 = esl_zext<64,14>(j_reg_122.read());
}

void kernel_jacobi_1d_imper::thread_tmp_fu_172_p2() {
    tmp_fu_172_p2 = (!i_reg_110.read().is_01() || !ap_const_lv14_3FFF.is_01())? sc_lv<14>(): (sc_biguint<14>(i_reg_110.read()) + sc_bigint<14>(ap_const_lv14_3FFF));
}

void kernel_jacobi_1d_imper::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond2_fu_154_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond1_fu_166_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state38;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
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
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 268435456 : 
            ap_NS_fsm = ap_ST_fsm_state30;
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 1073741824 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 2147483648 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 4294967296 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state36;
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 68719476736 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 137438953472 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && esl_seteq<1,1,1>(exitcond_fu_199_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state39;
            }
            break;
        case 274877906944 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<39>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

void kernel_jacobi_1d_imper::thread_hdltv_gen() {
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
        mHdltvinHandle << " , " <<  " \"tsteps\" :  \"" << tsteps.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"n\" :  \"" << n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_address0\" :  \"" << A_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_ce0\" :  \"" << A_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"A_q0\" :  \"" << A_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_address1\" :  \"" << A_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_ce1\" :  \"" << A_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_we1\" :  \"" << A_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_d1\" :  \"" << A_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"A_q1\" :  \"" << A_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"B_address0\" :  \"" << B_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"B_ce0\" :  \"" << B_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"B_we0\" :  \"" << B_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"B_d0\" :  \"" << B_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"B_q0\" :  \"" << B_q0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

