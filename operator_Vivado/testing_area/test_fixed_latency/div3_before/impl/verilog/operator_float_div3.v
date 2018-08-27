// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="operator_float_div3,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=2.500000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=2.177600,HLS_SYN_LAT=16,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=691,HLS_SYN_LUT=755,HLS_VERSION=2018_2}" *)

module operator_float_div3 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_r,
        ap_return
);

parameter    ap_ST_fsm_state1 = 23'd1;
parameter    ap_ST_fsm_state2 = 23'd2;
parameter    ap_ST_fsm_state3 = 23'd4;
parameter    ap_ST_fsm_state4 = 23'd8;
parameter    ap_ST_fsm_state5 = 23'd16;
parameter    ap_ST_fsm_state6 = 23'd32;
parameter    ap_ST_fsm_state7 = 23'd64;
parameter    ap_ST_fsm_state8 = 23'd128;
parameter    ap_ST_fsm_state9 = 23'd256;
parameter    ap_ST_fsm_state10 = 23'd512;
parameter    ap_ST_fsm_state11 = 23'd1024;
parameter    ap_ST_fsm_state12 = 23'd2048;
parameter    ap_ST_fsm_state13 = 23'd4096;
parameter    ap_ST_fsm_state14 = 23'd8192;
parameter    ap_ST_fsm_state15 = 23'd16384;
parameter    ap_ST_fsm_state16 = 23'd32768;
parameter    ap_ST_fsm_state17 = 23'd65536;
parameter    ap_ST_fsm_state18 = 23'd131072;
parameter    ap_ST_fsm_state19 = 23'd262144;
parameter    ap_ST_fsm_state20 = 23'd524288;
parameter    ap_ST_fsm_state21 = 23'd1048576;
parameter    ap_ST_fsm_state22 = 23'd2097152;
parameter    ap_ST_fsm_state23 = 23'd4194304;

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

