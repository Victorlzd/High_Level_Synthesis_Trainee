// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module lut_div11_chunk (
        ap_ready,
        d_V,
        r_in_V,
        ap_return_0,
        ap_return_1
);


output   ap_ready;
input  [1:0] d_V;
input  [3:0] r_in_V;
output  [1:0] ap_return_0;
output  [3:0] ap_return_1;

wire   [5:0] p_Result_8_fu_34_p3;
wire   [0:0] agg_result_V_i6_fu_444_p66;
wire   [0:0] agg_result_V_i4_fu_310_p66;
wire   [0:0] agg_result_V_i2_fu_176_p66;
wire   [0:0] agg_result_V_i_fu_42_p66;
wire   [0:0] agg_result_V_i1_fu_724_p66;
wire   [0:0] agg_result_V_i8_fu_590_p66;
wire   [1:0] p_Result_1_fu_858_p3;
wire   [3:0] p_Result_s_fu_578_p5;

operator_double_dbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 1 ),
    .din9_WIDTH( 1 ),
    .din10_WIDTH( 1 ),
    .din11_WIDTH( 1 ),
    .din12_WIDTH( 1 ),
    .din13_WIDTH( 1 ),
    .din14_WIDTH( 1 ),
    .din15_WIDTH( 1 ),
    .din16_WIDTH( 1 ),
    .din17_WIDTH( 1 ),
    .din18_WIDTH( 1 ),
    .din19_WIDTH( 1 ),
    .din20_WIDTH( 1 ),
    .din21_WIDTH( 1 ),
    .din22_WIDTH( 1 ),
    .din23_WIDTH( 1 ),
    .din24_WIDTH( 1 ),
    .din25_WIDTH( 1 ),
    .din26_WIDTH( 1 ),
    .din27_WIDTH( 1 ),
    .din28_WIDTH( 1 ),
    .din29_WIDTH( 1 ),
    .din30_WIDTH( 1 ),
    .din31_WIDTH( 1 ),
    .din32_WIDTH( 1 ),
    .din33_WIDTH( 1 ),
    .din34_WIDTH( 1 ),
    .din35_WIDTH( 1 ),
    .din36_WIDTH( 1 ),
    .din37_WIDTH( 1 ),
    .din38_WIDTH( 1 ),
    .din39_WIDTH( 1 ),
    .din40_WIDTH( 1 ),
    .din41_WIDTH( 1 ),
    .din42_WIDTH( 1 ),
    .din43_WIDTH( 1 ),
    .din44_WIDTH( 1 ),
    .din45_WIDTH( 1 ),
    .din46_WIDTH( 1 ),
    .din47_WIDTH( 1 ),
    .din48_WIDTH( 1 ),
    .din49_WIDTH( 1 ),
    .din50_WIDTH( 1 ),
    .din51_WIDTH( 1 ),
    .din52_WIDTH( 1 ),
    .din53_WIDTH( 1 ),
    .din54_WIDTH( 1 ),
    .din55_WIDTH( 1 ),
    .din56_WIDTH( 1 ),
    .din57_WIDTH( 1 ),
    .din58_WIDTH( 1 ),
    .din59_WIDTH( 1 ),
    .din60_WIDTH( 1 ),
    .din61_WIDTH( 1 ),
    .din62_WIDTH( 1 ),
    .din63_WIDTH( 1 ),
    .din64_WIDTH( 6 ),
    .dout_WIDTH( 1 ))
