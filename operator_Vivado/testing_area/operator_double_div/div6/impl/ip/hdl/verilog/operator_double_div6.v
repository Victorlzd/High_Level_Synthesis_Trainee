// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="operator_double_div6,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=29.069000,HLS_SYN_LAT=1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=121,HLS_SYN_LUT=13945,HLS_VERSION=2018_2}" *)

module operator_double_div6 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_r,
        ap_return
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

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

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [0:0] p_Repl2_2_reg_653;
wire   [51:0] new_mant_V_fu_244_p1;
wire   [0:0] tmp_1_fu_268_p2;
reg   [0:0] tmp_1_reg_663;
wire   [10:0] p_Repl2_1_fu_300_p3;
reg   [10:0] p_Repl2_1_reg_667;
reg   [3:0] q_chunk_V_0_1_i_i_reg_672;
reg   [3:0] q_chunk_V_0_2_i_i_reg_677;
reg   [3:0] q_chunk_V_0_3_i_i_reg_682;
reg   [3:0] q_chunk_V_0_4_i_i_reg_687;
reg   [3:0] q_chunk_V_0_5_i_i_reg_692;
reg   [1:0] r_V_ret_5_i_i_reg_697;
reg   [3:0] p_Result_16_6_i_i_reg_702;
reg   [3:0] p_Result_16_7_i_i_reg_707;
reg   [3:0] p_Result_16_8_i_i_reg_712;
reg   [3:0] p_Result_16_9_i_i_reg_717;
reg   [3:0] p_Result_16_i_i_6_reg_722;
reg   [3:0] p_Result_16_10_i_i_reg_727;
reg   [3:0] p_Result_16_11_i_i_reg_732;
wire   [3:0] tmp_10_fu_594_p1;
reg   [3:0] tmp_10_reg_737;
wire    grp_lut_div3_chunk_fu_123_ap_ready;
reg   [3:0] grp_lut_div3_chunk_fu_123_d_V;
reg   [1:0] grp_lut_div3_chunk_fu_123_r_in_V;
wire   [3:0] grp_lut_div3_chunk_fu_123_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_123_ap_return_1;
wire    grp_lut_div3_chunk_fu_130_ap_ready;
reg   [3:0] grp_lut_div3_chunk_fu_130_d_V;
wire   [3:0] grp_lut_div3_chunk_fu_130_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_130_ap_return_1;
wire    grp_lut_div3_chunk_fu_136_ap_ready;
reg   [3:0] grp_lut_div3_chunk_fu_136_d_V;
wire   [3:0] grp_lut_div3_chunk_fu_136_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_136_ap_return_1;
wire    grp_lut_div3_chunk_fu_142_ap_ready;
reg   [3:0] grp_lut_div3_chunk_fu_142_d_V;
wire   [3:0] grp_lut_div3_chunk_fu_142_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_142_ap_return_1;
wire    grp_lut_div3_chunk_fu_148_ap_ready;
reg   [3:0] grp_lut_div3_chunk_fu_148_d_V;
wire   [3:0] grp_lut_div3_chunk_fu_148_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_148_ap_return_1;
wire    grp_lut_div3_chunk_fu_154_ap_ready;
reg   [3:0] grp_lut_div3_chunk_fu_154_d_V;
wire   [3:0] grp_lut_div3_chunk_fu_154_ap_return_0;
wire   [1:0] grp_lut_div3_chunk_fu_154_ap_return_1;
wire    call_ret_11_i_i_lut_div3_chunk_fu_160_ap_ready;
wire   [3:0] call_ret_11_i_i_lut_div3_chunk_fu_160_ap_return_0;
wire   [1:0] call_ret_11_i_i_lut_div3_chunk_fu_160_ap_return_1;
wire    call_ret_12_i_i_lut_div3_chunk_fu_166_ap_ready;
wire   [3:0] call_ret_12_i_i_lut_div3_chunk_fu_166_ap_return_0;
wire   [1:0] call_ret_12_i_i_lut_div3_chunk_fu_166_ap_return_1;
wire   [51:0] new_mant_V_1_fu_615_p14;
reg   [51:0] ap_phi_mux_p_Repl2_s_phi_fu_117_p4;
reg   [51:0] p_Repl2_s_reg_114;
wire    ap_CS_fsm_state2;
wire   [63:0] p_Val2_s_fu_222_p1;
wire   [0:0] tmp_fu_252_p3;
wire   [10:0] new_exp_V_fu_234_p4;
wire   [10:0] p_cast_cast_fu_260_p3;
wire   [0:0] tmp_2_fu_274_p2;
wire   [0:0] tmp_8_fu_294_p2;
wire   [10:0] p_new_exp_V_1_fu_286_p3;
wire   [10:0] new_exp_V_1_fu_280_p2;
wire   [0:0] tmp_4_fu_308_p2;
wire   [0:0] tmp_5_fu_314_p2;
wire   [0:0] sel_tmp_fu_346_p2;
wire   [0:0] sel_tmp2_fu_352_p2;
wire   [10:0] shift_V_cast_cast_fu_320_p3;
wire   [10:0] shift_V_1_fu_340_p2;
wire   [0:0] sel_tmp6_demorgan_fu_366_p2;
wire   [0:0] tmp_7_fu_328_p2;
wire   [0:0] sel_tmp6_fu_372_p2;
wire   [0:0] sel_tmp7_fu_378_p2;
wire   [10:0] shift_V_fu_334_p2;
wire   [10:0] shift_V_2_fu_358_p3;
wire   [10:0] shift_V_3_fu_384_p3;
wire   [52:0] xf_V_5_cast_fu_248_p1;
wire   [52:0] tmp_6_fu_400_p3;
wire   [52:0] xf_V_1_fu_408_p3;
wire   [10:0] shift_V_4_fu_392_p3;
wire   [52:0] tmp_3_cast_fu_424_p1;
wire   [52:0] r_V_fu_428_p2;
wire   [55:0] p_1_cast_fu_416_p1;
wire   [55:0] tmp_3_fu_420_p1;
wire   [55:0] r_V_cast_fu_434_p1;
wire   [55:0] r_V_1_fu_438_p2;
wire   [55:0] xf_V_3_fu_444_p3;
wire   [55:0] xf_V_fu_452_p2;
wire   [63:0] p_Result_s_fu_641_p4;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
end

