// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="operator_float_div5,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=2.500000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=2.132000,HLS_SYN_LAT=35,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=597,HLS_SYN_LUT=783,HLS_VERSION=2018_2}" *)

module operator_float_div5 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_r,
        ap_return
);

parameter    ap_ST_fsm_state1 = 27'd1;
parameter    ap_ST_fsm_state2 = 27'd2;
parameter    ap_ST_fsm_state3 = 27'd4;
parameter    ap_ST_fsm_state4 = 27'd8;
parameter    ap_ST_fsm_state5 = 27'd16;
parameter    ap_ST_fsm_state6 = 27'd32;
parameter    ap_ST_fsm_state7 = 27'd64;
parameter    ap_ST_fsm_state8 = 27'd128;
parameter    ap_ST_fsm_state9 = 27'd256;
parameter    ap_ST_fsm_state10 = 27'd512;
parameter    ap_ST_fsm_state11 = 27'd1024;
parameter    ap_ST_fsm_state12 = 27'd2048;
parameter    ap_ST_fsm_state13 = 27'd4096;
parameter    ap_ST_fsm_state14 = 27'd8192;
parameter    ap_ST_fsm_state15 = 27'd16384;
parameter    ap_ST_fsm_state16 = 27'd32768;
parameter    ap_ST_fsm_state17 = 27'd65536;
parameter    ap_ST_fsm_state18 = 27'd131072;
parameter    ap_ST_fsm_state19 = 27'd262144;
parameter    ap_ST_fsm_state20 = 27'd524288;
parameter    ap_ST_fsm_state21 = 27'd1048576;
parameter    ap_ST_fsm_state22 = 27'd2097152;
parameter    ap_ST_fsm_state23 = 27'd4194304;
parameter    ap_ST_fsm_state24 = 27'd8388608;
parameter    ap_ST_fsm_state25 = 27'd16777216;
parameter    ap_ST_fsm_state26 = 27'd33554432;
parameter    ap_ST_fsm_state27 = 27'd67108864;

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

