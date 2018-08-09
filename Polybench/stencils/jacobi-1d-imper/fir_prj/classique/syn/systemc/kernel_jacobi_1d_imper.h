// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _kernel_jacobi_1d_imper_HH_
#define _kernel_jacobi_1d_imper_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "kernel_jacobi_1d_bkb.h"
#include "kernel_jacobi_1d_cud.h"

namespace ap_rtl {

struct kernel_jacobi_1d_imper : public sc_module {
    // Port declarations 21
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > tsteps;
    sc_in< sc_lv<32> > n;
    sc_out< sc_lv<14> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<64> > A_q0;
    sc_out< sc_lv<14> > A_address1;
    sc_out< sc_logic > A_ce1;
    sc_out< sc_logic > A_we1;
    sc_out< sc_lv<64> > A_d1;
    sc_in< sc_lv<64> > A_q1;
    sc_out< sc_lv<14> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_out< sc_logic > B_we0;
    sc_out< sc_lv<64> > B_d0;
    sc_in< sc_lv<64> > B_q0;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const1;


    // Module declarations
    kernel_jacobi_1d_imper(sc_module_name name);
    SC_HAS_PROCESS(kernel_jacobi_1d_imper);

    ~kernel_jacobi_1d_imper();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    kernel_jacobi_1d_bkb<1,5,64,64,64>* kernel_jacobi_1d_bkb_U1;
    kernel_jacobi_1d_cud<1,22,64,64,64>* kernel_jacobi_1d_cud_U2;
    sc_signal< sc_lv<39> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > reg_142;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > grp_fu_133_p2;
    sc_signal< sc_lv<64> > reg_148;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<7> > t_1_fu_160_p2;
    sc_signal< sc_lv<7> > t_1_reg_219;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond1_fu_166_p2;
    sc_signal< sc_lv<64> > tmp_2_fu_183_p1;
    sc_signal< sc_lv<64> > tmp_2_reg_232;
    sc_signal< sc_lv<64> > A_load_1_reg_242;
    sc_signal< sc_lv<14> > i_1_fu_188_p2;
    sc_signal< sc_lv<14> > i_1_reg_247;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > grp_fu_137_p2;
    sc_signal< sc_lv<64> > tmp_7_reg_257;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_lv<64> > tmp_9_fu_205_p1;
    sc_signal< sc_lv<64> > tmp_9_reg_265;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_lv<1> > exitcond_fu_199_p2;
    sc_signal< sc_lv<14> > j_1_fu_210_p2;
    sc_signal< sc_lv<14> > j_1_reg_275;
    sc_signal< sc_lv<7> > t_reg_99;
    sc_signal< sc_lv<14> > i_reg_110;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_lv<1> > exitcond2_fu_154_p2;
    sc_signal< sc_lv<14> > j_reg_122;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_lv<64> > tmp_1_fu_178_p1;
    sc_signal< sc_lv<64> > tmp_5_fu_194_p1;
    sc_signal< sc_lv<64> > grp_fu_133_p0;
    sc_signal< sc_lv<64> > grp_fu_133_p1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<14> > tmp_fu_172_p2;
    sc_signal< sc_lv<39> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<39> ap_ST_fsm_state1;
    static const sc_lv<39> ap_ST_fsm_state2;
    static const sc_lv<39> ap_ST_fsm_state3;
    static const sc_lv<39> ap_ST_fsm_state4;
    static const sc_lv<39> ap_ST_fsm_state5;
    static const sc_lv<39> ap_ST_fsm_state6;
    static const sc_lv<39> ap_ST_fsm_state7;
    static const sc_lv<39> ap_ST_fsm_state8;
    static const sc_lv<39> ap_ST_fsm_state9;
    static const sc_lv<39> ap_ST_fsm_state10;
    static const sc_lv<39> ap_ST_fsm_state11;
    static const sc_lv<39> ap_ST_fsm_state12;
    static const sc_lv<39> ap_ST_fsm_state13;
    static const sc_lv<39> ap_ST_fsm_state14;
    static const sc_lv<39> ap_ST_fsm_state15;
    static const sc_lv<39> ap_ST_fsm_state16;
    static const sc_lv<39> ap_ST_fsm_state17;
    static const sc_lv<39> ap_ST_fsm_state18;
    static const sc_lv<39> ap_ST_fsm_state19;
    static const sc_lv<39> ap_ST_fsm_state20;
    static const sc_lv<39> ap_ST_fsm_state21;
    static const sc_lv<39> ap_ST_fsm_state22;
    static const sc_lv<39> ap_ST_fsm_state23;
    static const sc_lv<39> ap_ST_fsm_state24;
    static const sc_lv<39> ap_ST_fsm_state25;
    static const sc_lv<39> ap_ST_fsm_state26;
    static const sc_lv<39> ap_ST_fsm_state27;
    static const sc_lv<39> ap_ST_fsm_state28;
    static const sc_lv<39> ap_ST_fsm_state29;
    static const sc_lv<39> ap_ST_fsm_state30;
    static const sc_lv<39> ap_ST_fsm_state31;
    static const sc_lv<39> ap_ST_fsm_state32;
    static const sc_lv<39> ap_ST_fsm_state33;
    static const sc_lv<39> ap_ST_fsm_state34;
    static const sc_lv<39> ap_ST_fsm_state35;
    static const sc_lv<39> ap_ST_fsm_state36;
    static const sc_lv<39> ap_ST_fsm_state37;
    static const sc_lv<39> ap_ST_fsm_state38;
    static const sc_lv<39> ap_ST_fsm_state39;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<64> ap_const_lv64_4008000000000000;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<14> ap_const_lv14_270F;
    static const sc_lv<14> ap_const_lv14_3FFF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_A_address0();
    void thread_A_address1();
    void thread_A_ce0();
    void thread_A_ce1();
    void thread_A_d1();
    void thread_A_we1();
    void thread_B_address0();
    void thread_B_ce0();
    void thread_B_d0();
    void thread_B_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond1_fu_166_p2();
    void thread_exitcond2_fu_154_p2();
    void thread_exitcond_fu_199_p2();
    void thread_grp_fu_133_p0();
    void thread_grp_fu_133_p1();
    void thread_i_1_fu_188_p2();
    void thread_j_1_fu_210_p2();
    void thread_t_1_fu_160_p2();
    void thread_tmp_1_fu_178_p1();
    void thread_tmp_2_fu_183_p1();
    void thread_tmp_5_fu_194_p1();
    void thread_tmp_9_fu_205_p1();
    void thread_tmp_fu_172_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
