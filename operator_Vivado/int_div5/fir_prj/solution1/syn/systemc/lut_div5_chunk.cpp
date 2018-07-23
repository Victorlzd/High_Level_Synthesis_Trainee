// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "lut_div5_chunk.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic lut_div5_chunk::ap_const_logic_1 = sc_dt::Log_1;
const bool lut_div5_chunk::ap_const_boolean_1 = true;
const sc_lv<1> lut_div5_chunk::ap_const_lv1_0 = "0";
const sc_lv<1> lut_div5_chunk::ap_const_lv1_1 = "1";
const sc_logic lut_div5_chunk::ap_const_logic_0 = sc_dt::Log_0;

lut_div5_chunk::lut_div5_chunk(sc_module_name name) : sc_module(name), mVcdFile(0) {
    int_div5_mux_646_bkb_U1 = new int_div5_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>("int_div5_mux_646_bkb_U1");
    int_div5_mux_646_bkb_U1->din0(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din1(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din2(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din3(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din4(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din5(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din6(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din7(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din8(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din9(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din10(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din11(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din12(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din13(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din14(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din15(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din16(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din17(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din18(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din19(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din20(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din21(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din22(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din23(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din24(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din25(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din26(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din27(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din28(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din29(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din30(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din31(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din32(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din33(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din34(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din35(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din36(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din37(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din38(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din39(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din40(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din41(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din42(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din43(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din44(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din45(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din46(ap_var_for_const1);
    int_div5_mux_646_bkb_U1->din47(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din48(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din49(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din50(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din51(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din52(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din53(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din54(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din55(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din56(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din57(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din58(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din59(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din60(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din61(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din62(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din63(ap_var_for_const0);
    int_div5_mux_646_bkb_U1->din64(p_Result_8_fu_32_p3);
    int_div5_mux_646_bkb_U1->dout(agg_result_V_i_fu_40_p66);
    int_div5_mux_646_bkb_U2 = new int_div5_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>("int_div5_mux_646_bkb_U2");
    int_div5_mux_646_bkb_U2->din0(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din1(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din2(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din3(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din4(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din5(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din6(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din7(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din8(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din9(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din10(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din11(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din12(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din13(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din14(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din15(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din16(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din17(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din18(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din19(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din20(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din21(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din22(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din23(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din24(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din25(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din26(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din27(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din28(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din29(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din30(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din31(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din32(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din33(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din34(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din35(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din36(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din37(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din38(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din39(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din40(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din41(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din42(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din43(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din44(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din45(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din46(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din47(ap_var_for_const1);
    int_div5_mux_646_bkb_U2->din48(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din49(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din50(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din51(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din52(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din53(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din54(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din55(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din56(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din57(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din58(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din59(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din60(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din61(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din62(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din63(ap_var_for_const0);
    int_div5_mux_646_bkb_U2->din64(p_Result_8_fu_32_p3);
    int_div5_mux_646_bkb_U2->dout(agg_result_V_i2_fu_174_p66);
    int_div5_mux_646_bkb_U3 = new int_div5_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>("int_div5_mux_646_bkb_U3");
    int_div5_mux_646_bkb_U3->din0(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din1(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din2(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din3(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din4(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din5(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din6(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din7(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din8(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din9(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din10(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din11(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din12(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din13(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din14(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din15(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din16(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din17(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din18(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din19(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din20(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din21(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din22(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din23(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din24(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din25(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din26(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din27(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din28(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din29(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din30(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din31(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din32(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din33(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din34(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din35(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din36(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din37(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din38(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din39(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din40(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din41(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din42(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din43(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din44(ap_var_for_const1);
    int_div5_mux_646_bkb_U3->din45(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din46(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din47(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din48(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din49(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din50(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din51(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din52(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din53(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din54(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din55(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din56(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din57(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din58(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din59(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din60(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din61(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din62(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din63(ap_var_for_const0);
    int_div5_mux_646_bkb_U3->din64(p_Result_8_fu_32_p3);
    int_div5_mux_646_bkb_U3->dout(agg_result_V_i4_fu_308_p66);
    int_div5_mux_646_bkb_U4 = new int_div5_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>("int_div5_mux_646_bkb_U4");
    int_div5_mux_646_bkb_U4->din0(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din1(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din2(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din3(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din4(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din5(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din6(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din7(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din8(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din9(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din10(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din11(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din12(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din13(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din14(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din15(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din16(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din17(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din18(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din19(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din20(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din21(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din22(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din23(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din24(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din25(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din26(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din27(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din28(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din29(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din30(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din31(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din32(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din33(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din34(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din35(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din36(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din37(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din38(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din39(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din40(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din41(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din42(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din43(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din44(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din45(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din46(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din47(ap_var_for_const1);
    int_div5_mux_646_bkb_U4->din48(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din49(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din50(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din51(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din52(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din53(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din54(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din55(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din56(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din57(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din58(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din59(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din60(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din61(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din62(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din63(ap_var_for_const0);
    int_div5_mux_646_bkb_U4->din64(p_Result_8_fu_32_p3);
    int_div5_mux_646_bkb_U4->dout(agg_result_V_i6_fu_452_p66);
    int_div5_mux_646_bkb_U5 = new int_div5_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>("int_div5_mux_646_bkb_U5");
    int_div5_mux_646_bkb_U5->din0(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din1(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din2(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din3(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din4(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din5(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din6(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din7(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din8(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din9(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din10(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din11(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din12(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din13(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din14(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din15(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din16(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din17(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din18(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din19(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din20(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din21(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din22(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din23(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din24(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din25(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din26(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din27(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din28(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din29(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din30(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din31(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din32(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din33(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din34(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din35(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din36(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din37(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din38(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din39(ap_var_for_const1);
    int_div5_mux_646_bkb_U5->din40(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din41(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din42(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din43(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din44(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din45(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din46(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din47(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din48(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din49(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din50(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din51(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din52(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din53(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din54(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din55(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din56(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din57(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din58(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din59(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din60(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din61(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din62(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din63(ap_var_for_const0);
    int_div5_mux_646_bkb_U5->din64(p_Result_8_fu_32_p3);
    int_div5_mux_646_bkb_U5->dout(agg_result_V_i8_fu_586_p66);
    int_div5_mux_646_bkb_U6 = new int_div5_mux_646_bkb<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,1>("int_div5_mux_646_bkb_U6");
    int_div5_mux_646_bkb_U6->din0(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din1(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din2(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din3(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din4(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din5(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din6(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din7(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din8(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din9(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din10(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din11(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din12(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din13(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din14(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din15(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din16(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din17(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din18(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din19(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din20(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din21(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din22(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din23(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din24(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din25(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din26(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din27(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din28(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din29(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din30(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din31(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din32(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din33(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din34(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din35(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din36(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din37(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din38(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din39(ap_var_for_const1);
    int_div5_mux_646_bkb_U6->din40(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din41(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din42(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din43(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din44(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din45(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din46(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din47(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din48(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din49(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din50(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din51(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din52(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din53(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din54(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din55(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din56(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din57(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din58(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din59(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din60(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din61(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din62(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din63(ap_var_for_const0);
    int_div5_mux_646_bkb_U6->din64(p_Result_8_fu_32_p3);
    int_div5_mux_646_bkb_U6->dout(agg_result_V_i1_fu_720_p66);

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return_0);
    sensitive << ( p_Result_1_fu_854_p4 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( p_Result_s_fu_442_p4 );

    SC_METHOD(thread_p_Result_1_fu_854_p4);
    sensitive << ( agg_result_V_i1_fu_720_p66 );
    sensitive << ( agg_result_V_i8_fu_586_p66 );
    sensitive << ( agg_result_V_i6_fu_452_p66 );

    SC_METHOD(thread_p_Result_8_fu_32_p3);
    sensitive << ( d_V );
    sensitive << ( r_in_V );

    SC_METHOD(thread_p_Result_s_fu_442_p4);
    sensitive << ( agg_result_V_i4_fu_308_p66 );
    sensitive << ( agg_result_V_i2_fu_174_p66 );
    sensitive << ( agg_result_V_i_fu_40_p66 );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "lut_div5_chunk_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, d_V, "(port)d_V");
    sc_trace(mVcdFile, r_in_V, "(port)r_in_V");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, p_Result_8_fu_32_p3, "p_Result_8_fu_32_p3");
    sc_trace(mVcdFile, agg_result_V_i4_fu_308_p66, "agg_result_V_i4_fu_308_p66");
    sc_trace(mVcdFile, agg_result_V_i2_fu_174_p66, "agg_result_V_i2_fu_174_p66");
    sc_trace(mVcdFile, agg_result_V_i_fu_40_p66, "agg_result_V_i_fu_40_p66");
    sc_trace(mVcdFile, agg_result_V_i1_fu_720_p66, "agg_result_V_i1_fu_720_p66");
    sc_trace(mVcdFile, agg_result_V_i8_fu_586_p66, "agg_result_V_i8_fu_586_p66");
    sc_trace(mVcdFile, agg_result_V_i6_fu_452_p66, "agg_result_V_i6_fu_452_p66");
    sc_trace(mVcdFile, p_Result_1_fu_854_p4, "p_Result_1_fu_854_p4");
    sc_trace(mVcdFile, p_Result_s_fu_442_p4, "p_Result_s_fu_442_p4");
#endif

    }
}

lut_div5_chunk::~lut_div5_chunk() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete int_div5_mux_646_bkb_U1;
    delete int_div5_mux_646_bkb_U2;
    delete int_div5_mux_646_bkb_U3;
    delete int_div5_mux_646_bkb_U4;
    delete int_div5_mux_646_bkb_U5;
    delete int_div5_mux_646_bkb_U6;
}

void lut_div5_chunk::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_lv1_0;
}

void lut_div5_chunk::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv1_1;
}

void lut_div5_chunk::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void lut_div5_chunk::thread_ap_return_0() {
    ap_return_0 = p_Result_1_fu_854_p4.read();
}

void lut_div5_chunk::thread_ap_return_1() {
    ap_return_1 = p_Result_s_fu_442_p4.read();
}

void lut_div5_chunk::thread_p_Result_1_fu_854_p4() {
    p_Result_1_fu_854_p4 = esl_concat<2,1>(esl_concat<1,1>(agg_result_V_i1_fu_720_p66.read(), agg_result_V_i8_fu_586_p66.read()), agg_result_V_i6_fu_452_p66.read());
}

void lut_div5_chunk::thread_p_Result_8_fu_32_p3() {
    p_Result_8_fu_32_p3 = esl_concat<3,3>(r_in_V.read(), d_V.read());
}

void lut_div5_chunk::thread_p_Result_s_fu_442_p4() {
    p_Result_s_fu_442_p4 = esl_concat<2,1>(esl_concat<1,1>(agg_result_V_i4_fu_308_p66.read(), agg_result_V_i2_fu_174_p66.read()), agg_result_V_i_fu_40_p66.read());
}

}

