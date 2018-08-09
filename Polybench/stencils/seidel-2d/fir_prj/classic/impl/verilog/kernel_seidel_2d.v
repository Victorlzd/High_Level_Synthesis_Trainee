// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel_seidel_2d,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.288000,HLS_SYN_LAT=1354605401,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=6,HLS_SYN_FF=3260,HLS_SYN_LUT=4839,HLS_VERSION=2018_2}" *)

module kernel_seidel_2d (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        tsteps,
        n,
        A_address0,
        A_ce0,
        A_q0,
        A_address1,
        A_ce1,
        A_we1,
        A_d1,
        A_q1
);

parameter    ap_ST_fsm_state1 = 71'd1;
parameter    ap_ST_fsm_state2 = 71'd2;
parameter    ap_ST_fsm_state3 = 71'd4;
parameter    ap_ST_fsm_state4 = 71'd8;
parameter    ap_ST_fsm_state5 = 71'd16;
parameter    ap_ST_fsm_state6 = 71'd32;
parameter    ap_ST_fsm_state7 = 71'd64;
parameter    ap_ST_fsm_state8 = 71'd128;
parameter    ap_ST_fsm_state9 = 71'd256;
parameter    ap_ST_fsm_state10 = 71'd512;
parameter    ap_ST_fsm_state11 = 71'd1024;
parameter    ap_ST_fsm_state12 = 71'd2048;
parameter    ap_ST_fsm_state13 = 71'd4096;
parameter    ap_ST_fsm_state14 = 71'd8192;
parameter    ap_ST_fsm_state15 = 71'd16384;
parameter    ap_ST_fsm_state16 = 71'd32768;
parameter    ap_ST_fsm_state17 = 71'd65536;
parameter    ap_ST_fsm_state18 = 71'd131072;
parameter    ap_ST_fsm_state19 = 71'd262144;
parameter    ap_ST_fsm_state20 = 71'd524288;
parameter    ap_ST_fsm_state21 = 71'd1048576;
parameter    ap_ST_fsm_state22 = 71'd2097152;
parameter    ap_ST_fsm_state23 = 71'd4194304;
parameter    ap_ST_fsm_state24 = 71'd8388608;
parameter    ap_ST_fsm_state25 = 71'd16777216;
parameter    ap_ST_fsm_state26 = 71'd33554432;
parameter    ap_ST_fsm_state27 = 71'd67108864;
parameter    ap_ST_fsm_state28 = 71'd134217728;
parameter    ap_ST_fsm_state29 = 71'd268435456;
parameter    ap_ST_fsm_state30 = 71'd536870912;
parameter    ap_ST_fsm_state31 = 71'd1073741824;
parameter    ap_ST_fsm_state32 = 71'd2147483648;
parameter    ap_ST_fsm_state33 = 71'd4294967296;
parameter    ap_ST_fsm_state34 = 71'd8589934592;
parameter    ap_ST_fsm_state35 = 71'd17179869184;
parameter    ap_ST_fsm_state36 = 71'd34359738368;
parameter    ap_ST_fsm_state37 = 71'd68719476736;
parameter    ap_ST_fsm_state38 = 71'd137438953472;
parameter    ap_ST_fsm_state39 = 71'd274877906944;
parameter    ap_ST_fsm_state40 = 71'd549755813888;
parameter    ap_ST_fsm_state41 = 71'd1099511627776;
parameter    ap_ST_fsm_state42 = 71'd2199023255552;
parameter    ap_ST_fsm_state43 = 71'd4398046511104;
parameter    ap_ST_fsm_state44 = 71'd8796093022208;
parameter    ap_ST_fsm_state45 = 71'd17592186044416;
parameter    ap_ST_fsm_state46 = 71'd35184372088832;
parameter    ap_ST_fsm_state47 = 71'd70368744177664;
parameter    ap_ST_fsm_state48 = 71'd140737488355328;
parameter    ap_ST_fsm_state49 = 71'd281474976710656;
parameter    ap_ST_fsm_state50 = 71'd562949953421312;
parameter    ap_ST_fsm_state51 = 71'd1125899906842624;
parameter    ap_ST_fsm_state52 = 71'd2251799813685248;
parameter    ap_ST_fsm_state53 = 71'd4503599627370496;
parameter    ap_ST_fsm_state54 = 71'd9007199254740992;
parameter    ap_ST_fsm_state55 = 71'd18014398509481984;
parameter    ap_ST_fsm_state56 = 71'd36028797018963968;
parameter    ap_ST_fsm_state57 = 71'd72057594037927936;
parameter    ap_ST_fsm_state58 = 71'd144115188075855872;
parameter    ap_ST_fsm_state59 = 71'd288230376151711744;
parameter    ap_ST_fsm_state60 = 71'd576460752303423488;
parameter    ap_ST_fsm_state61 = 71'd1152921504606846976;
parameter    ap_ST_fsm_state62 = 71'd2305843009213693952;
parameter    ap_ST_fsm_state63 = 71'd4611686018427387904;
parameter    ap_ST_fsm_state64 = 71'd9223372036854775808;
parameter    ap_ST_fsm_state65 = 71'd18446744073709551616;
parameter    ap_ST_fsm_state66 = 71'd36893488147419103232;
parameter    ap_ST_fsm_state67 = 71'd73786976294838206464;
parameter    ap_ST_fsm_state68 = 71'd147573952589676412928;
parameter    ap_ST_fsm_state69 = 71'd295147905179352825856;
parameter    ap_ST_fsm_state70 = 71'd590295810358705651712;
parameter    ap_ST_fsm_state71 = 71'd1180591620717411303424;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] tsteps;
input  [31:0] n;
output  [19:0] A_address0;
output   A_ce0;
input  [63:0] A_q0;
output  [19:0] A_address1;
output   A_ce1;
output   A_we1;
output  [63:0] A_d1;
input  [63:0] A_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[19:0] A_address0;
reg A_ce0;
reg[19:0] A_address1;
reg A_ce1;
reg A_we1;

