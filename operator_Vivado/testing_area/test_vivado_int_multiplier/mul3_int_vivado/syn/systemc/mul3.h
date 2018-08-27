// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _mul3_HH_
#define _mul3_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct mul3 : public sc_module {
    // Port declarations 6
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > a;
    sc_out< sc_lv<32> > ap_return;
    // Port declarations for the virtual clock. 
    sc_in_clk ap_virtual_clock;


    // Module declarations
    mul3(sc_module_name name);
    SC_HAS_PROCESS(mul3);

    ~mul3();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<32> > tmp_1_fu_20_p2;
    static const sc_logic ap_const_logic_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_tmp_1_fu_20_p2();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