operator_double_dbkb_U1(
    .din0(1'd0),
    .din1(1'd1),
    .din2(1'd0),
    .din3(1'd1),
    .din4(1'd0),
    .din5(1'd1),
    .din6(1'd0),
    .din7(1'd1),
    .din8(1'd0),
    .din9(1'd1),
    .din10(1'd0),
    .din11(1'd0),
    .din12(1'd1),
    .din13(1'd0),
    .din14(1'd1),
    .din15(1'd0),
    .din16(1'd1),
    .din17(1'd0),
    .din18(1'd1),
    .din19(1'd0),
    .din20(1'd1),
    .din21(1'd0),
    .din22(1'd0),
    .din23(1'd1),
    .din24(1'd0),
    .din25(1'd1),
    .din26(1'd0),
    .din27(1'd1),
    .din28(1'd0),
    .din29(1'd1),
    .din30(1'd0),
    .din31(1'd1),
    .din32(1'd0),
    .din33(1'd0),
    .din34(1'd1),
    .din35(1'd0),
    .din36(1'd1),
    .din37(1'd0),
    .din38(1'd1),
    .din39(1'd0),
    .din40(1'd1),
    .din41(1'd0),
    .din42(1'd1),
    .din43(1'd0),
    .din44(1'd0),
    .din45(1'd1),
    .din46(1'd0),
    .din47(1'd1),
    .din48(1'd0),
    .din49(1'd1),
    .din50(1'd0),
    .din51(1'd1),
    .din52(1'd0),
    .din53(1'd1),
    .din54(1'd0),
    .din55(1'd0),
    .din56(1'd1),
    .din57(1'd0),
    .din58(1'd1),
    .din59(1'd0),
    .din60(1'd1),
    .din61(1'd0),
    .din62(1'd1),
    .din63(1'd0),
    .din64(p_Result_8_fu_34_p3),
    .dout(agg_result_V_i_fu_42_p66)
);

operator_double_dbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 1 ),
    .din9_WIDTH( 1 ),
    .din10_WIDTH( 1 ),
    .din11_WIDTH( 1 ),
    .din12_WIDTH( 1 ),
    .din13_WIDTH( 1 ),
    .din14_WIDTH( 1 ),
    .din15_WIDTH( 1 ),
    .din16_WIDTH( 1 ),
    .din17_WIDTH( 1 ),
    .din18_WIDTH( 1 ),
    .din19_WIDTH( 1 ),
    .din20_WIDTH( 1 ),
    .din21_WIDTH( 1 ),
    .din22_WIDTH( 1 ),
    .din23_WIDTH( 1 ),
    .din24_WIDTH( 1 ),
    .din25_WIDTH( 1 ),
    .din26_WIDTH( 1 ),
    .din27_WIDTH( 1 ),
    .din28_WIDTH( 1 ),
    .din29_WIDTH( 1 ),
    .din30_WIDTH( 1 ),
    .din31_WIDTH( 1 ),
    .din32_WIDTH( 1 ),
    .din33_WIDTH( 1 ),
    .din34_WIDTH( 1 ),
    .din35_WIDTH( 1 ),
    .din36_WIDTH( 1 ),
    .din37_WIDTH( 1 ),
    .din38_WIDTH( 1 ),
    .din39_WIDTH( 1 ),
    .din40_WIDTH( 1 ),
    .din41_WIDTH( 1 ),
    .din42_WIDTH( 1 ),
    .din43_WIDTH( 1 ),
    .din44_WIDTH( 1 ),
    .din45_WIDTH( 1 ),
    .din46_WIDTH( 1 ),
    .din47_WIDTH( 1 ),
    .din48_WIDTH( 1 ),
    .din49_WIDTH( 1 ),
    .din50_WIDTH( 1 ),
    .din51_WIDTH( 1 ),
    .din52_WIDTH( 1 ),
    .din53_WIDTH( 1 ),
    .din54_WIDTH( 1 ),
    .din55_WIDTH( 1 ),
    .din56_WIDTH( 1 ),
    .din57_WIDTH( 1 ),
    .din58_WIDTH( 1 ),
    .din59_WIDTH( 1 ),
    .din60_WIDTH( 1 ),
    .din61_WIDTH( 1 ),
    .din62_WIDTH( 1 ),
    .din63_WIDTH( 1 ),
    .din64_WIDTH( 6 ),
    .dout_WIDTH( 1 ))
operator_double_dbkb_U2(
    .din0(1'd0),
    .din1(1'd0),
    .din2(1'd1),
    .din3(1'd1),
    .din4(1'd0),
    .din5(1'd0),
    .din6(1'd1),
    .din7(1'd1),
    .din8(1'd0),
    .din9(1'd0),
    .din10(1'd1),
    .din11(1'd0),
    .din12(1'd0),
    .din13(1'd1),
    .din14(1'd1),
    .din15(1'd0),
    .din16(1'd0),
    .din17(1'd1),
    .din18(1'd1),
    .din19(1'd0),
    .din20(1'd0),
    .din21(1'd1),
    .din22(1'd0),
    .din23(1'd0),
    .din24(1'd1),
    .din25(1'd1),
    .din26(1'd0),
    .din27(1'd0),
    .din28(1'd1),
    .din29(1'd1),
    .din30(1'd0),
    .din31(1'd0),
    .din32(1'd1),
    .din33(1'd0),
    .din34(1'd0),
    .din35(1'd1),
    .din36(1'd1),
    .din37(1'd0),
    .din38(1'd0),
    .din39(1'd1),
    .din40(1'd1),
    .din41(1'd0),
    .din42(1'd0),
    .din43(1'd1),
    .din44(1'd0),
    .din45(1'd0),
    .din46(1'd1),
    .din47(1'd1),
    .din48(1'd0),
    .din49(1'd0),
    .din50(1'd1),
    .din51(1'd1),
    .din52(1'd0),
    .din53(1'd0),
    .din54(1'd1),
    .din55(1'd0),
    .din56(1'd0),
    .din57(1'd1),
    .din58(1'd1),
    .din59(1'd0),
    .din60(1'd0),
    .din61(1'd1),
    .din62(1'd1),
    .din63(1'd0),
    .din64(p_Result_8_fu_34_p3),
    .dout(agg_result_V_i2_fu_176_p66)
);

operator_double_dbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 1 ),
    .din9_WIDTH( 1 ),
    .din10_WIDTH( 1 ),
    .din11_WIDTH( 1 ),
    .din12_WIDTH( 1 ),
    .din13_WIDTH( 1 ),
    .din14_WIDTH( 1 ),
    .din15_WIDTH( 1 ),
    .din16_WIDTH( 1 ),
    .din17_WIDTH( 1 ),
    .din18_WIDTH( 1 ),
    .din19_WIDTH( 1 ),
    .din20_WIDTH( 1 ),
    .din21_WIDTH( 1 ),
    .din22_WIDTH( 1 ),
    .din23_WIDTH( 1 ),
    .din24_WIDTH( 1 ),
    .din25_WIDTH( 1 ),
    .din26_WIDTH( 1 ),
    .din27_WIDTH( 1 ),
    .din28_WIDTH( 1 ),
    .din29_WIDTH( 1 ),
    .din30_WIDTH( 1 ),
    .din31_WIDTH( 1 ),
    .din32_WIDTH( 1 ),
    .din33_WIDTH( 1 ),
    .din34_WIDTH( 1 ),
    .din35_WIDTH( 1 ),
    .din36_WIDTH( 1 ),
    .din37_WIDTH( 1 ),
    .din38_WIDTH( 1 ),
    .din39_WIDTH( 1 ),
    .din40_WIDTH( 1 ),
    .din41_WIDTH( 1 ),
    .din42_WIDTH( 1 ),
    .din43_WIDTH( 1 ),
    .din44_WIDTH( 1 ),
    .din45_WIDTH( 1 ),
    .din46_WIDTH( 1 ),
    .din47_WIDTH( 1 ),
    .din48_WIDTH( 1 ),
    .din49_WIDTH( 1 ),
    .din50_WIDTH( 1 ),
    .din51_WIDTH( 1 ),
    .din52_WIDTH( 1 ),
    .din53_WIDTH( 1 ),
    .din54_WIDTH( 1 ),
    .din55_WIDTH( 1 ),
    .din56_WIDTH( 1 ),
    .din57_WIDTH( 1 ),
    .din58_WIDTH( 1 ),
    .din59_WIDTH( 1 ),
    .din60_WIDTH( 1 ),
    .din61_WIDTH( 1 ),
    .din62_WIDTH( 1 ),
    .din63_WIDTH( 1 ),
    .din64_WIDTH( 6 ),
    .dout_WIDTH( 1 ))
operator_double_dbkb_U3(
    .din0(1'd0),
    .din1(1'd0),
    .din2(1'd0),
    .din3(1'd0),
    .din4(1'd1),
    .din5(1'd1),
    .din6(1'd1),
    .din7(1'd1),
    .din8(1'd0),
    .din9(1'd0),
    .din10(1'd0),
    .din11(1'd0),
    .din12(1'd0),
    .din13(1'd0),
    .din14(1'd0),
    .din15(1'd1),
    .din16(1'd1),
    .din17(1'd1),
    .din18(1'd1),
    .din19(1'd0),
    .din20(1'd0),
    .din21(1'd0),
    .din22(1'd0),
    .din23(1'd0),
    .din24(1'd0),
    .din25(1'd0),
    .din26(1'd1),
    .din27(1'd1),
    .din28(1'd1),
    .din29(1'd1),
    .din30(1'd0),
    .din31(1'd0),
    .din32(1'd0),
    .din33(1'd0),
    .din34(1'd0),
    .din35(1'd0),
    .din36(1'd0),
    .din37(1'd1),
    .din38(1'd1),
    .din39(1'd1),
    .din40(1'd1),
    .din41(1'd0),
    .din42(1'd0),
    .din43(1'd0),
    .din44(1'd0),
    .din45(1'd0),
    .din46(1'd0),
    .din47(1'd0),
    .din48(1'd1),
    .din49(1'd1),
    .din50(1'd1),
    .din51(1'd1),
    .din52(1'd0),
    .din53(1'd0),
    .din54(1'd0),
    .din55(1'd0),
    .din56(1'd0),
    .din57(1'd0),
    .din58(1'd0),
    .din59(1'd1),
    .din60(1'd1),
    .din61(1'd1),
    .din62(1'd1),
    .din63(1'd0),
    .din64(p_Result_8_fu_34_p3),
    .dout(agg_result_V_i4_fu_310_p66)
);

operator_double_dbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 1 ),
    .din9_WIDTH( 1 ),
    .din10_WIDTH( 1 ),
    .din11_WIDTH( 1 ),
    .din12_WIDTH( 1 ),
    .din13_WIDTH( 1 ),
    .din14_WIDTH( 1 ),
    .din15_WIDTH( 1 ),
    .din16_WIDTH( 1 ),
    .din17_WIDTH( 1 ),
    .din18_WIDTH( 1 ),
    .din19_WIDTH( 1 ),
    .din20_WIDTH( 1 ),
    .din21_WIDTH( 1 ),
    .din22_WIDTH( 1 ),
    .din23_WIDTH( 1 ),
    .din24_WIDTH( 1 ),
    .din25_WIDTH( 1 ),
    .din26_WIDTH( 1 ),
    .din27_WIDTH( 1 ),
    .din28_WIDTH( 1 ),
    .din29_WIDTH( 1 ),
    .din30_WIDTH( 1 ),
    .din31_WIDTH( 1 ),
    .din32_WIDTH( 1 ),
    .din33_WIDTH( 1 ),
    .din34_WIDTH( 1 ),
    .din35_WIDTH( 1 ),
    .din36_WIDTH( 1 ),
    .din37_WIDTH( 1 ),
    .din38_WIDTH( 1 ),
    .din39_WIDTH( 1 ),
    .din40_WIDTH( 1 ),
    .din41_WIDTH( 1 ),
    .din42_WIDTH( 1 ),
    .din43_WIDTH( 1 ),
    .din44_WIDTH( 1 ),
    .din45_WIDTH( 1 ),
    .din46_WIDTH( 1 ),
    .din47_WIDTH( 1 ),
    .din48_WIDTH( 1 ),
    .din49_WIDTH( 1 ),
    .din50_WIDTH( 1 ),
    .din51_WIDTH( 1 ),
    .din52_WIDTH( 1 ),
    .din53_WIDTH( 1 ),
    .din54_WIDTH( 1 ),
    .din55_WIDTH( 1 ),
    .din56_WIDTH( 1 ),
    .din57_WIDTH( 1 ),
    .din58_WIDTH( 1 ),
    .din59_WIDTH( 1 ),
    .din60_WIDTH( 1 ),
    .din61_WIDTH( 1 ),
    .din62_WIDTH( 1 ),
    .din63_WIDTH( 1 ),
    .din64_WIDTH( 6 ),
    .dout_WIDTH( 1 ))
operator_double_dbkb_U4(
    .din0(1'd0),
    .din1(1'd0),
    .din2(1'd0),
    .din3(1'd0),
    .din4(1'd0),
    .din5(1'd0),
    .din6(1'd0),
    .din7(1'd0),
    .din8(1'd1),
    .din9(1'd1),
    .din10(1'd1),
    .din11(1'd0),
    .din12(1'd0),
    .din13(1'd0),
    .din14(1'd0),
    .din15(1'd0),
    .din16(1'd0),
    .din17(1'd0),
    .din18(1'd0),
    .din19(1'd1),
    .din20(1'd1),
    .din21(1'd1),
    .din22(1'd0),
    .din23(1'd0),
    .din24(1'd0),
    .din25(1'd0),
    .din26(1'd0),
    .din27(1'd0),
    .din28(1'd0),
    .din29(1'd0),
    .din30(1'd1),
    .din31(1'd1),
    .din32(1'd1),
    .din33(1'd0),
    .din34(1'd0),
    .din35(1'd0),
    .din36(1'd0),
    .din37(1'd0),
    .din38(1'd0),
    .din39(1'd0),
    .din40(1'd0),
    .din41(1'd1),
    .din42(1'd1),
    .din43(1'd1),
    .din44(1'd0),
    .din45(1'd0),
    .din46(1'd0),
    .din47(1'd0),
    .din48(1'd0),
    .din49(1'd0),
    .din50(1'd0),
    .din51(1'd0),
    .din52(1'd1),
    .din53(1'd1),
    .din54(1'd1),
    .din55(1'd0),
    .din56(1'd0),
    .din57(1'd0),
    .din58(1'd0),
    .din59(1'd0),
    .din60(1'd0),
    .din61(1'd0),
    .din62(1'd0),
    .din63(1'd1),
    .din64(p_Result_8_fu_34_p3),
    .dout(agg_result_V_i6_fu_444_p66)
);

operator_double_dbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 1 ),
    .din9_WIDTH( 1 ),
    .din10_WIDTH( 1 ),
    .din11_WIDTH( 1 ),
    .din12_WIDTH( 1 ),
    .din13_WIDTH( 1 ),
    .din14_WIDTH( 1 ),
    .din15_WIDTH( 1 ),
    .din16_WIDTH( 1 ),
    .din17_WIDTH( 1 ),
    .din18_WIDTH( 1 ),
    .din19_WIDTH( 1 ),
    .din20_WIDTH( 1 ),
    .din21_WIDTH( 1 ),
    .din22_WIDTH( 1 ),
    .din23_WIDTH( 1 ),
    .din24_WIDTH( 1 ),
    .din25_WIDTH( 1 ),
    .din26_WIDTH( 1 ),
    .din27_WIDTH( 1 ),
    .din28_WIDTH( 1 ),
    .din29_WIDTH( 1 ),
    .din30_WIDTH( 1 ),
    .din31_WIDTH( 1 ),
    .din32_WIDTH( 1 ),
    .din33_WIDTH( 1 ),
    .din34_WIDTH( 1 ),
    .din35_WIDTH( 1 ),
    .din36_WIDTH( 1 ),
    .din37_WIDTH( 1 ),
    .din38_WIDTH( 1 ),
    .din39_WIDTH( 1 ),
    .din40_WIDTH( 1 ),
    .din41_WIDTH( 1 ),
    .din42_WIDTH( 1 ),
    .din43_WIDTH( 1 ),
    .din44_WIDTH( 1 ),
    .din45_WIDTH( 1 ),
    .din46_WIDTH( 1 ),
    .din47_WIDTH( 1 ),
    .din48_WIDTH( 1 ),
    .din49_WIDTH( 1 ),
    .din50_WIDTH( 1 ),
    .din51_WIDTH( 1 ),
    .din52_WIDTH( 1 ),
    .din53_WIDTH( 1 ),
    .din54_WIDTH( 1 ),
    .din55_WIDTH( 1 ),
    .din56_WIDTH( 1 ),
    .din57_WIDTH( 1 ),
    .din58_WIDTH( 1 ),
    .din59_WIDTH( 1 ),
    .din60_WIDTH( 1 ),
    .din61_WIDTH( 1 ),
    .din62_WIDTH( 1 ),
    .din63_WIDTH( 1 ),
    .din64_WIDTH( 6 ),
    .dout_WIDTH( 1 ))
operator_double_dbkb_U5(
    .din0(1'd0),
    .din1(1'd0),
    .din2(1'd0),
    .din3(1'd0),
    .din4(1'd0),
    .din5(1'd0),
    .din6(1'd0),
    .din7(1'd0),
    .din8(1'd0),
    .din9(1'd0),
    .din10(1'd0),
    .din11(1'd1),
    .din12(1'd1),
    .din13(1'd1),
    .din14(1'd1),
    .din15(1'd1),
    .din16(1'd1),
    .din17(1'd1),
    .din18(1'd1),
    .din19(1'd1),
    .din20(1'd1),
    .din21(1'd1),
    .din22(1'd0),
    .din23(1'd0),
    .din24(1'd0),
    .din25(1'd0),
    .din26(1'd0),
    .din27(1'd0),
    .din28(1'd0),
    .din29(1'd0),
    .din30(1'd0),
    .din31(1'd0),
    .din32(1'd0),
    .din33(1'd1),
    .din34(1'd1),
    .din35(1'd1),
    .din36(1'd1),
    .din37(1'd1),
    .din38(1'd1),
    .din39(1'd1),
    .din40(1'd1),
    .din41(1'd1),
    .din42(1'd1),
    .din43(1'd1),
    .din44(1'd0),
    .din45(1'd0),
    .din46(1'd0),
    .din47(1'd0),
    .din48(1'd0),
    .din49(1'd0),
    .din50(1'd0),
    .din51(1'd0),
    .din52(1'd0),
    .din53(1'd0),
    .din54(1'd0),
    .din55(1'd1),
    .din56(1'd1),
    .din57(1'd1),
    .din58(1'd1),
    .din59(1'd1),
    .din60(1'd1),
    .din61(1'd1),
    .din62(1'd1),
    .din63(1'd1),
    .din64(p_Result_8_fu_34_p3),
    .dout(agg_result_V_i8_fu_590_p66)
);

operator_double_dbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 1 ),
    .din1_WIDTH( 1 ),
    .din2_WIDTH( 1 ),
    .din3_WIDTH( 1 ),
    .din4_WIDTH( 1 ),
    .din5_WIDTH( 1 ),
    .din6_WIDTH( 1 ),
    .din7_WIDTH( 1 ),
    .din8_WIDTH( 1 ),
    .din9_WIDTH( 1 ),
    .din10_WIDTH( 1 ),
    .din11_WIDTH( 1 ),
    .din12_WIDTH( 1 ),
    .din13_WIDTH( 1 ),
    .din14_WIDTH( 1 ),
    .din15_WIDTH( 1 ),
    .din16_WIDTH( 1 ),
    .din17_WIDTH( 1 ),
    .din18_WIDTH( 1 ),
    .din19_WIDTH( 1 ),
    .din20_WIDTH( 1 ),
    .din21_WIDTH( 1 ),
    .din22_WIDTH( 1 ),
    .din23_WIDTH( 1 ),
    .din24_WIDTH( 1 ),
    .din25_WIDTH( 1 ),
    .din26_WIDTH( 1 ),
    .din27_WIDTH( 1 ),
    .din28_WIDTH( 1 ),
    .din29_WIDTH( 1 ),
    .din30_WIDTH( 1 ),
    .din31_WIDTH( 1 ),
    .din32_WIDTH( 1 ),
    .din33_WIDTH( 1 ),
    .din34_WIDTH( 1 ),
    .din35_WIDTH( 1 ),
    .din36_WIDTH( 1 ),
    .din37_WIDTH( 1 ),
    .din38_WIDTH( 1 ),
    .din39_WIDTH( 1 ),
    .din40_WIDTH( 1 ),
    .din41_WIDTH( 1 ),
    .din42_WIDTH( 1 ),
    .din43_WIDTH( 1 ),
    .din44_WIDTH( 1 ),
    .din45_WIDTH( 1 ),
    .din46_WIDTH( 1 ),
    .din47_WIDTH( 1 ),
    .din48_WIDTH( 1 ),
    .din49_WIDTH( 1 ),
    .din50_WIDTH( 1 ),
    .din51_WIDTH( 1 ),
    .din52_WIDTH( 1 ),
    .din53_WIDTH( 1 ),
    .din54_WIDTH( 1 ),
    .din55_WIDTH( 1 ),
    .din56_WIDTH( 1 ),
    .din57_WIDTH( 1 ),
    .din58_WIDTH( 1 ),
    .din59_WIDTH( 1 ),
    .din60_WIDTH( 1 ),
    .din61_WIDTH( 1 ),
    .din62_WIDTH( 1 ),
    .din63_WIDTH( 1 ),
    .din64_WIDTH( 6 ),
    .dout_WIDTH( 1 ))
operator_double_dbkb_U6(
    .din0(1'd0),
    .din1(1'd0),
    .din2(1'd0),
    .din3(1'd0),
    .din4(1'd0),
    .din5(1'd0),
    .din6(1'd0),
    .din7(1'd0),
    .din8(1'd0),
    .din9(1'd0),
    .din10(1'd0),
    .din11(1'd0),
    .din12(1'd0),
    .din13(1'd0),
    .din14(1'd0),
    .din15(1'd0),
    .din16(1'd0),
    .din17(1'd0),
    .din18(1'd0),
    .din19(1'd0),
    .din20(1'd0),
    .din21(1'd0),
    .din22(1'd1),
    .din23(1'd1),
    .din24(1'd1),
    .din25(1'd1),
    .din26(1'd1),
    .din27(1'd1),
    .din28(1'd1),
    .din29(1'd1),
    .din30(1'd1),
    .din31(1'd1),
    .din32(1'd1),
    .din33(1'd1),
    .din34(1'd1),
    .din35(1'd1),
    .din36(1'd1),
    .din37(1'd1),
    .din38(1'd1),
    .din39(1'd1),
    .din40(1'd1),
    .din41(1'd1),
    .din42(1'd1),
    .din43(1'd1),
    .din44(1'd0),
    .din45(1'd0),
    .din46(1'd0),
    .din47(1'd0),
    .din48(1'd0),
    .din49(1'd0),
    .din50(1'd0),
    .din51(1'd0),
    .din52(1'd0),
    .din53(1'd0),
    .din54(1'd0),
    .din55(1'd0),
    .din56(1'd0),
    .din57(1'd0),
    .din58(1'd0),
    .din59(1'd0),
    .din60(1'd0),
    .din61(1'd0),
    .din62(1'd0),
    .din63(1'd0),
    .din64(p_Result_8_fu_34_p3),
    .dout(agg_result_V_i1_fu_724_p66)
);

assign ap_ready = 1'b1;

assign ap_return_0 = p_Result_1_fu_858_p3;

assign ap_return_1 = p_Result_s_fu_578_p5;

assign p_Result_1_fu_858_p3 = {{agg_result_V_i1_fu_724_p66}, {agg_result_V_i8_fu_590_p66}};

assign p_Result_8_fu_34_p3 = {{r_in_V}, {d_V}};

assign p_Result_s_fu_578_p5 = {{{{agg_result_V_i6_fu_444_p66}, {agg_result_V_i4_fu_310_p66}}, {agg_result_V_i2_fu_176_p66}}, {agg_result_V_i_fu_42_p66}};

endmodule //lut_div11_chunk