(* fsm_encoding = "none" *) reg   [70:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [63:0] reg_160;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state17;
wire    ap_CS_fsm_state22;
wire    ap_CS_fsm_state27;
wire    ap_CS_fsm_state32;
wire    ap_CS_fsm_state37;
wire    ap_CS_fsm_state42;
wire   [63:0] grp_fu_151_p2;
reg   [63:0] reg_167;
wire    ap_CS_fsm_state47;
wire   [4:0] t_1_fu_179_p2;
reg   [4:0] t_1_reg_346;
wire    ap_CS_fsm_state2;
wire   [19:0] tmp_s_fu_325_p2;
reg   [19:0] tmp_s_reg_354;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond1_fu_185_p2;
wire   [19:0] tmp_1_fu_331_p2;
reg   [19:0] tmp_1_reg_361;
wire   [9:0] i_1_fu_205_p2;
reg   [9:0] i_1_reg_368;
wire   [19:0] tmp_2_fu_337_p2;
reg   [19:0] tmp_2_reg_373;
wire   [19:0] tmp_6_cast_fu_227_p1;
reg   [19:0] tmp_6_cast_reg_383;
wire    ap_CS_fsm_state4;
wire   [0:0] exitcond_fu_215_p2;
wire   [19:0] tmp_7_cast_fu_241_p1;
reg   [19:0] tmp_7_cast_reg_394;
reg   [63:0] A_load_1_reg_405;
wire   [9:0] j_1_fu_255_p2;
reg   [9:0] j_1_reg_410;
wire    ap_CS_fsm_state9;
wire   [19:0] tmp_cast_fu_261_p1;
reg   [19:0] tmp_cast_reg_415;
wire    ap_CS_fsm_state14;
(* use_dsp48 = "no" *) wire   [19:0] tmp_7_fu_284_p2;
reg   [19:0] tmp_7_reg_431;
wire    ap_CS_fsm_state19;
reg   [19:0] A_addr_4_reg_436;
(* use_dsp48 = "no" *) wire   [19:0] tmp_18_fu_297_p2;
reg   [19:0] tmp_18_reg_442;
(* use_dsp48 = "no" *) wire   [19:0] tmp_20_fu_301_p2;
reg   [19:0] tmp_20_reg_447;
(* use_dsp48 = "no" *) wire   [19:0] tmp_21_fu_305_p2;
reg   [19:0] tmp_21_reg_452;
wire    ap_CS_fsm_state24;
wire    ap_CS_fsm_state29;
wire    ap_CS_fsm_state34;
wire    ap_CS_fsm_state39;
wire   [63:0] grp_fu_155_p2;
reg   [63:0] tmp_15_reg_477;
wire    ap_CS_fsm_state69;
reg   [4:0] t_reg_117;
reg   [9:0] i_reg_128;
wire   [0:0] exitcond2_fu_173_p2;
reg   [9:0] j_reg_139;
wire    ap_CS_fsm_state71;
wire   [63:0] tmp_19_cast_fu_236_p1;
wire   [63:0] tmp_22_cast_fu_250_p1;
wire   [63:0] tmp_25_cast_fu_270_p1;
wire   [63:0] tmp_20_cast_fu_279_p1;
wire   [63:0] tmp_23_cast_fu_292_p1;
wire   [63:0] tmp_26_cast_fu_309_p1;
wire   [63:0] tmp_21_cast_fu_313_p1;
wire   [63:0] tmp_24_cast_fu_317_p1;
wire   [63:0] tmp_27_cast_fu_321_p1;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state20;
wire    ap_CS_fsm_state21;
wire    ap_CS_fsm_state25;
wire    ap_CS_fsm_state26;
wire    ap_CS_fsm_state30;
wire    ap_CS_fsm_state31;
wire    ap_CS_fsm_state35;
wire    ap_CS_fsm_state36;
wire    ap_CS_fsm_state40;
wire    ap_CS_fsm_state41;
wire    ap_CS_fsm_state70;
reg   [63:0] grp_fu_151_p0;
reg   [63:0] grp_fu_151_p1;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state23;
wire    ap_CS_fsm_state28;
wire    ap_CS_fsm_state33;
wire    ap_CS_fsm_state38;
wire    ap_CS_fsm_state43;
wire    ap_CS_fsm_state48;
wire   [9:0] tmp_fu_191_p2;
wire   [9:0] tmp_5_fu_221_p2;
(* use_dsp48 = "no" *) wire   [19:0] tmp_4_fu_231_p2;
(* use_dsp48 = "no" *) wire   [19:0] tmp_16_fu_245_p2;
(* use_dsp48 = "no" *) wire   [19:0] tmp_19_fu_265_p2;
(* use_dsp48 = "no" *) wire   [19:0] tmp_6_fu_275_p2;
(* use_dsp48 = "no" *) wire   [19:0] tmp_17_fu_288_p2;
wire   [9:0] tmp_s_fu_325_p0;
wire   [10:0] tmp_s_fu_325_p1;
wire   [9:0] tmp_1_fu_331_p0;
wire   [10:0] tmp_1_fu_331_p1;
wire   [9:0] tmp_2_fu_337_p0;
wire   [10:0] tmp_2_fu_337_p1;
reg   [70:0] ap_NS_fsm;
wire   [19:0] tmp_1_fu_331_p00;
wire   [19:0] tmp_2_fu_337_p00;
wire   [19:0] tmp_s_fu_325_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 71'd1;
end

kernel_seidel_2d_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
kernel_seidel_2d_bkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_151_p0),
    .din1(grp_fu_151_p1),
    .ce(1'b1),
    .dout(grp_fu_151_p2)
);

