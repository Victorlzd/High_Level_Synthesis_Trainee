// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _lut_mul3_chunk_HH_
#define _lut_mul3_chunk_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lut_mul3_chunk_mebkb.h"
#include "lut_mul3_chunk_mecud.h"
#include "lut_mul3_chunk_medEe.h"
#include "lut_mul3_chunk_meeOg.h"
#include "lut_mul3_chunk_mefYi.h"
#include "lut_mul3_chunk_meg8j.h"
#include "lut_mul3_chunk_mehbi.h"
#include "lut_mul3_chunk_meibs.h"

namespace ap_rtl {

struct lut_mul3_chunk : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<6> > in_V;
    sc_out< sc_lv<8> > ap_return;


    // Module declarations
    lut_mul3_chunk(sc_module_name name);
    SC_HAS_PROCESS(lut_mul3_chunk);

    ~lut_mul3_chunk();

    sc_trace_file* mVcdFile;

    lut_mul3_chunk_mebkb* mem_0_U;
    lut_mul3_chunk_mecud* mem_1_U;
    lut_mul3_chunk_medEe* mem_2_U;
    lut_mul3_chunk_meeOg* mem_3_U;
    lut_mul3_chunk_mefYi* mem_4_U;
    lut_mul3_chunk_meg8j* mem_5_U;
    lut_mul3_chunk_mehbi* mem_6_U;
    lut_mul3_chunk_meibs* mem_7_U;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > mem_0_address0;
    sc_signal< sc_logic > mem_0_ce0;
    sc_signal< sc_lv<1> > mem_0_q0;
    sc_signal< sc_lv<6> > mem_1_address0;
    sc_signal< sc_logic > mem_1_ce0;
    sc_signal< sc_lv<1> > mem_1_q0;
    sc_signal< sc_lv<6> > mem_2_address0;
    sc_signal< sc_logic > mem_2_ce0;
    sc_signal< sc_lv<1> > mem_2_q0;
    sc_signal< sc_lv<6> > mem_3_address0;
    sc_signal< sc_logic > mem_3_ce0;
    sc_signal< sc_lv<1> > mem_3_q0;
    sc_signal< sc_lv<6> > mem_4_address0;
    sc_signal< sc_logic > mem_4_ce0;
    sc_signal< sc_lv<1> > mem_4_q0;
    sc_signal< sc_lv<6> > mem_5_address0;
    sc_signal< sc_logic > mem_5_ce0;
    sc_signal< sc_lv<1> > mem_5_q0;
    sc_signal< sc_lv<6> > mem_6_address0;
    sc_signal< sc_logic > mem_6_ce0;
    sc_signal< sc_lv<1> > mem_6_q0;
    sc_signal< sc_lv<6> > mem_7_address0;
    sc_signal< sc_logic > mem_7_ce0;
    sc_signal< sc_lv<1> > mem_7_q0;
    sc_signal< sc_lv<64> > tmp_fu_134_p1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<8> > p_Result_s_fu_146_p9;
    sc_signal< sc_lv<8> > ap_return_preg;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_mem_0_address0();
    void thread_mem_0_ce0();
    void thread_mem_1_address0();
    void thread_mem_1_ce0();
    void thread_mem_2_address0();
    void thread_mem_2_ce0();
    void thread_mem_3_address0();
    void thread_mem_3_ce0();
    void thread_mem_4_address0();
    void thread_mem_4_ce0();
    void thread_mem_5_address0();
    void thread_mem_5_ce0();
    void thread_mem_6_address0();
    void thread_mem_6_ce0();
    void thread_mem_7_address0();
    void thread_mem_7_ce0();
    void thread_p_Result_s_fu_146_p9();
    void thread_tmp_fu_134_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
