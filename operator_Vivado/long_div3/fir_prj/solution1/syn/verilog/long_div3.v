// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="long_div3,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.106000,HLS_SYN_LAT=7,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=122,HLS_SYN_LUT=3423,HLS_VERSION=2018_2}" *)

module long_div3 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_r,
        ap_return
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [63:0] in_r;
output  [63:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [1:0] reg_116;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
reg   [3:0] q_chunk_V_reg_299;
reg   [3:0] q_chunk_V_0_1_reg_304;
reg   [3:0] p_Result_2_reg_309;
reg   [3:0] p_Result_3_reg_314;
reg   [3:0] p_Result_4_reg_319;
reg   [3:0] p_Result_5_reg_324;
reg   [3:0] p_Result_6_reg_329;
reg   [3:0] p_Result_7_reg_334;
reg   [3:0] p_Result_8_reg_339;
reg   [3:0] p_Result_9_reg_344;
reg   [3:0] p_Result_s_4_reg_349;
reg   [3:0] p_Result_10_reg_354;
reg   [3:0] p_Result_11_reg_359;
reg   [3:0] p_Result_12_reg_364;
reg   [3:0] p_Result_13_reg_369;
wire   [3:0] tmp_fu_273_p1;
reg   [3:0] tmp_reg_374;
reg   [3:0] q_chunk_V_0_2_reg_379;
reg   [3:0] q_chunk_V_0_3_reg_384;
reg   [3:0] q_chunk_V_0_4_reg_389;
reg   [3:0] q_chunk_V_0_5_reg_394;
reg   [3:0] q_chunk_V_0_6_reg_399;
reg   [3:0] q_chunk_V_0_7_reg_404;
reg   [3:0] q_chunk_V_0_8_reg_409;
reg   [3:0] q_chunk_V_0_9_reg_414;
reg   [3:0] q_chunk_V_0_s_reg_419;
reg   [3:0] q_chunk_V_0_10_reg_424;
reg   [3:0] q_chunk_V_0_11_reg_429;
reg   [3:0] q_chunk_V_0_12_reg_434;
wire    grp_lut_div3_chunk_fu_86_ap_ready;
reg   [3:0] grp_lut_div3_chunk_fu_86_d_V;
reg   [1:0] grp_lut_div3_chunk_fu_86_r_in_V;
wire   [3:0] grp_lut_div3_chunk_fu_86_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_86_ap_return_1;
wire    grp_lut_div3_chunk_fu_93_ap_ready;
reg   [3:0] grp_lut_div3_chunk_fu_93_d_V;
wire   [3:0] grp_lut_div3_chunk_fu_93_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_93_ap_return_1;
wire    ap_CS_fsm_state8;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
end

lut_div3_chunk grp_lut_div3_chunk_fu_86(
    .ap_ready(grp_lut_div3_chunk_fu_86_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_86_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_86_r_in_V),
    .ap_return_0(grp_lut_div3_chunk_fu_86_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_86_ap_return_1)
);

lut_div3_chunk grp_lut_div3_chunk_fu_93(
    .ap_ready(grp_lut_div3_chunk_fu_93_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_93_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_86_ap_return_1),
    .ap_return_0(grp_lut_div3_chunk_fu_93_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_93_ap_return_1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_Result_10_reg_354 <= {{in_r[19:16]}};
        p_Result_11_reg_359 <= {{in_r[15:12]}};
        p_Result_12_reg_364 <= {{in_r[11:8]}};
        p_Result_13_reg_369 <= {{in_r[7:4]}};
        p_Result_2_reg_309 <= {{in_r[55:52]}};
        p_Result_3_reg_314 <= {{in_r[51:48]}};
        p_Result_4_reg_319 <= {{in_r[47:44]}};
        p_Result_5_reg_324 <= {{in_r[43:40]}};
        p_Result_6_reg_329 <= {{in_r[39:36]}};
        p_Result_7_reg_334 <= {{in_r[35:32]}};
        p_Result_8_reg_339 <= {{in_r[31:28]}};
        p_Result_9_reg_344 <= {{in_r[27:24]}};
        p_Result_s_4_reg_349 <= {{in_r[23:20]}};
        q_chunk_V_0_1_reg_304 <= grp_lut_div3_chunk_fu_93_ap_return_0;
        q_chunk_V_reg_299 <= grp_lut_div3_chunk_fu_86_ap_return_0;
        tmp_reg_374 <= tmp_fu_273_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        q_chunk_V_0_10_reg_424 <= grp_lut_div3_chunk_fu_93_ap_return_0;
        q_chunk_V_0_s_reg_419 <= grp_lut_div3_chunk_fu_86_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        q_chunk_V_0_11_reg_429 <= grp_lut_div3_chunk_fu_86_ap_return_0;
        q_chunk_V_0_12_reg_434 <= grp_lut_div3_chunk_fu_93_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        q_chunk_V_0_2_reg_379 <= grp_lut_div3_chunk_fu_86_ap_return_0;
        q_chunk_V_0_3_reg_384 <= grp_lut_div3_chunk_fu_93_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        q_chunk_V_0_4_reg_389 <= grp_lut_div3_chunk_fu_86_ap_return_0;
        q_chunk_V_0_5_reg_394 <= grp_lut_div3_chunk_fu_93_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        q_chunk_V_0_6_reg_399 <= grp_lut_div3_chunk_fu_86_ap_return_0;
        q_chunk_V_0_7_reg_404 <= grp_lut_div3_chunk_fu_93_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        q_chunk_V_0_8_reg_409 <= grp_lut_div3_chunk_fu_86_ap_return_0;
        q_chunk_V_0_9_reg_414 <= grp_lut_div3_chunk_fu_93_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        reg_116 <= grp_lut_div3_chunk_fu_93_ap_return_1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
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
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_lut_div3_chunk_fu_86_d_V = p_Result_13_reg_369;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_lut_div3_chunk_fu_86_d_V = p_Result_11_reg_359;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_lut_div3_chunk_fu_86_d_V = p_Result_s_4_reg_349;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_lut_div3_chunk_fu_86_d_V = p_Result_8_reg_339;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_lut_div3_chunk_fu_86_d_V = p_Result_6_reg_329;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_lut_div3_chunk_fu_86_d_V = p_Result_4_reg_319;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div3_chunk_fu_86_d_V = p_Result_2_reg_309;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div3_chunk_fu_86_d_V = {{in_r[63:60]}};
    end else begin
        grp_lut_div3_chunk_fu_86_d_V = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8))) begin
        grp_lut_div3_chunk_fu_86_r_in_V = reg_116;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div3_chunk_fu_86_r_in_V = 2'd0;
    end else begin
        grp_lut_div3_chunk_fu_86_r_in_V = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_lut_div3_chunk_fu_93_d_V = tmp_reg_374;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_lut_div3_chunk_fu_93_d_V = p_Result_12_reg_364;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_lut_div3_chunk_fu_93_d_V = p_Result_10_reg_354;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_lut_div3_chunk_fu_93_d_V = p_Result_9_reg_344;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_lut_div3_chunk_fu_93_d_V = p_Result_7_reg_334;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_lut_div3_chunk_fu_93_d_V = p_Result_5_reg_324;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div3_chunk_fu_93_d_V = p_Result_3_reg_314;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div3_chunk_fu_93_d_V = {{in_r[59:56]}};
    end else begin
        grp_lut_div3_chunk_fu_93_d_V = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
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
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_return = {{{{{{{{{{{{{{{{q_chunk_V_reg_299}, {q_chunk_V_0_1_reg_304}}, {q_chunk_V_0_2_reg_379}}, {q_chunk_V_0_3_reg_384}}, {q_chunk_V_0_4_reg_389}}, {q_chunk_V_0_5_reg_394}}, {q_chunk_V_0_6_reg_399}}, {q_chunk_V_0_7_reg_404}}, {q_chunk_V_0_8_reg_409}}, {q_chunk_V_0_9_reg_414}}, {q_chunk_V_0_s_reg_419}}, {q_chunk_V_0_10_reg_424}}, {q_chunk_V_0_11_reg_429}}, {q_chunk_V_0_12_reg_434}}, {grp_lut_div3_chunk_fu_86_ap_return_0}}, {grp_lut_div3_chunk_fu_93_ap_return_0}};

assign tmp_fu_273_p1 = in_r[3:0];

endmodule //long_div3