kernel_seidel_2d_cud #(
    .ID( 1 ),
    .NUM_STAGE( 22 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
kernel_seidel_2d_cud_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_167),
    .din1(64'd4621256167635550208),
    .ce(1'b1),
    .dout(grp_fu_155_p2)
);

kernel_seidel_2d_dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 10 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 20 ))
kernel_seidel_2d_dEe_U3(
    .din0(tmp_s_fu_325_p0),
    .din1(tmp_s_fu_325_p1),
    .dout(tmp_s_fu_325_p2)
);

kernel_seidel_2d_dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 10 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 20 ))
kernel_seidel_2d_dEe_U4(
    .din0(tmp_1_fu_331_p0),
    .din1(tmp_1_fu_331_p1),
    .dout(tmp_1_fu_331_p2)
);

kernel_seidel_2d_dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 10 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 20 ))
kernel_seidel_2d_dEe_U5(
    .din0(tmp_2_fu_337_p0),
    .din1(tmp_2_fu_337_p1),
    .dout(tmp_2_fu_337_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond2_fu_173_p2 == 1'd0))) begin
        i_reg_128 <= 10'd1;
    end else if (((1'b1 == ap_CS_fsm_state4) & (exitcond_fu_215_p2 == 1'd1))) begin
        i_reg_128 <= i_1_reg_368;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_185_p2 == 1'd0))) begin
        j_reg_139 <= 10'd1;
    end else if ((1'b1 == ap_CS_fsm_state71)) begin
        j_reg_139 <= j_1_reg_410;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state37) | (1'b1 == ap_CS_fsm_state27) | (1'b1 == ap_CS_fsm_state17))) begin
        reg_160 <= A_q1;
    end else if (((1'b1 == ap_CS_fsm_state42) | (1'b1 == ap_CS_fsm_state32) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state7))) begin
        reg_160 <= A_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_185_p2 == 1'd1))) begin
        t_reg_117 <= t_1_reg_346;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        t_reg_117 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        A_addr_4_reg_436 <= tmp_23_cast_fu_292_p1;
        tmp_18_reg_442 <= tmp_18_fu_297_p2;
        tmp_20_reg_447 <= tmp_20_fu_301_p2;
        tmp_21_reg_452 <= tmp_21_fu_305_p2;
        tmp_7_reg_431 <= tmp_7_fu_284_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        A_load_1_reg_405 <= A_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_185_p2 == 1'd0))) begin
        i_1_reg_368 <= i_1_fu_205_p2;
        tmp_1_reg_361 <= tmp_1_fu_331_p2;
        tmp_2_reg_373 <= tmp_2_fu_337_p2;
        tmp_s_reg_354 <= tmp_s_fu_325_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        j_1_reg_410 <= j_1_fu_255_p2;
        tmp_cast_reg_415[9 : 0] <= tmp_cast_fu_261_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state47) | (1'b1 == ap_CS_fsm_state42) | (1'b1 == ap_CS_fsm_state37) | (1'b1 == ap_CS_fsm_state32) | (1'b1 == ap_CS_fsm_state27) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state12))) begin
        reg_167 <= grp_fu_151_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        t_1_reg_346 <= t_1_fu_179_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state69)) begin
        tmp_15_reg_477 <= grp_fu_155_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (exitcond_fu_215_p2 == 1'd0))) begin
        tmp_6_cast_reg_383[9 : 0] <= tmp_6_cast_fu_227_p1[9 : 0];
        tmp_7_cast_reg_394[9 : 0] <= tmp_7_cast_fu_241_p1[9 : 0];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state39)) begin
        A_address0 = tmp_27_cast_fu_321_p1;
    end else if ((1'b1 == ap_CS_fsm_state29)) begin
        A_address0 = tmp_21_cast_fu_313_p1;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        A_address0 = tmp_23_cast_fu_292_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        A_address0 = tmp_25_cast_fu_270_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        A_address0 = tmp_19_cast_fu_236_p1;
    end else begin
        A_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state70)) begin
        A_address1 = A_addr_4_reg_436;
    end else if ((1'b1 == ap_CS_fsm_state34)) begin
        A_address1 = tmp_24_cast_fu_317_p1;
    end else if ((1'b1 == ap_CS_fsm_state24)) begin
        A_address1 = tmp_26_cast_fu_309_p1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        A_address1 = tmp_20_cast_fu_279_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        A_address1 = tmp_22_cast_fu_250_p1;
    end else begin
        A_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state41) | (1'b1 == ap_CS_fsm_state40) | (1'b1 == ap_CS_fsm_state31) | (1'b1 == ap_CS_fsm_state30) | (1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state39) | (1'b1 == ap_CS_fsm_state29) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state42) | (1'b1 == ap_CS_fsm_state32) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state7))) begin
        A_ce0 = 1'b1;
    end else begin
        A_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state70) | (1'b1 == ap_CS_fsm_state36) | (1'b1 == ap_CS_fsm_state35) | (1'b1 == ap_CS_fsm_state26) | (1'b1 == ap_CS_fsm_state25) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state71) | (1'b1 == ap_CS_fsm_state34) | (1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state37) | (1'b1 == ap_CS_fsm_state27) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state7))) begin
        A_ce1 = 1'b1;
    end else begin
        A_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state70)) begin
        A_we1 = 1'b1;
    end else begin
        A_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond2_fu_173_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond2_fu_173_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state43) | (1'b1 == ap_CS_fsm_state38) | (1'b1 == ap_CS_fsm_state33) | (1'b1 == ap_CS_fsm_state28) | (1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state13))) begin
        grp_fu_151_p0 = reg_167;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_151_p0 = reg_160;
    end else begin
        grp_fu_151_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state43) | (1'b1 == ap_CS_fsm_state38) | (1'b1 == ap_CS_fsm_state33) | (1'b1 == ap_CS_fsm_state28) | (1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state13))) begin
        grp_fu_151_p1 = reg_160;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_151_p1 = A_load_1_reg_405;
    end else begin
        grp_fu_151_p1 = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond2_fu_173_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_185_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (exitcond_fu_215_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        ap_ST_fsm_state47 : begin
            ap_NS_fsm = ap_ST_fsm_state48;
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state50;
        end
        ap_ST_fsm_state50 : begin
            ap_NS_fsm = ap_ST_fsm_state51;
        end
        ap_ST_fsm_state51 : begin
            ap_NS_fsm = ap_ST_fsm_state52;
        end
        ap_ST_fsm_state52 : begin
            ap_NS_fsm = ap_ST_fsm_state53;
        end
        ap_ST_fsm_state53 : begin
            ap_NS_fsm = ap_ST_fsm_state54;
        end
        ap_ST_fsm_state54 : begin
            ap_NS_fsm = ap_ST_fsm_state55;
        end
        ap_ST_fsm_state55 : begin
            ap_NS_fsm = ap_ST_fsm_state56;
        end
        ap_ST_fsm_state56 : begin
            ap_NS_fsm = ap_ST_fsm_state57;
        end
        ap_ST_fsm_state57 : begin
            ap_NS_fsm = ap_ST_fsm_state58;
        end
        ap_ST_fsm_state58 : begin
            ap_NS_fsm = ap_ST_fsm_state59;
        end
        ap_ST_fsm_state59 : begin
            ap_NS_fsm = ap_ST_fsm_state60;
        end
        ap_ST_fsm_state60 : begin
            ap_NS_fsm = ap_ST_fsm_state61;
        end
        ap_ST_fsm_state61 : begin
            ap_NS_fsm = ap_ST_fsm_state62;
        end
        ap_ST_fsm_state62 : begin
            ap_NS_fsm = ap_ST_fsm_state63;
        end
        ap_ST_fsm_state63 : begin
            ap_NS_fsm = ap_ST_fsm_state64;
        end
        ap_ST_fsm_state64 : begin
            ap_NS_fsm = ap_ST_fsm_state65;
        end
        ap_ST_fsm_state65 : begin
            ap_NS_fsm = ap_ST_fsm_state66;
        end
        ap_ST_fsm_state66 : begin
            ap_NS_fsm = ap_ST_fsm_state67;
        end
        ap_ST_fsm_state67 : begin
            ap_NS_fsm = ap_ST_fsm_state68;
        end
        ap_ST_fsm_state68 : begin
            ap_NS_fsm = ap_ST_fsm_state69;
        end
        ap_ST_fsm_state69 : begin
            ap_NS_fsm = ap_ST_fsm_state70;
        end
        ap_ST_fsm_state70 : begin
            ap_NS_fsm = ap_ST_fsm_state71;
        end
        ap_ST_fsm_state71 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign A_d1 = tmp_15_reg_477;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];

assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state26 = ap_CS_fsm[32'd25];

assign ap_CS_fsm_state27 = ap_CS_fsm[32'd26];

assign ap_CS_fsm_state28 = ap_CS_fsm[32'd27];

assign ap_CS_fsm_state29 = ap_CS_fsm[32'd28];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state30 = ap_CS_fsm[32'd29];

assign ap_CS_fsm_state31 = ap_CS_fsm[32'd30];

assign ap_CS_fsm_state32 = ap_CS_fsm[32'd31];

assign ap_CS_fsm_state33 = ap_CS_fsm[32'd32];

assign ap_CS_fsm_state34 = ap_CS_fsm[32'd33];

assign ap_CS_fsm_state35 = ap_CS_fsm[32'd34];

assign ap_CS_fsm_state36 = ap_CS_fsm[32'd35];

assign ap_CS_fsm_state37 = ap_CS_fsm[32'd36];

assign ap_CS_fsm_state38 = ap_CS_fsm[32'd37];

assign ap_CS_fsm_state39 = ap_CS_fsm[32'd38];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state40 = ap_CS_fsm[32'd39];

assign ap_CS_fsm_state41 = ap_CS_fsm[32'd40];

assign ap_CS_fsm_state42 = ap_CS_fsm[32'd41];

assign ap_CS_fsm_state43 = ap_CS_fsm[32'd42];

assign ap_CS_fsm_state47 = ap_CS_fsm[32'd46];

assign ap_CS_fsm_state48 = ap_CS_fsm[32'd47];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state69 = ap_CS_fsm[32'd68];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state70 = ap_CS_fsm[32'd69];

assign ap_CS_fsm_state71 = ap_CS_fsm[32'd70];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond1_fu_185_p2 = ((i_reg_128 == 10'd999) ? 1'b1 : 1'b0);

assign exitcond2_fu_173_p2 = ((t_reg_117 == 5'd20) ? 1'b1 : 1'b0);

assign exitcond_fu_215_p2 = ((j_reg_139 == 10'd999) ? 1'b1 : 1'b0);

assign i_1_fu_205_p2 = (i_reg_128 + 10'd1);

assign j_1_fu_255_p2 = (j_reg_139 + 10'd1);

assign t_1_fu_179_p2 = (t_reg_117 + 5'd1);

assign tmp_16_fu_245_p2 = (tmp_s_reg_354 + tmp_7_cast_fu_241_p1);

assign tmp_17_fu_288_p2 = (tmp_1_reg_361 + tmp_7_cast_reg_394);

assign tmp_18_fu_297_p2 = (tmp_2_reg_373 + tmp_7_cast_reg_394);

assign tmp_19_cast_fu_236_p1 = tmp_4_fu_231_p2;

assign tmp_19_fu_265_p2 = (tmp_s_reg_354 + tmp_cast_fu_261_p1);

assign tmp_1_fu_331_p0 = tmp_1_fu_331_p00;

assign tmp_1_fu_331_p00 = i_reg_128;

assign tmp_1_fu_331_p1 = 20'd1000;

assign tmp_20_cast_fu_279_p1 = tmp_6_fu_275_p2;

assign tmp_20_fu_301_p2 = (tmp_1_reg_361 + tmp_cast_reg_415);

assign tmp_21_cast_fu_313_p1 = tmp_7_reg_431;

assign tmp_21_fu_305_p2 = (tmp_2_reg_373 + tmp_cast_reg_415);

assign tmp_22_cast_fu_250_p1 = tmp_16_fu_245_p2;

assign tmp_23_cast_fu_292_p1 = tmp_17_fu_288_p2;

assign tmp_24_cast_fu_317_p1 = tmp_18_reg_442;

assign tmp_25_cast_fu_270_p1 = tmp_19_fu_265_p2;

assign tmp_26_cast_fu_309_p1 = tmp_20_reg_447;

assign tmp_27_cast_fu_321_p1 = tmp_21_reg_452;

assign tmp_2_fu_337_p0 = tmp_2_fu_337_p00;

assign tmp_2_fu_337_p00 = i_1_fu_205_p2;

assign tmp_2_fu_337_p1 = 20'd1000;

assign tmp_4_fu_231_p2 = (tmp_s_reg_354 + tmp_6_cast_fu_227_p1);

assign tmp_5_fu_221_p2 = ($signed(j_reg_139) + $signed(10'd1023));

assign tmp_6_cast_fu_227_p1 = tmp_5_fu_221_p2;

assign tmp_6_fu_275_p2 = (tmp_1_reg_361 + tmp_6_cast_reg_383);

assign tmp_7_cast_fu_241_p1 = j_reg_139;

assign tmp_7_fu_284_p2 = (tmp_2_reg_373 + tmp_6_cast_reg_383);

assign tmp_cast_fu_261_p1 = j_1_fu_255_p2;

assign tmp_fu_191_p2 = ($signed(i_reg_128) + $signed(10'd1023));

assign tmp_s_fu_325_p0 = tmp_s_fu_325_p00;

assign tmp_s_fu_325_p00 = tmp_fu_191_p2;

assign tmp_s_fu_325_p1 = 20'd1000;

always @ (posedge ap_clk) begin
    tmp_6_cast_reg_383[19:10] <= 10'b0000000000;
    tmp_7_cast_reg_394[19:10] <= 10'b0000000000;
    tmp_cast_reg_415[19:10] <= 10'b0000000000;
end

endmodule //kernel_seidel_2d
