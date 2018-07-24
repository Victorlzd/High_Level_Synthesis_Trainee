// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "int_div2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic int_div2::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<32> int_div2::ap_const_lv32_1 = "1";
const sc_lv<32> int_div2::ap_const_lv32_1F = "11111";
const sc_logic int_div2::ap_const_logic_0 = sc_dt::Log_0;
const bool int_div2::ap_const_boolean_1 = true;

int_div2::int_div2(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_start );
    sensitive << ( tmp_2_fu_24_p4 );

    SC_METHOD(thread_tmp_2_fu_24_p4);
    sensitive << ( a );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_virtual_clock.pos() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "int_div2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a, "(port)a");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, tmp_2_fu_24_p4, "tmp_2_fu_24_p4");
#endif

    }
    mHdltvinHandle.open("int_div2.hdltvin.dat");
    mHdltvoutHandle.open("int_div2.hdltvout.dat");
}

int_div2::~int_div2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void int_div2::thread_ap_done() {
    ap_done = ap_start.read();
}

void int_div2::thread_ap_idle() {
    ap_idle = ap_const_logic_1;
}

void int_div2::thread_ap_ready() {
    ap_ready = ap_start.read();
}

void int_div2::thread_ap_return() {
    ap_return = esl_sext<32,31>(tmp_2_fu_24_p4.read());
}

void int_div2::thread_tmp_2_fu_24_p4() {
    tmp_2_fu_24_p4 = a.read().range(31, 1);
}

void int_div2::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a\" :  \"" << a.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