lut_div3_chunk grp_lut_div3_chunk_fu_123(
    .ap_ready(grp_lut_div3_chunk_fu_123_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_123_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_123_r_in_V),
    .ap_return_0(grp_lut_div3_chunk_fu_123_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_123_ap_return_1)
);

lut_div3_chunk grp_lut_div3_chunk_fu_130(
    .ap_ready(grp_lut_div3_chunk_fu_130_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_130_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_123_ap_return_1),
    .ap_return_0(grp_lut_div3_chunk_fu_130_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_130_ap_return_1)
);

lut_div3_chunk grp_lut_div3_chunk_fu_136(
    .ap_ready(grp_lut_div3_chunk_fu_136_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_136_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_130_ap_return_1),
    .ap_return_0(grp_lut_div3_chunk_fu_136_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_136_ap_return_1)
);

lut_div3_chunk grp_lut_div3_chunk_fu_142(
    .ap_ready(grp_lut_div3_chunk_fu_142_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_142_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_136_ap_return_1),
    .ap_return_0(grp_lut_div3_chunk_fu_142_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_142_ap_return_1)
);

lut_div3_chunk grp_lut_div3_chunk_fu_148(
    .ap_ready(grp_lut_div3_chunk_fu_148_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_148_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_142_ap_return_1),
    .ap_return_0(grp_lut_div3_chunk_fu_148_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_148_ap_return_1)
);

lut_div3_chunk grp_lut_div3_chunk_fu_154(
    .ap_ready(grp_lut_div3_chunk_fu_154_ap_ready),
    .d_V(grp_lut_div3_chunk_fu_154_d_V),
    .r_in_V(grp_lut_div3_chunk_fu_148_ap_return_1),
    .ap_return_0(grp_lut_div3_chunk_fu_154_ap_return_0),
    .ap_return_1(grp_lut_div3_chunk_fu_154_ap_return_1)
);