(* fsm_encoding = "none" *) reg   [22:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [1:0] reg_130;
wire    ap_CS_fsm_state10;
wire    grp_lut_div3_chunk_fu_103_ap_idle;
wire    grp_lut_div3_chunk_fu_103_ap_ready;
wire    grp_lut_div3_chunk_fu_103_ap_done;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state20;
wire   [31:0] p_Val2_s_fu_135_p1;
reg   [31:0] p_Val2_s_reg_445;
reg   [0:0] p_Repl2_2_reg_450;
wire   [7:0] new_exp_V_fu_147_p4;
reg   [7:0] new_exp_V_reg_455;
wire   [22:0] new_mant_V_fu_157_p1;
reg   [22:0] new_mant_V_reg_465;
wire   [7:0] shift_V_cast_cast_fu_169_p3;
reg   [7:0] shift_V_cast_cast_reg_472;
wire   [0:0] tmp_1_fu_177_p2;
reg   [0:0] tmp_1_reg_480;
wire   [23:0] xf_V_3_cast_fu_183_p1;
reg   [23:0] xf_V_3_cast_reg_486;
wire    ap_CS_fsm_state2;
wire   [7:0] p_Repl2_1_fu_206_p3;
reg   [7:0] p_Repl2_1_reg_491;
wire   [0:0] tmp_4_fu_214_p2;
reg   [0:0] tmp_4_reg_496;
wire   [0:0] tmp_5_fu_219_p2;
reg   [0:0] tmp_5_reg_502;
wire   [0:0] icmp_fu_232_p2;
reg   [0:0] icmp_reg_507;
wire   [7:0] shift_V_3_fu_274_p3;
reg   [7:0] shift_V_3_reg_512;
wire   [7:0] shift_V_4_fu_292_p3;
reg   [7:0] shift_V_4_reg_517;
wire    ap_CS_fsm_state3;
wire   [23:0] xf_V_1_fu_305_p3;
reg   [23:0] xf_V_1_reg_523;
wire    ap_CS_fsm_state4;
wire   [23:0] grp_fu_320_p2;
reg   [23:0] tmp_7_reg_544;
wire    ap_CS_fsm_state7;
wire   [31:0] grp_fu_325_p2;
reg   [31:0] tmp_6_reg_549;
reg   [1:0] p_Result_i_i_reg_554;
wire    ap_CS_fsm_state8;
reg   [3:0] p_Result_25_i_i_reg_559;
reg   [3:0] p_Result_25_1_i_i_reg_564;
reg   [3:0] p_Result_25_2_i_i_reg_569;
reg   [3:0] p_Result_25_3_i_i_reg_574;
reg   [3:0] p_Result_25_4_i_i_reg_579;
wire   [3:0] tmp_14_fu_410_p1;
reg   [3:0] tmp_14_reg_584;
wire   [3:0] d_chunk_V_fu_414_p1;
reg   [3:0] d_chunk_V_reg_589;
wire    ap_CS_fsm_state9;
wire   [2:0] tmp_15_fu_418_p1;
reg   [2:0] tmp_15_reg_594;
reg   [3:0] q_chunk_V_1_reg_599;
reg   [3:0] q_chunk_V_2_reg_604;
reg   [3:0] q_chunk_V_3_reg_609;
reg   [3:0] q_chunk_V_4_reg_614;
reg   [3:0] q_chunk_V_5_reg_619;
wire    ap_CS_fsm_state22;
wire    grp_lut_div3_chunk_fu_103_ap_start;
reg   [3:0] grp_lut_div3_chunk_fu_103_d_V;
reg   [1:0] grp_lut_div3_chunk_fu_103_r_in_V;
wire   [3:0] grp_lut_div3_chunk_fu_103_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_103_ap_return_1;
wire   [22:0] new_mant_V_1_fu_422_p7;
reg   [22:0] ap_phi_mux_p_Repl2_s_phi_fu_97_p4;
reg   [22:0] p_Repl2_s_reg_94;
wire    ap_CS_fsm_state23;
reg    grp_lut_div3_chunk_fu_103_ap_start_reg;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state17;
wire    ap_CS_fsm_state19;
wire    ap_CS_fsm_state21;
wire   [0:0] tmp_fu_161_p3;
wire   [0:0] tmp_2_fu_186_p2;
wire   [0:0] tmp_8_fu_201_p2;
wire   [7:0] p_new_exp_V_1_fu_194_p3;
wire   [7:0] new_exp_V_1_fu_190_p2;
wire   [6:0] tmp_12_fu_223_p4;
wire   [0:0] sel_tmp3_demorgan_fu_248_p2;
wire   [0:0] sel_tmp3_fu_254_p2;
wire   [0:0] sel_tmp4_fu_260_p2;
wire   [7:0] shift_V_fu_238_p2;
wire   [7:0] shift_V_1_fu_243_p2;
wire   [7:0] shift_V_2_fu_266_p3;
wire   [0:0] sel_tmp7_fu_282_p2;
wire   [0:0] sel_tmp8_fu_287_p2;
wire   [23:0] tmp_9_fu_298_p3;
wire   [23:0] grp_fu_320_p1;
wire   [31:0] grp_fu_325_p0;
wire   [31:0] grp_fu_325_p1;
wire   [25:0] tmp_10_fu_331_p1;
wire   [25:0] tmp_13_fu_334_p1;
wire   [25:0] xf_V_2_fu_337_p3;
wire   [25:0] xf_V_fu_344_p2;
wire   [31:0] p_Result_s_fu_433_p4;
reg   [22:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 23'd1;
#0 grp_lut_div3_chunk_fu_103_ap_start_reg = 1'b0;
end

lut_div3_chunk grp_lut_div3_chunk_fu_103(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_lut_div3_chunk_fu_103_ap_start),
    .ap_done(grp_lut_div3_chunk_fu_103_ap_done),
    .ap_idle(grp_lut_div3_chunk_fu_103_ap_idle),
    .ap_ready(grp_lut_div3_chunk_fu_103_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_103_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_103_r_in_V),
    .ap_return_0(grp_lut_div3_chunk_fu_103_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_103_ap_return_1)
);

operator_float_dibkb #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .OP( 1 ),
    .din0_WIDTH( 24 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 24 ))