(* fsm_encoding = "none" *) reg   [26:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [2:0] reg_129;
wire    ap_CS_fsm_state11;
wire    grp_lut_div5_chunk_fu_106_ap_idle;
wire    grp_lut_div5_chunk_fu_106_ap_ready;
wire    grp_lut_div5_chunk_fu_106_ap_done;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state17;
wire    ap_CS_fsm_state19;
wire    ap_CS_fsm_state21;
wire    ap_CS_fsm_state23;
wire    ap_CS_fsm_state25;
reg   [0:0] p_Repl2_2_reg_508;
reg   [7:0] new_exp_V_reg_513;
wire   [22:0] new_mant_V_1_fu_156_p1;
reg   [22:0] new_mant_V_1_reg_524;
wire   [7:0] shift_V_cast_cast_fu_176_p3;
reg   [7:0] shift_V_cast_cast_reg_531;
wire   [0:0] icmp4_fu_194_p2;
reg   [0:0] icmp4_reg_539;
wire   [0:0] tmp_3_fu_200_p2;
reg   [0:0] tmp_3_reg_545;
wire    ap_CS_fsm_state2;
wire   [0:0] tmp_4_fu_205_p2;
reg   [0:0] tmp_4_reg_551;
wire   [7:0] shift_V_3_fu_244_p3;
reg   [7:0] shift_V_3_reg_556;
wire   [7:0] shift_V_4_fu_270_p3;
reg   [7:0] shift_V_4_reg_561;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_5_fu_276_p2;
reg   [0:0] tmp_5_reg_567;
wire   [7:0] p_Repl2_1_fu_295_p3;
reg   [7:0] p_Repl2_1_reg_572;
wire    ap_CS_fsm_state4;
wire   [22:0] grp_fu_312_p2;
reg   [22:0] tmp_2_reg_592;
wire    ap_CS_fsm_state7;
wire   [26:0] tmp_12_fu_323_p1;
reg   [26:0] tmp_12_reg_597;
wire   [26:0] xf_V_fu_330_p3;
reg   [26:0] xf_V_reg_602;
wire    ap_CS_fsm_state8;
reg   [2:0] d_chunk_V_reg_608;
wire    ap_CS_fsm_state9;
reg   [2:0] d_chunk_V_1_reg_613;
reg   [2:0] d_chunk_V_2_reg_618;
reg   [2:0] d_chunk_V_3_reg_623;
reg   [2:0] d_chunk_V_4_reg_628;
reg   [2:0] d_chunk_V_5_reg_633;
reg   [2:0] d_chunk_V_6_reg_638;
reg   [2:0] d_chunk_V_7_reg_643;
wire   [2:0] d_chunk_V_8_fu_437_p1;
reg   [2:0] d_chunk_V_8_reg_648;
wire   [2:0] grp_lut_div5_chunk_fu_106_ap_return_0;
wire   [2:0] grp_lut_div5_chunk_fu_106_ap_return_1;
reg   [2:0] call_ret2_i_i_reg_653_0;
reg   [2:0] call_ret3_i_i_reg_658_0;
reg   [2:0] call_ret4_i_i_reg_663_0;
reg   [2:0] call_ret5_i_i_reg_668_0;
reg   [2:0] call_ret6_i_i_reg_673_0;
reg   [2:0] call_ret7_i_i_reg_678_0;
reg   [2:0] call_ret8_i_i_reg_683_0;
wire    grp_lut_div5_chunk_fu_106_ap_start;
reg   [2:0] grp_lut_div5_chunk_fu_106_d_V;
reg   [2:0] grp_lut_div5_chunk_fu_106_r_in_V;
reg    grp_lut_div5_chunk_fu_106_ap_start_reg;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state20;
wire    ap_CS_fsm_state22;
wire    ap_CS_fsm_state24;
wire    ap_CS_fsm_state26;
wire    ap_CS_fsm_state27;
wire   [31:0] p_Val2_s_fu_134_p1;
wire   [1:0] tmp_fu_160_p4;
wire   [0:0] icmp_fu_170_p2;
wire   [6:0] tmp_8_fu_184_p4;
wire   [0:0] sel_tmp2_demorgan_fu_219_p2;
wire   [0:0] sel_tmp2_fu_225_p2;
wire   [0:0] sel_tmp3_fu_231_p2;
wire   [7:0] shift_V_fu_209_p2;
wire   [7:0] shift_V_1_fu_214_p2;
wire   [7:0] shift_V_2_fu_236_p3;
wire   [0:0] sel_tmp6_fu_260_p2;
wire   [0:0] sel_tmp7_fu_265_p2;
wire   [0:0] tmp_1_fu_252_p2;
wire   [0:0] tmp_10_fu_289_p2;
wire   [7:0] p_s_fu_281_p3;
wire   [7:0] new_exp_V_1_fu_256_p2;
wire   [22:0] grp_fu_312_p1;
wire   [31:0] grp_fu_317_p0;
wire   [31:0] grp_fu_317_p1;
wire   [31:0] grp_fu_317_p2;
wire   [26:0] tmp_6_fu_327_p1;
reg   [26:0] p_Result_s_fu_336_p4;
wire   [26:0] xf_V_1_fu_345_p3;
wire   [26:0] xf_V_4_fu_351_p2;
wire   [1:0] tmp_15_fu_466_p1;
wire   [22:0] new_mant_V_fu_470_p9;
wire   [22:0] p_Repl2_s_fu_490_p3;
wire   [31:0] p_Result_1_fu_496_p4;
reg   [26:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 27'd1;
#0 grp_lut_div5_chunk_fu_106_ap_start_reg = 1'b0;
end

lut_div5_chunk grp_lut_div5_chunk_fu_106(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_lut_div5_chunk_fu_106_ap_start),
    .ap_done(grp_lut_div5_chunk_fu_106_ap_done),
    .ap_idle(grp_lut_div5_chunk_fu_106_ap_idle),
    .ap_ready(grp_lut_div5_chunk_fu_106_ap_ready),
    .d_V(grp_lut_div5_chunk_fu_106_d_V),
    .r_in_V(grp_lut_div5_chunk_fu_106_r_in_V),
    .ap_return_0(grp_lut_div5_chunk_fu_106_ap_return_0),
    .ap_return_1(grp_lut_div5_chunk_fu_106_ap_return_1)
);

operator_float_dibkb #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .OP( 1 ),
    .din0_WIDTH( 23 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 23 ))