lut_div3_chunk call_ret_11_i_i_lut_div3_chunk_fu_160(
    .ap_ready(call_ret_11_i_i_lut_div3_chunk_fu_160_ap_ready),
    .d_V(p_Result_16_11_i_i_reg_732),
    .r_in_V(grp_lut_div3_chunk_fu_154_ap_return_1),
    .ap_return_0(call_ret_11_i_i_lut_div3_chunk_fu_160_ap_return_0),
    .ap_return_1(call_ret_11_i_i_lut_div3_chunk_fu_160_ap_return_1)
);

lut_div3_chunk call_ret_12_i_i_lut_div3_chunk_fu_166(
    .ap_ready(call_ret_12_i_i_lut_div3_chunk_fu_166_ap_ready),
    .d_V(tmp_10_reg_737),
    .r_in_V(call_ret_11_i_i_lut_div3_chunk_fu_160_ap_return_1),
    .ap_return_0(call_ret_12_i_i_lut_div3_chunk_fu_166_ap_return_0),
    .ap_return_1(call_ret_12_i_i_lut_div3_chunk_fu_166_ap_return_1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (tmp_1_fu_268_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        p_Repl2_s_reg_114 <= new_mant_V_fu_244_p1;
    end else if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        p_Repl2_s_reg_114 <= new_mant_V_1_fu_615_p14;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        p_Repl2_1_reg_667 <= p_Repl2_1_fu_300_p3;
        p_Repl2_2_reg_653 <= p_Val2_s_fu_222_p1[32'd63];
        tmp_1_reg_663 <= tmp_1_fu_268_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (tmp_1_fu_268_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        p_Result_16_10_i_i_reg_727 <= {{xf_V_fu_452_p2[11:8]}};
        p_Result_16_11_i_i_reg_732 <= {{xf_V_fu_452_p2[7:4]}};
        p_Result_16_6_i_i_reg_702 <= {{xf_V_fu_452_p2[31:28]}};
        p_Result_16_7_i_i_reg_707 <= {{xf_V_fu_452_p2[27:24]}};
        p_Result_16_8_i_i_reg_712 <= {{xf_V_fu_452_p2[23:20]}};
        p_Result_16_9_i_i_reg_717 <= {{xf_V_fu_452_p2[19:16]}};
        p_Result_16_i_i_6_reg_722 <= {{xf_V_fu_452_p2[15:12]}};
        q_chunk_V_0_1_i_i_reg_672 <= grp_lut_div3_chunk_fu_130_ap_return_0;
        q_chunk_V_0_2_i_i_reg_677 <= grp_lut_div3_chunk_fu_136_ap_return_0;
        q_chunk_V_0_3_i_i_reg_682 <= grp_lut_div3_chunk_fu_142_ap_return_0;
        q_chunk_V_0_4_i_i_reg_687 <= grp_lut_div3_chunk_fu_148_ap_return_0;
        q_chunk_V_0_5_i_i_reg_692 <= grp_lut_div3_chunk_fu_154_ap_return_0;
        r_V_ret_5_i_i_reg_697 <= grp_lut_div3_chunk_fu_154_ap_return_1;
        tmp_10_reg_737 <= tmp_10_fu_594_p1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
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
    if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_phi_mux_p_Repl2_s_phi_fu_117_p4 = new_mant_V_1_fu_615_p14;
    end else begin
        ap_phi_mux_p_Repl2_s_phi_fu_117_p4 = p_Repl2_s_reg_114;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        grp_lut_div3_chunk_fu_123_d_V = p_Result_16_6_i_i_reg_702;
    end else if (((tmp_1_fu_268_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        grp_lut_div3_chunk_fu_123_d_V = {{xf_V_fu_452_p2[55:52]}};
    end else begin
        grp_lut_div3_chunk_fu_123_d_V = 'bx;
    end
end

always @ (*) begin
    if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        grp_lut_div3_chunk_fu_123_r_in_V = r_V_ret_5_i_i_reg_697;
    end else if (((tmp_1_fu_268_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        grp_lut_div3_chunk_fu_123_r_in_V = 2'd0;
    end else begin
        grp_lut_div3_chunk_fu_123_r_in_V = 'bx;
    end
end

always @ (*) begin
    if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        grp_lut_div3_chunk_fu_130_d_V = p_Result_16_7_i_i_reg_707;
    end else if (((tmp_1_fu_268_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        grp_lut_div3_chunk_fu_130_d_V = {{xf_V_fu_452_p2[51:48]}};
    end else begin
        grp_lut_div3_chunk_fu_130_d_V = 'bx;
    end
end

always @ (*) begin
    if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        grp_lut_div3_chunk_fu_136_d_V = p_Result_16_8_i_i_reg_712;
    end else if (((tmp_1_fu_268_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        grp_lut_div3_chunk_fu_136_d_V = {{xf_V_fu_452_p2[47:44]}};
    end else begin
        grp_lut_div3_chunk_fu_136_d_V = 'bx;
    end
end

always @ (*) begin
    if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        grp_lut_div3_chunk_fu_142_d_V = p_Result_16_9_i_i_reg_717;
    end else if (((tmp_1_fu_268_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        grp_lut_div3_chunk_fu_142_d_V = {{xf_V_fu_452_p2[43:40]}};
    end else begin
        grp_lut_div3_chunk_fu_142_d_V = 'bx;
    end
end

always @ (*) begin
    if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        grp_lut_div3_chunk_fu_148_d_V = p_Result_16_i_i_6_reg_722;
    end else if (((tmp_1_fu_268_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        grp_lut_div3_chunk_fu_148_d_V = {{xf_V_fu_452_p2[39:36]}};
    end else begin
        grp_lut_div3_chunk_fu_148_d_V = 'bx;
    end
end

always @ (*) begin
    if (((tmp_1_reg_663 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        grp_lut_div3_chunk_fu_154_d_V = p_Result_16_10_i_i_reg_727;
    end else if (((tmp_1_fu_268_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        grp_lut_div3_chunk_fu_154_d_V = {{xf_V_fu_452_p2[35:32]}};
    end else begin
        grp_lut_div3_chunk_fu_154_d_V = 'bx;
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
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_return = p_Result_s_fu_641_p4;

assign new_exp_V_1_fu_280_p2 = (new_exp_V_fu_234_p4 - p_cast_cast_fu_260_p3);

assign new_exp_V_fu_234_p4 = {{p_Val2_s_fu_222_p1[62:52]}};

assign new_mant_V_1_fu_615_p14 = {{{{{{{{{{{{{q_chunk_V_0_1_i_i_reg_672}, {q_chunk_V_0_2_i_i_reg_677}}, {q_chunk_V_0_3_i_i_reg_682}}, {q_chunk_V_0_4_i_i_reg_687}}, {q_chunk_V_0_5_i_i_reg_692}}, {grp_lut_div3_chunk_fu_123_ap_return_0}}, {grp_lut_div3_chunk_fu_130_ap_return_0}}, {grp_lut_div3_chunk_fu_136_ap_return_0}}, {grp_lut_div3_chunk_fu_142_ap_return_0}}, {grp_lut_div3_chunk_fu_148_ap_return_0}}, {grp_lut_div3_chunk_fu_154_ap_return_0}}, {call_ret_11_i_i_lut_div3_chunk_fu_160_ap_return_0}}, {call_ret_12_i_i_lut_div3_chunk_fu_166_ap_return_0}};

assign new_mant_V_fu_244_p1 = p_Val2_s_fu_222_p1[51:0];

assign p_1_cast_fu_416_p1 = xf_V_1_fu_408_p3;

assign p_Repl2_1_fu_300_p3 = ((tmp_8_fu_294_p2[0:0] === 1'b1) ? p_new_exp_V_1_fu_286_p3 : new_exp_V_1_fu_280_p2);

assign p_Result_s_fu_641_p4 = {{{p_Repl2_2_reg_653}, {p_Repl2_1_reg_667}}, {ap_phi_mux_p_Repl2_s_phi_fu_117_p4}};

assign p_Val2_s_fu_222_p1 = in_r;

assign p_cast_cast_fu_260_p3 = ((tmp_fu_252_p3[0:0] === 1'b1) ? 11'd2 : 11'd3);

assign p_new_exp_V_1_fu_286_p3 = ((tmp_1_fu_268_p2[0:0] === 1'b1) ? 11'd2047 : 11'd0);

assign r_V_1_fu_438_p2 = p_1_cast_fu_416_p1 << tmp_3_fu_420_p1;

assign r_V_cast_fu_434_p1 = r_V_fu_428_p2;

assign r_V_fu_428_p2 = xf_V_1_fu_408_p3 >> tmp_3_cast_fu_424_p1;

assign sel_tmp2_fu_352_p2 = (tmp_5_fu_314_p2 & sel_tmp_fu_346_p2);

assign sel_tmp6_demorgan_fu_366_p2 = (tmp_5_fu_314_p2 | tmp_4_fu_308_p2);

assign sel_tmp6_fu_372_p2 = (sel_tmp6_demorgan_fu_366_p2 ^ 1'd1);

assign sel_tmp7_fu_378_p2 = (tmp_7_fu_328_p2 & sel_tmp6_fu_372_p2);

assign sel_tmp_fu_346_p2 = (tmp_4_fu_308_p2 ^ 1'd1);

assign shift_V_1_fu_340_p2 = ($signed(11'd2046) + $signed(new_exp_V_fu_234_p4));

assign shift_V_2_fu_358_p3 = ((sel_tmp2_fu_352_p2[0:0] === 1'b1) ? shift_V_cast_cast_fu_320_p3 : shift_V_1_fu_340_p2);

assign shift_V_3_fu_384_p3 = ((sel_tmp7_fu_378_p2[0:0] === 1'b1) ? shift_V_fu_334_p2 : shift_V_2_fu_358_p3);

assign shift_V_4_fu_392_p3 = ((tmp_4_fu_308_p2[0:0] === 1'b1) ? 11'd1 : shift_V_3_fu_384_p3);

assign shift_V_cast_cast_fu_320_p3 = ((tmp_fu_252_p3[0:0] === 1'b1) ? 11'd1 : 11'd2);

assign shift_V_fu_334_p2 = (11'd2 - new_exp_V_fu_234_p4);

assign tmp_10_fu_594_p1 = xf_V_fu_452_p2[3:0];

assign tmp_1_fu_268_p2 = ((new_exp_V_fu_234_p4 == 11'd2047) ? 1'b1 : 1'b0);

assign tmp_2_fu_274_p2 = ((p_cast_cast_fu_260_p3 > new_exp_V_fu_234_p4) ? 1'b1 : 1'b0);

assign tmp_3_cast_fu_424_p1 = shift_V_4_fu_392_p3;

assign tmp_3_fu_420_p1 = shift_V_4_fu_392_p3;

assign tmp_4_fu_308_p2 = ((new_exp_V_fu_234_p4 == 11'd0) ? 1'b1 : 1'b0);

assign tmp_5_fu_314_p2 = ((p_cast_cast_fu_260_p3 < new_exp_V_fu_234_p4) ? 1'b1 : 1'b0);

assign tmp_6_fu_400_p3 = {{1'd1}, {new_mant_V_fu_244_p1}};

assign tmp_7_fu_328_p2 = ((new_exp_V_fu_234_p4 < 11'd3) ? 1'b1 : 1'b0);

assign tmp_8_fu_294_p2 = (tmp_2_fu_274_p2 | tmp_1_fu_268_p2);

assign tmp_fu_252_p3 = p_Val2_s_fu_222_p1[32'd51];

assign xf_V_1_fu_408_p3 = ((tmp_4_fu_308_p2[0:0] === 1'b1) ? xf_V_5_cast_fu_248_p1 : tmp_6_fu_400_p3);

assign xf_V_3_fu_444_p3 = ((tmp_7_fu_328_p2[0:0] === 1'b1) ? r_V_cast_fu_434_p1 : r_V_1_fu_438_p2);

assign xf_V_5_cast_fu_248_p1 = new_mant_V_fu_244_p1;

assign xf_V_fu_452_p2 = (56'd1 + xf_V_3_fu_444_p3);

endmodule //operator_double_div6