operator_float_dibkb_U9(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(xf_V_1_reg_523),
    .din1(grp_fu_320_p1),
    .ce(1'b1),
    .dout(grp_fu_320_p2)
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
    .din0(grp_fu_325_p0),
    .din1(grp_fu_325_p1),
    .ce(1'b1),
    .dout(grp_fu_325_p2)
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
        grp_lut_div3_chunk_fu_103_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state9))) begin
            grp_lut_div3_chunk_fu_103_ap_start_reg <= 1'b1;
        end else if ((grp_lut_div3_chunk_fu_103_ap_ready == 1'b1)) begin
            grp_lut_div3_chunk_fu_103_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_1_reg_480 == 1'd1))) begin
        p_Repl2_s_reg_94 <= new_mant_V_reg_465;
    end else if (((1'b1 == ap_CS_fsm_state23) & (tmp_1_reg_480 == 1'd0))) begin
        p_Repl2_s_reg_94 <= new_mant_V_1_fu_422_p7;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        d_chunk_V_reg_589[1 : 0] <= d_chunk_V_fu_414_p1[1 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_1_reg_480 == 1'd0))) begin
        icmp_reg_507 <= icmp_fu_232_p2;
        shift_V_3_reg_512 <= shift_V_3_fu_274_p3;
        tmp_4_reg_496 <= tmp_4_fu_214_p2;
        tmp_5_reg_502 <= tmp_5_fu_219_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        new_exp_V_reg_455 <= {{p_Val2_s_fu_135_p1[30:23]}};
        new_mant_V_reg_465 <= new_mant_V_fu_157_p1;
        p_Repl2_2_reg_450 <= p_Val2_s_fu_135_p1[32'd31];
        p_Val2_s_reg_445 <= p_Val2_s_fu_135_p1;
        shift_V_cast_cast_reg_472[1 : 0] <= shift_V_cast_cast_fu_169_p3[1 : 0];
        tmp_1_reg_480 <= tmp_1_fu_177_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        p_Repl2_1_reg_491 <= p_Repl2_1_fu_206_p3;
        xf_V_3_cast_reg_486[22 : 0] <= xf_V_3_cast_fu_183_p1[22 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        p_Result_25_1_i_i_reg_564 <= {{xf_V_fu_344_p2[19:16]}};
        p_Result_25_2_i_i_reg_569 <= {{xf_V_fu_344_p2[15:12]}};
        p_Result_25_3_i_i_reg_574 <= {{xf_V_fu_344_p2[11:8]}};
        p_Result_25_4_i_i_reg_579 <= {{xf_V_fu_344_p2[7:4]}};
        p_Result_25_i_i_reg_559 <= {{xf_V_fu_344_p2[23:20]}};
        p_Result_i_i_reg_554 <= {{xf_V_fu_344_p2[25:24]}};
        tmp_14_reg_584 <= tmp_14_fu_410_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
        q_chunk_V_1_reg_599 <= grp_lut_div3_chunk_fu_103_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state16))) begin
        q_chunk_V_2_reg_604 <= grp_lut_div3_chunk_fu_103_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state18))) begin
        q_chunk_V_3_reg_609 <= grp_lut_div3_chunk_fu_103_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state20))) begin
        q_chunk_V_4_reg_614 <= grp_lut_div3_chunk_fu_103_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state22))) begin
        q_chunk_V_5_reg_619 <= grp_lut_div3_chunk_fu_103_ap_return_0;
    end
end

