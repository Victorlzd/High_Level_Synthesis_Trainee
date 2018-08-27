// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="mul6,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=2.500000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=1.785000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=0,HLS_SYN_LUT=39,HLS_VERSION=2018_2}" *)

module mul6 (
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a,
        ap_return
);


input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] a;
output  [31:0] ap_return;

wire   [31:0] tmp_1_fu_22_p2;
wire   [31:0] tmp_2_fu_28_p2;

assign ap_done = ap_start;

assign ap_idle = 1'b1;

assign ap_ready = ap_start;

assign ap_return = (tmp_1_fu_22_p2 - tmp_2_fu_28_p2);

assign tmp_1_fu_22_p2 = a << 32'd3;

assign tmp_2_fu_28_p2 = a << 32'd1;

endmodule //mul6