operator_float_dibkb_U9(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(new_mant_V_1_reg_524),
    .din1(grp_fu_312_p1),
    .ce(1'b1),
    .dout(grp_fu_312_p2)
);

operator_float_dicud #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .OP( 0 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 32 ))
operator_float_dicud_U10(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_317_p0),
    .din1(grp_fu_317_p1),
    .ce(1'b1),
    .dout(grp_fu_317_p2)
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
        grp_lut_div5_chunk_fu_106_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state26) | (1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state10))) begin
            grp_lut_div5_chunk_fu_106_ap_start_reg <= 1'b1;
        end else if ((grp_lut_div5_chunk_fu_106_ap_ready == 1'b1)) begin
            grp_lut_div5_chunk_fu_106_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
        call_ret2_i_i_reg_653_0 <= grp_lut_div5_chunk_fu_106_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state15))) begin
        call_ret3_i_i_reg_658_0 <= grp_lut_div5_chunk_fu_106_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state17))) begin
        call_ret4_i_i_reg_663_0 <= grp_lut_div5_chunk_fu_106_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state19))) begin
        call_ret5_i_i_reg_668_0 <= grp_lut_div5_chunk_fu_106_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state21))) begin
        call_ret6_i_i_reg_673_0 <= grp_lut_div5_chunk_fu_106_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state23))) begin
        call_ret7_i_i_reg_678_0 <= grp_lut_div5_chunk_fu_106_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state25))) begin
        call_ret8_i_i_reg_683_0 <= grp_lut_div5_chunk_fu_106_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        d_chunk_V_1_reg_613 <= {{xf_V_4_fu_351_p2[23:21]}};
        d_chunk_V_2_reg_618 <= {{xf_V_4_fu_351_p2[20:18]}};
        d_chunk_V_3_reg_623 <= {{xf_V_4_fu_351_p2[17:15]}};
        d_chunk_V_4_reg_628 <= {{xf_V_4_fu_351_p2[14:12]}};
        d_chunk_V_5_reg_633 <= {{xf_V_4_fu_351_p2[11:9]}};
        d_chunk_V_6_reg_638 <= {{xf_V_4_fu_351_p2[8:6]}};
        d_chunk_V_7_reg_643 <= {{xf_V_4_fu_351_p2[5:3]}};
        d_chunk_V_8_reg_648 <= d_chunk_V_8_fu_437_p1;
        d_chunk_V_reg_608 <= {{xf_V_4_fu_351_p2[26:24]}};
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        icmp4_reg_539 <= icmp4_fu_194_p2;
        new_exp_V_reg_513 <= {{p_Val2_s_fu_134_p1[30:23]}};
        new_mant_V_1_reg_524 <= new_mant_V_1_fu_156_p1;
        p_Repl2_2_reg_508 <= p_Val2_s_fu_134_p1[32'd31];
        shift_V_cast_cast_reg_531[0] <= shift_V_cast_cast_fu_176_p3[0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        p_Repl2_1_reg_572 <= p_Repl2_1_fu_295_p3;
        shift_V_4_reg_561 <= shift_V_4_fu_270_p3;
        tmp_5_reg_567 <= tmp_5_fu_276_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state21)) | ((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state19)) | ((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state17)) | ((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state13)) | ((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state25)) | ((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state23)) | ((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state11)))) begin
        reg_129 <= grp_lut_div5_chunk_fu_106_ap_return_1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        shift_V_3_reg_556 <= shift_V_3_fu_244_p3;
        tmp_3_reg_545 <= tmp_3_fu_200_p2;
        tmp_4_reg_551 <= tmp_4_fu_205_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp4_reg_539 == 1'd0))) begin
        tmp_12_reg_597 <= tmp_12_fu_323_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp4_reg_539 == 1'd1))) begin
        tmp_2_reg_592 <= grp_fu_312_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        xf_V_reg_602 <= xf_V_fu_330_p3;
    end
