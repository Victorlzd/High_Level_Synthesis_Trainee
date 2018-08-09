// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel_jacobi_2d_imper,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=41.410375,HLS_SYN_LAT=677362621,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=7,HLS_SYN_FF=1185,HLS_SYN_LUT=20337,HLS_VERSION=2018_2}" *)

module kernel_jacobi_2d_imper (
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
        A_q1,
        B_address0,
        B_ce0,
        B_we0,
        B_d0,
        B_q0
);

parameter    ap_ST_fsm_state1 = 37'd1;
parameter    ap_ST_fsm_state2 = 37'd2;
parameter    ap_ST_fsm_state3 = 37'd4;
parameter    ap_ST_fsm_state4 = 37'd8;
parameter    ap_ST_fsm_state5 = 37'd16;
parameter    ap_ST_fsm_state6 = 37'd32;
parameter    ap_ST_fsm_state7 = 37'd64;
parameter    ap_ST_fsm_state8 = 37'd128;
parameter    ap_ST_fsm_state9 = 37'd256;
parameter    ap_ST_fsm_state10 = 37'd512;
parameter    ap_ST_fsm_state11 = 37'd1024;
parameter    ap_ST_fsm_state12 = 37'd2048;
parameter    ap_ST_fsm_state13 = 37'd4096;
parameter    ap_ST_fsm_state14 = 37'd8192;
parameter    ap_ST_fsm_state15 = 37'd16384;
parameter    ap_ST_fsm_state16 = 37'd32768;
parameter    ap_ST_fsm_state17 = 37'd65536;
parameter    ap_ST_fsm_state18 = 37'd131072;
parameter    ap_ST_fsm_state19 = 37'd262144;
parameter    ap_ST_fsm_state20 = 37'd524288;
parameter    ap_ST_fsm_state21 = 37'd1048576;
parameter    ap_ST_fsm_state22 = 37'd2097152;
parameter    ap_ST_fsm_state23 = 37'd4194304;
parameter    ap_ST_fsm_state24 = 37'd8388608;
parameter    ap_ST_fsm_state25 = 37'd16777216;
parameter    ap_ST_fsm_state26 = 37'd33554432;
parameter    ap_ST_fsm_state27 = 37'd67108864;
parameter    ap_ST_fsm_state28 = 37'd134217728;
parameter    ap_ST_fsm_state29 = 37'd268435456;
parameter    ap_ST_fsm_state30 = 37'd536870912;
parameter    ap_ST_fsm_state31 = 37'd1073741824;
parameter    ap_ST_fsm_state32 = 37'd2147483648;
parameter    ap_ST_fsm_state33 = 37'd4294967296;
parameter    ap_ST_fsm_state34 = 37'd8589934592;
parameter    ap_ST_fsm_state35 = 37'd17179869184;
parameter    ap_ST_fsm_state36 = 37'd34359738368;
parameter    ap_ST_fsm_state37 = 37'd68719476736;

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
output  [19:0] B_address0;
output   B_ce0;
output   B_we0;
output  [63:0] B_d0;
input  [63:0] B_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[19:0] A_address0;
reg A_ce0;
reg[19:0] A_address1;
reg A_ce1;
reg A_we1;
reg[19:0] B_address0;
reg B_ce0;
reg B_we0;

