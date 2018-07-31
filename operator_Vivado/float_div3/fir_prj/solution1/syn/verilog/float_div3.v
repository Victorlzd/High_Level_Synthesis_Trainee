// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="float_div3,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.063000,HLS_SYN_LAT=4,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=92,HLS_SYN_LUT=3853,HLS_VERSION=2018_2}" *)

module float_div3 (
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
input  [31:0] in_r;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [3:0] reg_151;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
reg   [0:0] p_Repl2_2_reg_575;
wire   [22:0] new_mant_V_fu_178_p1;
wire   [0:0] tmp_5_fu_210_p2;
reg   [0:0] tmp_5_reg_585;
wire   [7:0] p_Repl2_1_fu_242_p3;
reg   [7:0] p_Repl2_1_reg_589;
reg   [1:0] p_Result_16_i_i_reg_594;
reg   [1:0] p_Result_16_1_i_i_reg_599;
reg   [1:0] p_Result_16_2_i_i_reg_604;
reg   [1:0] p_Result_16_3_i_i_reg_609;
reg   [1:0] p_Result_16_4_i_i_reg_614;
reg   [1:0] p_Result_16_5_i_i_reg_619;
reg   [1:0] p_Result_16_6_i_i_reg_624;
reg   [1:0] p_Result_16_7_i_i_reg_629;
reg   [1:0] p_Result_16_8_i_i_reg_634;
reg   [1:0] p_Result_16_9_i_i_reg_639;
reg   [1:0] p_Result_16_i_i_10_reg_644;
reg   [1:0] p_Result_16_10_i_i_reg_649;
reg   [1:0] p_Result_16_11_i_i_reg_654;
wire   [1:0] tmp_15_fu_536_p1;
reg   [1:0] tmp_15_reg_659;
reg   [1:0] q_chunk_V_0_3_i_i_reg_664;
wire   [0:0] tmp_16_fu_540_p1;
reg   [0:0] tmp_16_reg_669;
reg   [1:0] q_chunk_V_0_4_i_i_reg_674;
reg   [1:0] q_chunk_V_0_5_i_i_reg_679;
reg   [1:0] q_chunk_V_0_6_i_i_reg_684;
reg   [1:0] q_chunk_V_0_7_i_i_reg_689;
reg   [1:0] q_chunk_V_0_8_i_i_reg_694;
reg   [1:0] q_chunk_V_0_9_i_i_reg_699;
reg   [1:0] q_chunk_V_0_i_i_reg_704;
reg   [1:0] q_chunk_V_0_10_i_i_reg_709;
wire    grp_lut_div9_chunk_fu_121_ap_ready;
reg   [1:0] grp_lut_div9_chunk_fu_121_d_V;
reg   [3:0] grp_lut_div9_chunk_fu_121_r_in_V;
wire   [1:0] grp_lut_div9_chunk_fu_121_ap_return_0;
wire   [3:0] grp_lut_div9_chunk_fu_121_ap_return_1;
wire    grp_lut_div9_chunk_fu_128_ap_ready;
reg   [1:0] grp_lut_div9_chunk_fu_128_d_V;
wire   [1:0] grp_lut_div9_chunk_fu_128_ap_return_0;
wire   [3:0] grp_lut_div9_chunk_fu_128_ap_return_1;
wire   [22:0] new_mant_V_1_fu_544_p13;
reg   [22:0] ap_phi_mux_p_Repl2_s_phi_fu_115_p4;
reg   [22:0] p_Repl2_s_reg_112;
wire    ap_CS_fsm_state8;
wire   [31:0] p_Val2_s_fu_156_p1;
wire   [2:0] tmp_fu_186_p4;
wire   [0:0] icmp_fu_196_p2;
wire   [7:0] new_exp_V_fu_168_p4;
wire   [7:0] shift_V_cast_cast_fu_202_p3;
wire   [0:0] tmp_6_fu_216_p2;
wire   [0:0] tmp_1_fu_236_p2;
wire   [7:0] p_new_exp_V_1_fu_228_p3;
wire   [7:0] new_exp_V_1_fu_222_p2;
wire   [6:0] tmp_13_fu_262_p4;
wire   [0:0] tmp_8_fu_250_p2;
wire   [0:0] tmp_9_fu_256_p2;
wire   [0:0] sel_tmp3_demorgan_fu_290_p2;
wire   [0:0] icmp4_fu_272_p2;
wire   [0:0] sel_tmp3_fu_296_p2;
wire   [0:0] sel_tmp4_fu_302_p2;
wire   [7:0] shift_V_fu_278_p2;
wire   [7:0] shift_V_1_fu_284_p2;
wire   [7:0] shift_V_2_fu_308_p3;
wire   [0:0] sel_tmp7_fu_324_p2;
wire   [0:0] sel_tmp8_fu_330_p2;
wire   [7:0] shift_V_3_fu_316_p3;
wire   [23:0] xf_V_3_cast_fu_182_p1;
wire   [23:0] tmp_7_fu_344_p3;
wire   [23:0] xf_V_1_fu_352_p3;
wire   [7:0] shift_V_4_fu_336_p3;
wire   [23:0] tmp_3_cast_fu_368_p1;
wire   [31:0] tmp_2_fu_360_p1;
wire   [31:0] tmp_3_fu_364_p1;
wire   [23:0] tmp_4_fu_372_p2;
wire   [31:0] tmp_s_fu_378_p2;
wire   [27:0] tmp_10_fu_384_p1;
wire   [27:0] tmp_14_fu_388_p1;
wire   [27:0] xf_V_2_fu_392_p3;
wire   [27:0] xf_V_fu_400_p2;
wire   [31:0] p_Result_s_fu_563_p4;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
end

lut_div9_chunk grp_lut_div9_chunk_fu_121(
    .ap_ready(grp_lut_div9_chunk_fu_121_ap_ready),
    .d_V(grp_lut_div9_chunk_fu_121_d_V),
    .r_in_V(grp_lut_div9_chunk_fu_121_r_in_V),
    .ap_return_0(grp_lut_div9_chunk_fu_121_ap_return_0),
    .ap_return_1(grp_lut_div9_chunk_fu_121_ap_return_1)
);

lut_div9_chunk grp_lut_div9_chunk_fu_128(
    .ap_ready(grp_lut_div9_chunk_fu_128_ap_ready),
    .d_V(grp_lut_div9_chunk_fu_128_d_V),
    .r_in_V(grp_lut_div9_chunk_fu_121_ap_return_1),
    .ap_return_0(grp_lut_div9_chunk_fu_128_ap_return_0),
    .ap_return_1(grp_lut_div9_chunk_fu_128_ap_return_1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_5_fu_210_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_Repl2_s_reg_112 <= new_mant_V_fu_178_p1;
    end else if (((tmp_5_reg_585 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        p_Repl2_s_reg_112 <= new_mant_V_1_fu_544_p13;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_Repl2_1_reg_589 <= p_Repl2_1_fu_242_p3;
        p_Repl2_2_reg_575 <= p_Val2_s_fu_156_p1[32'd31];
        tmp_5_reg_585 <= tmp_5_fu_210_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_5_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_Result_16_10_i_i_reg_649 <= {{xf_V_fu_400_p2[5:4]}};
        p_Result_16_11_i_i_reg_654 <= {{xf_V_fu_400_p2[3:2]}};
        p_Result_16_1_i_i_reg_599 <= {{xf_V_fu_400_p2[25:24]}};
        p_Result_16_2_i_i_reg_604 <= {{xf_V_fu_400_p2[23:22]}};
        p_Result_16_3_i_i_reg_609 <= {{xf_V_fu_400_p2[21:20]}};
        p_Result_16_4_i_i_reg_614 <= {{xf_V_fu_400_p2[19:18]}};
        p_Result_16_5_i_i_reg_619 <= {{xf_V_fu_400_p2[17:16]}};
        p_Result_16_6_i_i_reg_624 <= {{xf_V_fu_400_p2[15:14]}};
        p_Result_16_7_i_i_reg_629 <= {{xf_V_fu_400_p2[13:12]}};
        p_Result_16_8_i_i_reg_634 <= {{xf_V_fu_400_p2[11:10]}};
        p_Result_16_9_i_i_reg_639 <= {{xf_V_fu_400_p2[9:8]}};
        p_Result_16_i_i_10_reg_644 <= {{xf_V_fu_400_p2[7:6]}};
        p_Result_16_i_i_reg_594 <= {{xf_V_fu_400_p2[27:26]}};
        tmp_15_reg_659 <= tmp_15_fu_536_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        q_chunk_V_0_10_i_i_reg_709 <= grp_lut_div9_chunk_fu_128_ap_return_0;
        q_chunk_V_0_i_i_reg_704 <= grp_lut_div9_chunk_fu_121_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        q_chunk_V_0_3_i_i_reg_664 <= grp_lut_div9_chunk_fu_128_ap_return_0;
        tmp_16_reg_669 <= tmp_16_fu_540_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        q_chunk_V_0_4_i_i_reg_674 <= grp_lut_div9_chunk_fu_121_ap_return_0;
        q_chunk_V_0_5_i_i_reg_679 <= grp_lut_div9_chunk_fu_128_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        q_chunk_V_0_6_i_i_reg_684 <= grp_lut_div9_chunk_fu_121_ap_return_0;
        q_chunk_V_0_7_i_i_reg_689 <= grp_lut_div9_chunk_fu_128_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        q_chunk_V_0_8_i_i_reg_694 <= grp_lut_div9_chunk_fu_121_ap_return_0;
        q_chunk_V_0_9_i_i_reg_699 <= grp_lut_div9_chunk_fu_128_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        reg_151 <= grp_lut_div9_chunk_fu_128_ap_return_1;
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
    if (((tmp_5_reg_585 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        ap_phi_mux_p_Repl2_s_phi_fu_115_p4 = new_mant_V_1_fu_544_p13;
    end else begin
        ap_phi_mux_p_Repl2_s_phi_fu_115_p4 = p_Repl2_s_reg_112;
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
    if (((tmp_5_reg_585 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        grp_lut_div9_chunk_fu_121_d_V = p_Result_16_11_i_i_reg_654;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_lut_div9_chunk_fu_121_d_V = p_Result_16_i_i_10_reg_644;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_lut_div9_chunk_fu_121_d_V = p_Result_16_8_i_i_reg_634;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_lut_div9_chunk_fu_121_d_V = p_Result_16_6_i_i_reg_624;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_lut_div9_chunk_fu_121_d_V = p_Result_16_4_i_i_reg_614;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_lut_div9_chunk_fu_121_d_V = p_Result_16_2_i_i_reg_604;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div9_chunk_fu_121_d_V = p_Result_16_i_i_reg_594;
    end else begin
        grp_lut_div9_chunk_fu_121_d_V = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | ((tmp_5_reg_585 == 1'd0) & (1'b1 == ap_CS_fsm_state8)))) begin
        grp_lut_div9_chunk_fu_121_r_in_V = reg_151;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div9_chunk_fu_121_r_in_V = 4'd0;
    end else begin
        grp_lut_div9_chunk_fu_121_r_in_V = 'bx;
    end
end

always @ (*) begin
    if (((tmp_5_reg_585 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        grp_lut_div9_chunk_fu_128_d_V = tmp_15_reg_659;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_lut_div9_chunk_fu_128_d_V = p_Result_16_10_i_i_reg_649;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_lut_div9_chunk_fu_128_d_V = p_Result_16_9_i_i_reg_639;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_lut_div9_chunk_fu_128_d_V = p_Result_16_7_i_i_reg_629;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_lut_div9_chunk_fu_128_d_V = p_Result_16_5_i_i_reg_619;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_lut_div9_chunk_fu_128_d_V = p_Result_16_3_i_i_reg_609;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div9_chunk_fu_128_d_V = p_Result_16_1_i_i_reg_599;
    end else begin
        grp_lut_div9_chunk_fu_128_d_V = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((tmp_5_fu_210_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else if (((tmp_5_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
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

assign ap_return = p_Result_s_fu_563_p4;

assign icmp4_fu_272_p2 = ((tmp_13_fu_262_p4 == 7'd0) ? 1'b1 : 1'b0);

assign icmp_fu_196_p2 = ((tmp_fu_186_p4 == 3'd0) ? 1'b1 : 1'b0);

assign new_exp_V_1_fu_222_p2 = (new_exp_V_fu_168_p4 - shift_V_cast_cast_fu_202_p3);

assign new_exp_V_fu_168_p4 = {{p_Val2_s_fu_156_p1[30:23]}};

assign new_mant_V_1_fu_544_p13 = {{{{{{{{{{{{tmp_16_reg_669}, {q_chunk_V_0_3_i_i_reg_664}}, {q_chunk_V_0_4_i_i_reg_674}}, {q_chunk_V_0_5_i_i_reg_679}}, {q_chunk_V_0_6_i_i_reg_684}}, {q_chunk_V_0_7_i_i_reg_689}}, {q_chunk_V_0_8_i_i_reg_694}}, {q_chunk_V_0_9_i_i_reg_699}}, {q_chunk_V_0_i_i_reg_704}}, {q_chunk_V_0_10_i_i_reg_709}}, {grp_lut_div9_chunk_fu_121_ap_return_0}}, {grp_lut_div9_chunk_fu_128_ap_return_0}};

assign new_mant_V_fu_178_p1 = p_Val2_s_fu_156_p1[22:0];

assign p_Repl2_1_fu_242_p3 = ((tmp_1_fu_236_p2[0:0] === 1'b1) ? p_new_exp_V_1_fu_228_p3 : new_exp_V_1_fu_222_p2);

assign p_Result_s_fu_563_p4 = {{{p_Repl2_2_reg_575}, {p_Repl2_1_reg_589}}, {ap_phi_mux_p_Repl2_s_phi_fu_115_p4}};

assign p_Val2_s_fu_156_p1 = in_r;

assign p_new_exp_V_1_fu_228_p3 = ((tmp_5_fu_210_p2[0:0] === 1'b1) ? 8'd255 : 8'd0);

assign sel_tmp3_demorgan_fu_290_p2 = (tmp_9_fu_256_p2 | tmp_8_fu_250_p2);

assign sel_tmp3_fu_296_p2 = (sel_tmp3_demorgan_fu_290_p2 ^ 1'd1);

assign sel_tmp4_fu_302_p2 = (sel_tmp3_fu_296_p2 & icmp4_fu_272_p2);

assign sel_tmp7_fu_324_p2 = (tmp_8_fu_250_p2 ^ 1'd1);

assign sel_tmp8_fu_330_p2 = (tmp_9_fu_256_p2 & sel_tmp7_fu_324_p2);

assign shift_V_1_fu_284_p2 = ($signed(8'd255) + $signed(new_exp_V_fu_168_p4));

assign shift_V_2_fu_308_p3 = ((sel_tmp4_fu_302_p2[0:0] === 1'b1) ? shift_V_fu_278_p2 : shift_V_1_fu_284_p2);

assign shift_V_3_fu_316_p3 = ((tmp_8_fu_250_p2[0:0] === 1'b1) ? 8'd0 : shift_V_2_fu_308_p3);

assign shift_V_4_fu_336_p3 = ((sel_tmp8_fu_330_p2[0:0] === 1'b1) ? shift_V_cast_cast_fu_202_p3 : shift_V_3_fu_316_p3);

assign shift_V_cast_cast_fu_202_p3 = ((icmp_fu_196_p2[0:0] === 1'b1) ? 8'd4 : 8'd3);

assign shift_V_fu_278_p2 = (8'd1 - new_exp_V_fu_168_p4);

assign tmp_10_fu_384_p1 = tmp_4_fu_372_p2;

assign tmp_13_fu_262_p4 = {{p_Val2_s_fu_156_p1[30:24]}};

assign tmp_14_fu_388_p1 = tmp_s_fu_378_p2[27:0];

assign tmp_15_fu_536_p1 = xf_V_fu_400_p2[1:0];

assign tmp_16_fu_540_p1 = grp_lut_div9_chunk_fu_121_ap_return_0[0:0];

assign tmp_1_fu_236_p2 = (tmp_6_fu_216_p2 | tmp_5_fu_210_p2);

assign tmp_2_fu_360_p1 = xf_V_1_fu_352_p3;

assign tmp_3_cast_fu_368_p1 = shift_V_4_fu_336_p3;

assign tmp_3_fu_364_p1 = shift_V_4_fu_336_p3;

assign tmp_4_fu_372_p2 = xf_V_1_fu_352_p3 >> tmp_3_cast_fu_368_p1;

assign tmp_5_fu_210_p2 = ((new_exp_V_fu_168_p4 == 8'd255) ? 1'b1 : 1'b0);

assign tmp_6_fu_216_p2 = ((shift_V_cast_cast_fu_202_p3 > new_exp_V_fu_168_p4) ? 1'b1 : 1'b0);

assign tmp_7_fu_344_p3 = {{1'd1}, {new_mant_V_fu_178_p1}};

assign tmp_8_fu_250_p2 = ((new_exp_V_fu_168_p4 == 8'd0) ? 1'b1 : 1'b0);

assign tmp_9_fu_256_p2 = ((shift_V_cast_cast_fu_202_p3 < new_exp_V_fu_168_p4) ? 1'b1 : 1'b0);

assign tmp_fu_186_p4 = {{p_Val2_s_fu_156_p1[22:20]}};

assign tmp_s_fu_378_p2 = tmp_2_fu_360_p1 << tmp_3_fu_364_p1;

assign xf_V_1_fu_352_p3 = ((tmp_8_fu_250_p2[0:0] === 1'b1) ? xf_V_3_cast_fu_182_p1 : tmp_7_fu_344_p3);

assign xf_V_2_fu_392_p3 = ((icmp4_fu_272_p2[0:0] === 1'b1) ? tmp_10_fu_384_p1 : tmp_14_fu_388_p1);

assign xf_V_3_cast_fu_182_p1 = new_mant_V_fu_178_p1;

assign xf_V_fu_400_p2 = (28'd4 + xf_V_2_fu_392_p3);

endmodule //float_div3