end

always @ (*) begin
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state27))) begin
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
    if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state27))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state27)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_8_reg_648;
    end else if ((1'b1 == ap_CS_fsm_state25)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_7_reg_643;
    end else if ((1'b1 == ap_CS_fsm_state23)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_6_reg_638;
    end else if ((1'b1 == ap_CS_fsm_state21)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_5_reg_633;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_4_reg_628;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_3_reg_623;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_2_reg_618;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_1_reg_613;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_lut_div5_chunk_fu_106_d_V = d_chunk_V_reg_608;
    end else begin
        grp_lut_div5_chunk_fu_106_d_V = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state27) | (1'b1 == ap_CS_fsm_state25) | (1'b1 == ap_CS_fsm_state23))) begin
        grp_lut_div5_chunk_fu_106_r_in_V = reg_129;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_lut_div5_chunk_fu_106_r_in_V = 3'd0;
    end else begin
        grp_lut_div5_chunk_fu_106_r_in_V = 'bx;
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
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state11))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state15))) begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state17))) begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state19))) begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state21))) begin
                ap_NS_fsm = ap_ST_fsm_state22;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state21;
            end
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state23))) begin
                ap_NS_fsm = ap_ST_fsm_state24;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state23;
            end
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state25))) begin
                ap_NS_fsm = ap_ST_fsm_state26;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state25;
            end
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            if (((grp_lut_div5_chunk_fu_106_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state27))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state27;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

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

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_return = p_Result_1_fu_496_p4;

assign d_chunk_V_8_fu_437_p1 = xf_V_4_fu_351_p2[2:0];

assign grp_fu_312_p1 = shift_V_4_reg_561;

assign grp_fu_317_p0 = new_mant_V_1_reg_524;

assign grp_fu_317_p1 = shift_V_4_reg_561;

assign grp_lut_div5_chunk_fu_106_ap_start = grp_lut_div5_chunk_fu_106_ap_start_reg;

assign icmp4_fu_194_p2 = ((tmp_8_fu_184_p4 == 7'd0) ? 1'b1 : 1'b0);

assign icmp_fu_170_p2 = ((tmp_fu_160_p4 == 2'd0) ? 1'b1 : 1'b0);

assign new_exp_V_1_fu_256_p2 = (new_exp_V_reg_513 - shift_V_cast_cast_reg_531);

assign new_mant_V_1_fu_156_p1 = p_Val2_s_fu_134_p1[22:0];

assign new_mant_V_fu_470_p9 = {{{{{{{{tmp_15_fu_466_p1}, {call_ret3_i_i_reg_658_0}}, {call_ret4_i_i_reg_663_0}}, {call_ret5_i_i_reg_668_0}}, {call_ret6_i_i_reg_673_0}}, {call_ret7_i_i_reg_678_0}}, {call_ret8_i_i_reg_683_0}}, {grp_lut_div5_chunk_fu_106_ap_return_0}};

assign p_Repl2_1_fu_295_p3 = ((tmp_10_fu_289_p2[0:0] === 1'b1) ? p_s_fu_281_p3 : new_exp_V_1_fu_256_p2);

assign p_Repl2_s_fu_490_p3 = ((tmp_5_reg_567[0:0] === 1'b1) ? new_mant_V_1_reg_524 : new_mant_V_fu_470_p9);

assign p_Result_1_fu_496_p4 = {{{p_Repl2_2_reg_508}, {p_Repl2_1_reg_572}}, {p_Repl2_s_fu_490_p3}};

always @ (*) begin
    p_Result_s_fu_336_p4 = xf_V_reg_602;
    p_Result_s_fu_336_p4[32'd23] = |(1'd1);
end

assign p_Val2_s_fu_134_p1 = in_r;

assign p_s_fu_281_p3 = ((tmp_5_fu_276_p2[0:0] === 1'b1) ? 8'd255 : 8'd0);

assign sel_tmp2_demorgan_fu_219_p2 = (tmp_4_fu_205_p2 | tmp_3_fu_200_p2);

assign sel_tmp2_fu_225_p2 = (sel_tmp2_demorgan_fu_219_p2 ^ 1'd1);

assign sel_tmp3_fu_231_p2 = (sel_tmp2_fu_225_p2 & icmp4_reg_539);

assign sel_tmp6_fu_260_p2 = (tmp_3_reg_545 ^ 1'd1);

assign sel_tmp7_fu_265_p2 = (tmp_4_reg_551 & sel_tmp6_fu_260_p2);

assign shift_V_1_fu_214_p2 = ($signed(8'd255) + $signed(new_exp_V_reg_513));

assign shift_V_2_fu_236_p3 = ((sel_tmp3_fu_231_p2[0:0] === 1'b1) ? shift_V_fu_209_p2 : shift_V_1_fu_214_p2);

assign shift_V_3_fu_244_p3 = ((tmp_3_fu_200_p2[0:0] === 1'b1) ? 8'd0 : shift_V_2_fu_236_p3);

assign shift_V_4_fu_270_p3 = ((sel_tmp7_fu_265_p2[0:0] === 1'b1) ? shift_V_cast_cast_reg_531 : shift_V_3_reg_556);

assign shift_V_cast_cast_fu_176_p3 = ((icmp_fu_170_p2[0:0] === 1'b1) ? 8'd3 : 8'd2);

assign shift_V_fu_209_p2 = (8'd1 - new_exp_V_reg_513);

assign tmp_10_fu_289_p2 = (tmp_5_fu_276_p2 | tmp_1_fu_252_p2);

assign tmp_12_fu_323_p1 = grp_fu_317_p2[26:0];

assign tmp_15_fu_466_p1 = call_ret2_i_i_reg_653_0[1:0];

assign tmp_1_fu_252_p2 = ((shift_V_cast_cast_reg_531 > new_exp_V_reg_513) ? 1'b1 : 1'b0);

assign tmp_3_fu_200_p2 = ((new_exp_V_reg_513 == 8'd0) ? 1'b1 : 1'b0);

assign tmp_4_fu_205_p2 = ((shift_V_cast_cast_reg_531 < new_exp_V_reg_513) ? 1'b1 : 1'b0);

assign tmp_5_fu_276_p2 = ((new_exp_V_reg_513 == 8'd255) ? 1'b1 : 1'b0);

assign tmp_6_fu_327_p1 = tmp_2_reg_592;

assign tmp_8_fu_184_p4 = {{p_Val2_s_fu_134_p1[30:24]}};

assign tmp_fu_160_p4 = {{p_Val2_s_fu_134_p1[22:21]}};

assign xf_V_1_fu_345_p3 = ((tmp_3_reg_545[0:0] === 1'b1) ? xf_V_reg_602 : p_Result_s_fu_336_p4);

assign xf_V_4_fu_351_p2 = (27'd2 + xf_V_1_fu_345_p3);

assign xf_V_fu_330_p3 = ((icmp4_reg_539[0:0] === 1'b1) ? tmp_6_fu_327_p1 : tmp_12_reg_597);

always @ (posedge ap_clk) begin
    shift_V_cast_cast_reg_531[7:1] <= 7'b0000001;
end

endmodule //operator_float_div5
