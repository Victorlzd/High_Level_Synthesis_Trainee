// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="top,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=3.290000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=0,HLS_SYN_LUT=32,HLS_VERSION=2018_2}" *)

module top (
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a_V,
        b_V,
        ap_return
);


input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [3:0] a_V;
input  [1:0] b_V;
output  [0:0] ap_return;

wire   [5:0] p_Result_s_fu_36_p3;
wire   [5:0] mul_fu_48_p0;
wire   [13:0] mul_fu_48_p2;
wire   [13:0] mul_fu_48_p00;

assign ap_done = ap_start;

assign ap_idle = 1'b1;

assign ap_ready = ap_start;

assign ap_return = mul_fu_48_p2[32'd8];

assign mul_fu_48_p0 = mul_fu_48_p00;

assign mul_fu_48_p00 = p_Result_s_fu_36_p3;

assign mul_fu_48_p2 = (mul_fu_48_p0 * $signed('h56));

assign p_Result_s_fu_36_p3 = {{b_V}, {a_V}};

endmodule //top