(* fsm_encoding = "none" *) reg   [36:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [63:0] reg_182;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state17;
wire    ap_CS_fsm_state22;
wire   [63:0] grp_fu_178_p2;
reg   [63:0] reg_189;
wire    ap_CS_fsm_state27;
wire   [4:0] t_1_fu_201_p2;
reg   [4:0] t_1_reg_383;
wire    ap_CS_fsm_state2;
wire   [19:0] tmp_s_fu_356_p2;
reg   [19:0] tmp_s_reg_391;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond3_fu_207_p2;
wire   [9:0] i_2_fu_217_p2;
reg   [9:0] i_2_reg_398;
wire   [19:0] tmp_2_fu_362_p2;
reg   [19:0] tmp_2_reg_403;
wire   [19:0] tmp_5_fu_368_p2;
reg   [19:0] tmp_5_reg_408;
wire   [63:0] tmp_18_cast_fu_252_p1;
reg   [63:0] tmp_18_cast_reg_416;
wire    ap_CS_fsm_state4;
wire   [0:0] exitcond2_fu_237_p2;
(* use_dsp48 = "no" *) wire   [19:0] tmp_9_fu_257_p2;
reg   [19:0] tmp_9_reg_426;
(* use_dsp48 = "no" *) wire   [19:0] tmp_13_fu_262_p2;
reg   [19:0] tmp_13_reg_431;
wire   [9:0] j_2_fu_287_p2;
reg   [9:0] j_2_reg_441;
(* use_dsp48 = "no" *) wire   [19:0] tmp_15_fu_297_p2;
reg   [19:0] tmp_15_reg_446;
reg   [63:0] A_load_1_reg_451;
wire    ap_CS_fsm_state9;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state19;
wire   [63:0] grp_operator_double_div5_fu_173_ap_return;
reg   [63:0] tmp_12_reg_471;
wire    ap_CS_fsm_state29;
wire    grp_operator_double_div5_fu_173_ap_idle;
wire    grp_operator_double_div5_fu_173_ap_ready;
wire    grp_operator_double_div5_fu_173_ap_done;
wire    ap_CS_fsm_state30;
wire   [19:0] tmp_6_fu_374_p2;
reg   [19:0] tmp_6_reg_484;
wire    ap_CS_fsm_state32;
wire   [0:0] exitcond1_fu_314_p2;
wire   [63:0] tmp_23_cast_fu_339_p1;
reg   [63:0] tmp_23_cast_reg_492;
wire    ap_CS_fsm_state33;
wire   [0:0] exitcond_fu_324_p2;
wire   [9:0] j_3_fu_344_p2;
reg   [9:0] j_3_reg_502;
wire   [9:0] i_3_fu_350_p2;
wire    ap_CS_fsm_state36;
wire    grp_operator_double_div5_fu_173_ap_start;
reg   [4:0] t_reg_117;
reg   [9:0] i_reg_128;
wire   [0:0] exitcond4_fu_195_p2;
reg   [9:0] j_reg_139;
wire    ap_CS_fsm_state31;
reg   [9:0] i_1_reg_150;
reg   [9:0] j_1_reg_162;
wire    ap_CS_fsm_state37;
reg    grp_operator_double_div5_fu_173_ap_start_reg;
wire    ap_CS_fsm_state28;
wire   [63:0] tmp_21_cast_fu_282_p1;
wire   [63:0] tmp_22_cast_fu_302_p1;
wire   [63:0] tmp_19_cast_fu_306_p1;
wire   [63:0] tmp_20_cast_fu_310_p1;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state20;
wire    ap_CS_fsm_state21;
wire    ap_CS_fsm_state34;
wire    ap_CS_fsm_state35;
reg   [63:0] grp_fu_178_p0;
reg   [63:0] grp_fu_178_p1;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state23;
wire   [9:0] tmp_4_fu_227_p2;
wire   [19:0] tmp_7_cast_fu_243_p1;
(* use_dsp48 = "no" *) wire   [19:0] tmp_7_fu_247_p2;
wire   [9:0] tmp_8_fu_267_p2;
wire   [19:0] tmp_9_cast_fu_273_p1;
(* use_dsp48 = "no" *) wire   [19:0] tmp_14_fu_277_p2;
wire   [19:0] tmp_2_cast_fu_293_p1;
wire   [19:0] tmp_13_cast_fu_330_p1;
(* use_dsp48 = "no" *) wire   [19:0] tmp_16_fu_334_p2;
wire   [9:0] tmp_s_fu_356_p0;
wire   [10:0] tmp_s_fu_356_p1;
wire   [9:0] tmp_2_fu_362_p0;
wire   [10:0] tmp_2_fu_362_p1;
wire   [9:0] tmp_5_fu_368_p0;
wire   [10:0] tmp_5_fu_368_p1;
wire   [9:0] tmp_6_fu_374_p0;
wire   [10:0] tmp_6_fu_374_p1;
reg   [36:0] ap_NS_fsm;
wire   [19:0] tmp_2_fu_362_p00;
wire   [19:0] tmp_5_fu_368_p00;
wire   [19:0] tmp_6_fu_374_p00;
wire   [19:0] tmp_s_fu_356_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 37'd1;
#0 grp_operator_double_div5_fu_173_ap_start_reg = 1'b0;
end

operator_double_div5 grp_operator_double_div5_fu_173(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_operator_double_div5_fu_173_ap_start),
    .ap_done(grp_operator_double_div5_fu_173_ap_done),
    .ap_idle(grp_operator_double_div5_fu_173_ap_idle),
    .ap_ready(grp_operator_double_div5_fu_173_ap_ready),
    .in_r(reg_189),
    .ap_return(grp_operator_double_div5_fu_173_ap_return)
);