always @ (posedge ap_clk) begin
    if ((((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state20)) | ((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state18)) | ((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state16)) | ((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state10)))) begin
        reg_130 <= grp_lut_div3_chunk_fu_103_ap_return_1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        shift_V_4_reg_517 <= shift_V_4_fu_292_p3;
        xf_V_1_reg_523 <= xf_V_1_fu_305_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
        tmp_15_reg_594 <= tmp_15_fu_418_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp_reg_507 == 1'd0))) begin
        tmp_6_reg_549 <= grp_fu_325_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp_reg_507 == 1'd1))) begin
        tmp_7_reg_544 <= grp_fu_320_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
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
    if (((1'b1 == ap_CS_fsm_state23) & (tmp_1_reg_480 == 1'd0))) begin
        ap_phi_mux_p_Repl2_s_phi_fu_97_p4 = new_mant_V_1_fu_422_p7;
    end else begin
        ap_phi_mux_p_Repl2_s_phi_fu_97_p4 = p_Repl2_s_reg_94;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state22)) begin
        grp_lut_div3_chunk_fu_103_d_V = tmp_14_reg_584;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        grp_lut_div3_chunk_fu_103_d_V = p_Result_25_4_i_i_reg_579;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        grp_lut_div3_chunk_fu_103_d_V = p_Result_25_3_i_i_reg_574;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        grp_lut_div3_chunk_fu_103_d_V = p_Result_25_2_i_i_reg_569;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        grp_lut_div3_chunk_fu_103_d_V = p_Result_25_1_i_i_reg_564;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        grp_lut_div3_chunk_fu_103_d_V = p_Result_25_i_i_reg_559;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        grp_lut_div3_chunk_fu_103_d_V = d_chunk_V_reg_589;
    end else begin
        grp_lut_div3_chunk_fu_103_d_V = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state22))) begin
        grp_lut_div3_chunk_fu_103_r_in_V = reg_130;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        grp_lut_div3_chunk_fu_103_r_in_V = 2'd0;
    end else begin
        grp_lut_div3_chunk_fu_103_r_in_V = 'bx;
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
            if (((1'b1 == ap_CS_fsm_state2) & (tmp_1_reg_480 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state23;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
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
            if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state10))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state16))) begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state18))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state20))) begin
                ap_NS_fsm = ap_ST_fsm_state21;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            if (((grp_lut_div3_chunk_fu_103_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state22))) begin
                ap_NS_fsm = ap_ST_fsm_state23;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state22;
            end
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
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

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_return = p_Result_s_fu_433_p4;

assign d_chunk_V_fu_414_p1 = p_Result_i_i_reg_554;

assign grp_fu_320_p1 = shift_V_4_reg_517;

assign grp_fu_325_p0 = xf_V_1_reg_523;

assign grp_fu_325_p1 = shift_V_4_reg_517;

assign grp_lut_div3_chunk_fu_103_ap_start = grp_lut_div3_chunk_fu_103_ap_start_reg;