kernel_jacobi_2d_cud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
kernel_jacobi_2d_cud_U16(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_178_p0),
    .din1(grp_fu_178_p1),
    .ce(1'b1),
    .dout(grp_fu_178_p2)
);

kernel_jacobi_2d_dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 10 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 20 ))
kernel_jacobi_2d_dEe_U17(
    .din0(tmp_s_fu_356_p0),
    .din1(tmp_s_fu_356_p1),
    .dout(tmp_s_fu_356_p2)
);

kernel_jacobi_2d_dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 10 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 20 ))
kernel_jacobi_2d_dEe_U18(
    .din0(tmp_2_fu_362_p0),
    .din1(tmp_2_fu_362_p1),
    .dout(tmp_2_fu_362_p2)
);

kernel_jacobi_2d_dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 10 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 20 ))
kernel_jacobi_2d_dEe_U19(
    .din0(tmp_5_fu_368_p0),
    .din1(tmp_5_fu_368_p1),
    .dout(tmp_5_fu_368_p2)
);

kernel_jacobi_2d_dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 10 ),
    .din1_WIDTH( 11 ),
    .dout_WIDTH( 20 ))
kernel_jacobi_2d_dEe_U20(
    .din0(tmp_6_fu_374_p0),
    .din1(tmp_6_fu_374_p1),
    .dout(tmp_6_fu_374_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_operator_double_div5_fu_173_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state28)) begin
            grp_operator_double_div5_fu_173_ap_start_reg <= 1'b1;
        end else if ((grp_operator_double_div5_fu_173_ap_ready == 1'b1)) begin
            grp_operator_double_div5_fu_173_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond3_fu_207_p2 == 1'd1))) begin
        i_1_reg_150 <= 10'd1;
    end else if (((exitcond_fu_324_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state33))) begin
        i_1_reg_150 <= i_3_fu_350_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond4_fu_195_p2 == 1'd0))) begin
        i_reg_128 <= 10'd1;
    end else if (((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_237_p2 == 1'd1))) begin
        i_reg_128 <= i_2_reg_398;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state32) & (exitcond1_fu_314_p2 == 1'd0))) begin
        j_1_reg_162 <= 10'd1;
    end else if ((1'b1 == ap_CS_fsm_state37)) begin
        j_1_reg_162 <= j_3_reg_502;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond3_fu_207_p2 == 1'd0))) begin
        j_reg_139 <= 10'd1;
    end else if ((1'b1 == ap_CS_fsm_state31)) begin
        j_reg_139 <= j_2_reg_441;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        reg_182 <= A_q1;
    end else if (((1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state7))) begin
        reg_182 <= A_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_314_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state32))) begin
        t_reg_117 <= t_1_reg_383;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        t_reg_117 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        A_load_1_reg_451 <= A_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond3_fu_207_p2 == 1'd0))) begin
        i_2_reg_398 <= i_2_fu_217_p2;
        tmp_2_reg_403 <= tmp_2_fu_362_p2;
        tmp_5_reg_408 <= tmp_5_fu_368_p2;
        tmp_s_reg_391 <= tmp_s_fu_356_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_237_p2 == 1'd0))) begin
        j_2_reg_441 <= j_2_fu_287_p2;
        tmp_13_reg_431 <= tmp_13_fu_262_p2;
        tmp_15_reg_446 <= tmp_15_fu_297_p2;
        tmp_18_cast_reg_416[19 : 0] <= tmp_18_cast_fu_252_p1[19 : 0];
        tmp_9_reg_426 <= tmp_9_fu_257_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state33) & (exitcond_fu_324_p2 == 1'd0))) begin
        j_3_reg_502 <= j_3_fu_344_p2;
        tmp_23_cast_reg_492[19 : 0] <= tmp_23_cast_fu_339_p1[19 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state27))) begin
        reg_189 <= grp_fu_178_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        t_1_reg_383 <= t_1_fu_201_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state29) & (grp_operator_double_div5_fu_173_ap_done == 1'b1))) begin
        tmp_12_reg_471 <= grp_operator_double_div5_fu_173_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state32) & (exitcond1_fu_314_p2 == 1'd0))) begin
        tmp_6_reg_484 <= tmp_6_fu_374_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        A_address0 = tmp_20_cast_fu_310_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        A_address0 = tmp_22_cast_fu_302_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        A_address0 = tmp_18_cast_fu_252_p1;
    end else begin
        A_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state36)) begin
        A_address1 = tmp_23_cast_reg_492;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        A_address1 = tmp_19_cast_fu_306_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        A_address1 = tmp_21_cast_fu_282_p1;
    end else begin
        A_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state4))) begin
        A_ce0 = 1'b1;
    end else begin
        A_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state37) | (1'b1 == ap_CS_fsm_state36) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state4))) begin
        A_ce1 = 1'b1;
    end else begin
        A_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state36)) begin
        A_we1 = 1'b1;
    end else begin
        A_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state33)) begin
        B_address0 = tmp_23_cast_fu_339_p1;
    end else if ((1'b1 == ap_CS_fsm_state30)) begin
        B_address0 = tmp_18_cast_reg_416;
    end else begin
        B_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state35) | (1'b1 == ap_CS_fsm_state34) | (1'b1 == ap_CS_fsm_state31) | (1'b1 == ap_CS_fsm_state36) | (1'b1 == ap_CS_fsm_state33) | (1'b1 == ap_CS_fsm_state30))) begin
        B_ce0 = 1'b1;
    end else begin
        B_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state30)) begin
        B_we0 = 1'b1;
    end else begin
        B_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond4_fu_195_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((exitcond4_fu_195_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state13))) begin
        grp_fu_178_p0 = reg_189;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_178_p0 = reg_182;
    end else begin
        grp_fu_178_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state13))) begin
        grp_fu_178_p1 = reg_182;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_178_p1 = A_load_1_reg_451;
    end else begin
        grp_fu_178_p1 = 'bx;
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
            if (((exitcond4_fu_195_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond3_fu_207_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state32;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_237_p2 == 1'd1))) begin
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
            if (((1'b1 == ap_CS_fsm_state29) & (grp_operator_double_div5_fu_173_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state30;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state29;
            end
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state32 : begin
            if (((exitcond1_fu_314_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state32))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state33;
            end
        end
        ap_ST_fsm_state33 : begin
            if (((exitcond_fu_324_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state33))) begin
                ap_NS_fsm = ap_ST_fsm_state32;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state34;
            end
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
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign A_d1 = B_q0;

assign B_d0 = tmp_12_reg_471;

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

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond1_fu_314_p2 = ((i_1_reg_150 == 10'd999) ? 1'b1 : 1'b0);

assign exitcond2_fu_237_p2 = ((j_reg_139 == 10'd999) ? 1'b1 : 1'b0);

assign exitcond3_fu_207_p2 = ((i_reg_128 == 10'd999) ? 1'b1 : 1'b0);

assign exitcond4_fu_195_p2 = ((t_reg_117 == 5'd20) ? 1'b1 : 1'b0);

assign exitcond_fu_324_p2 = ((j_1_reg_162 == 10'd999) ? 1'b1 : 1'b0);

assign grp_operator_double_div5_fu_173_ap_start = grp_operator_double_div5_fu_173_ap_start_reg;

assign i_2_fu_217_p2 = (i_reg_128 + 10'd1);

assign i_3_fu_350_p2 = (i_1_reg_150 + 10'd1);

assign j_2_fu_287_p2 = (j_reg_139 + 10'd1);

assign j_3_fu_344_p2 = (j_1_reg_162 + 10'd1);

assign t_1_fu_201_p2 = (t_reg_117 + 5'd1);

assign tmp_13_cast_fu_330_p1 = j_1_reg_162;

assign tmp_13_fu_262_p2 = (tmp_5_reg_408 + tmp_7_cast_fu_243_p1);

assign tmp_14_fu_277_p2 = (tmp_s_reg_391 + tmp_9_cast_fu_273_p1);

assign tmp_15_fu_297_p2 = (tmp_s_reg_391 + tmp_2_cast_fu_293_p1);

assign tmp_16_fu_334_p2 = (tmp_6_reg_484 + tmp_13_cast_fu_330_p1);

assign tmp_18_cast_fu_252_p1 = tmp_7_fu_247_p2;

assign tmp_19_cast_fu_306_p1 = tmp_9_reg_426;

assign tmp_20_cast_fu_310_p1 = tmp_13_reg_431;

assign tmp_21_cast_fu_282_p1 = tmp_14_fu_277_p2;

assign tmp_22_cast_fu_302_p1 = tmp_15_reg_446;

assign tmp_23_cast_fu_339_p1 = tmp_16_fu_334_p2;

assign tmp_2_cast_fu_293_p1 = j_2_fu_287_p2;

assign tmp_2_fu_362_p0 = tmp_2_fu_362_p00;

assign tmp_2_fu_362_p00 = i_2_fu_217_p2;

assign tmp_2_fu_362_p1 = 20'd1000;

assign tmp_4_fu_227_p2 = ($signed(i_reg_128) + $signed(10'd1023));

assign tmp_5_fu_368_p0 = tmp_5_fu_368_p00;

assign tmp_5_fu_368_p00 = tmp_4_fu_227_p2;

assign tmp_5_fu_368_p1 = 20'd1000;

assign tmp_6_fu_374_p0 = tmp_6_fu_374_p00;

assign tmp_6_fu_374_p00 = i_1_reg_150;

assign tmp_6_fu_374_p1 = 20'd1000;

assign tmp_7_cast_fu_243_p1 = j_reg_139;

assign tmp_7_fu_247_p2 = (tmp_s_reg_391 + tmp_7_cast_fu_243_p1);

assign tmp_8_fu_267_p2 = ($signed(j_reg_139) + $signed(10'd1023));

assign tmp_9_cast_fu_273_p1 = tmp_8_fu_267_p2;

assign tmp_9_fu_257_p2 = (tmp_2_reg_403 + tmp_7_cast_fu_243_p1);

assign tmp_s_fu_356_p0 = tmp_s_fu_356_p00;

assign tmp_s_fu_356_p00 = i_reg_128;

assign tmp_s_fu_356_p1 = 20'd1000;

always @ (posedge ap_clk) begin
    tmp_18_cast_reg_416[63:20] <= 44'b00000000000000000000000000000000000000000000;
    tmp_23_cast_reg_492[63:20] <= 44'b00000000000000000000000000000000000000000000;
end

endmodule //kernel_jacobi_2d_imper