assign icmp_fu_232_p2 = ((tmp_12_fu_223_p4 == 7'd0) ? 1'b1 : 1'b0);

assign new_exp_V_1_fu_190_p2 = (new_exp_V_reg_455 - shift_V_cast_cast_reg_472);

assign new_exp_V_fu_147_p4 = {{p_Val2_s_fu_135_p1[30:23]}};

assign new_mant_V_1_fu_422_p7 = {{{{{{tmp_15_reg_594}, {q_chunk_V_1_reg_599}}, {q_chunk_V_2_reg_604}}, {q_chunk_V_3_reg_609}}, {q_chunk_V_4_reg_614}}, {q_chunk_V_5_reg_619}};

assign new_mant_V_fu_157_p1 = p_Val2_s_fu_135_p1[22:0];

assign p_Repl2_1_fu_206_p3 = ((tmp_8_fu_201_p2[0:0] === 1'b1) ? p_new_exp_V_1_fu_194_p3 : new_exp_V_1_fu_190_p2);

assign p_Result_s_fu_433_p4 = {{{p_Repl2_2_reg_450}, {p_Repl2_1_reg_491}}, {ap_phi_mux_p_Repl2_s_phi_fu_97_p4}};

assign p_Val2_s_fu_135_p1 = in_r;

assign p_new_exp_V_1_fu_194_p3 = ((tmp_1_reg_480[0:0] === 1'b1) ? 8'd255 : 8'd0);

assign sel_tmp3_demorgan_fu_248_p2 = (tmp_5_fu_219_p2 | tmp_4_fu_214_p2);

assign sel_tmp3_fu_254_p2 = (sel_tmp3_demorgan_fu_248_p2 ^ 1'd1);

assign sel_tmp4_fu_260_p2 = (sel_tmp3_fu_254_p2 & icmp_fu_232_p2);

assign sel_tmp7_fu_282_p2 = (tmp_4_reg_496 ^ 1'd1);

assign sel_tmp8_fu_287_p2 = (tmp_5_reg_502 & sel_tmp7_fu_282_p2);

assign shift_V_1_fu_243_p2 = ($signed(8'd255) + $signed(new_exp_V_reg_455));

assign shift_V_2_fu_266_p3 = ((sel_tmp4_fu_260_p2[0:0] === 1'b1) ? shift_V_fu_238_p2 : shift_V_1_fu_243_p2);

assign shift_V_3_fu_274_p3 = ((tmp_4_fu_214_p2[0:0] === 1'b1) ? 8'd0 : shift_V_2_fu_266_p3);

assign shift_V_4_fu_292_p3 = ((sel_tmp8_fu_287_p2[0:0] === 1'b1) ? shift_V_cast_cast_reg_472 : shift_V_3_reg_512);

assign shift_V_cast_cast_fu_169_p3 = ((tmp_fu_161_p3[0:0] === 1'b1) ? 8'd1 : 8'd2);

assign shift_V_fu_238_p2 = (8'd1 - new_exp_V_reg_455);

assign tmp_10_fu_331_p1 = tmp_7_reg_544;

assign tmp_12_fu_223_p4 = {{p_Val2_s_reg_445[30:24]}};

assign tmp_13_fu_334_p1 = tmp_6_reg_549[25:0];

assign tmp_14_fu_410_p1 = xf_V_fu_344_p2[3:0];

assign tmp_15_fu_418_p1 = grp_lut_div3_chunk_fu_103_ap_return_0[2:0];

assign tmp_1_fu_177_p2 = ((new_exp_V_fu_147_p4 == 8'd255) ? 1'b1 : 1'b0);

assign tmp_2_fu_186_p2 = ((shift_V_cast_cast_reg_472 > new_exp_V_reg_455) ? 1'b1 : 1'b0);

assign tmp_4_fu_214_p2 = ((new_exp_V_reg_455 == 8'd0) ? 1'b1 : 1'b0);

assign tmp_5_fu_219_p2 = ((shift_V_cast_cast_reg_472 < new_exp_V_reg_455) ? 1'b1 : 1'b0);

assign tmp_8_fu_201_p2 = (tmp_2_fu_186_p2 | tmp_1_reg_480);

assign tmp_9_fu_298_p3 = {{1'd1}, {new_mant_V_reg_465}};

assign tmp_fu_161_p3 = p_Val2_s_fu_135_p1[32'd22];

assign xf_V_1_fu_305_p3 = ((tmp_4_reg_496[0:0] === 1'b1) ? xf_V_3_cast_reg_486 : tmp_9_fu_298_p3);

assign xf_V_2_fu_337_p3 = ((icmp_reg_507[0:0] === 1'b1) ? tmp_10_fu_331_p1 : tmp_13_fu_334_p1);

assign xf_V_3_cast_fu_183_p1 = new_mant_V_reg_465;

assign xf_V_fu_344_p2 = (26'd1 + xf_V_2_fu_337_p3);

always @ (posedge ap_clk) begin
    shift_V_cast_cast_reg_472[7:2] <= 6'b000000;
    xf_V_3_cast_reg_486[23] <= 1'b0;
    d_chunk_V_reg_589[3:2] <= 2'b00;
end

endmodule //operator_float_div3
