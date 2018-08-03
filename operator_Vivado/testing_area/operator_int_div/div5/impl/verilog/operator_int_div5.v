// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="operator_int_div5,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=25.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=20.538000,HLS_SYN_LAT=1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=37,HLS_SYN_LUT=9933,HLS_VERSION=2018_2}" *)

module operator_int_div5 (
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
input  [31:0] in_r;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [1:0] tmp_fu_165_p1;
reg   [1:0] tmp_reg_292;
reg   [2:0] q_chunk_V_ret2_i_i_reg_297;
reg   [2:0] q_chunk_V_ret2_1_i_i_reg_302;
reg   [2:0] q_chunk_V_ret2_2_i_i_reg_307;
reg   [2:0] q_chunk_V_ret2_3_i_i_reg_312;
reg   [2:0] r_V_ret3_3_i_i_reg_317;
reg   [2:0] p_Result_19_4_i_i_reg_322;
reg   [2:0] p_Result_19_5_i_i_reg_327;
reg   [2:0] p_Result_19_6_i_i_reg_332;
reg   [2:0] p_Result_19_7_i_i_reg_337;
reg   [2:0] p_Result_19_8_i_i_reg_342;
wire   [2:0] tmp_1_fu_263_p1;
reg   [2:0] tmp_1_reg_347;
wire    grp_lut_div5_chunk_fu_68_ap_ready;
reg   [2:0] grp_lut_div5_chunk_fu_68_d_V;
reg   [2:0] grp_lut_div5_chunk_fu_68_r_in_V;
wire   [2:0] grp_lut_div5_chunk_fu_68_ap_return_0;
wire   [2:0] grp_lut_div5_chunk_fu_68_ap_return_1;
wire    grp_lut_div5_chunk_fu_75_ap_ready;
reg   [2:0] grp_lut_div5_chunk_fu_75_d_V;
wire   [2:0] grp_lut_div5_chunk_fu_75_ap_return_0;
wire   [2:0] grp_lut_div5_chunk_fu_75_ap_return_1;
wire    grp_lut_div5_chunk_fu_81_ap_ready;
reg   [2:0] grp_lut_div5_chunk_fu_81_d_V;
wire   [2:0] grp_lut_div5_chunk_fu_81_ap_return_0;
wire   [2:0] grp_lut_div5_chunk_fu_81_ap_return_1;
wire    grp_lut_div5_chunk_fu_87_ap_ready;
reg   [2:0] grp_lut_div5_chunk_fu_87_d_V;
wire   [2:0] grp_lut_div5_chunk_fu_87_ap_return_0;
wire   [2:0] grp_lut_div5_chunk_fu_87_ap_return_1;
wire    grp_lut_div5_chunk_fu_93_ap_ready;
reg   [2:0] grp_lut_div5_chunk_fu_93_d_V;
wire   [2:0] grp_lut_div5_chunk_fu_93_ap_return_0;
wire   [2:0] grp_lut_div5_chunk_fu_93_ap_return_1;
wire    call_ret4_9_i_i_lut_div5_chunk_fu_99_ap_ready;
wire   [2:0] call_ret4_9_i_i_lut_div5_chunk_fu_99_ap_return_0;
wire   [2:0] call_ret4_9_i_i_lut_div5_chunk_fu_99_ap_return_1;
wire   [2:0] d_chunk_V_fu_160_p1;
wire    ap_CS_fsm_state2;
wire   [1:0] p_Result_i_i_fu_150_p4;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
end

lut_div5_chunk grp_lut_div5_chunk_fu_68(
    .ap_ready(grp_lut_div5_chunk_fu_68_ap_ready),
    .d_V(grp_lut_div5_chunk_fu_68_d_V),
    .r_in_V(grp_lut_div5_chunk_fu_68_r_in_V),
    .ap_return_0(grp_lut_div5_chunk_fu_68_ap_return_0),
    .ap_return_1(grp_lut_div5_chunk_fu_68_ap_return_1)
);

lut_div5_chunk grp_lut_div5_chunk_fu_75(
    .ap_ready(grp_lut_div5_chunk_fu_75_ap_ready),
    .d_V(grp_lut_div5_chunk_fu_75_d_V),
    .r_in_V(grp_lut_div5_chunk_fu_68_ap_return_1),
    .ap_return_0(grp_lut_div5_chunk_fu_75_ap_return_0),
    .ap_return_1(grp_lut_div5_chunk_fu_75_ap_return_1)
);

lut_div5_chunk grp_lut_div5_chunk_fu_81(
    .ap_ready(grp_lut_div5_chunk_fu_81_ap_ready),
    .d_V(grp_lut_div5_chunk_fu_81_d_V),
    .r_in_V(grp_lut_div5_chunk_fu_75_ap_return_1),
    .ap_return_0(grp_lut_div5_chunk_fu_81_ap_return_0),
    .ap_return_1(grp_lut_div5_chunk_fu_81_ap_return_1)
);

lut_div5_chunk grp_lut_div5_chunk_fu_87(
    .ap_ready(grp_lut_div5_chunk_fu_87_ap_ready),
    .d_V(grp_lut_div5_chunk_fu_87_d_V),
    .r_in_V(grp_lut_div5_chunk_fu_81_ap_return_1),
    .ap_return_0(grp_lut_div5_chunk_fu_87_ap_return_0),
    .ap_return_1(grp_lut_div5_chunk_fu_87_ap_return_1)
);

lut_div5_chunk grp_lut_div5_chunk_fu_93(
    .ap_ready(grp_lut_div5_chunk_fu_93_ap_ready),
    .d_V(grp_lut_div5_chunk_fu_93_d_V),
    .r_in_V(grp_lut_div5_chunk_fu_87_ap_return_1),
    .ap_return_0(grp_lut_div5_chunk_fu_93_ap_return_0),
    .ap_return_1(grp_lut_div5_chunk_fu_93_ap_return_1)
);

lut_div5_chunk call_ret4_9_i_i_lut_div5_chunk_fu_99(
    .ap_ready(call_ret4_9_i_i_lut_div5_chunk_fu_99_ap_ready),
    .d_V(tmp_1_reg_347),
    .r_in_V(grp_lut_div5_chunk_fu_93_ap_return_1),
    .ap_return_0(call_ret4_9_i_i_lut_div5_chunk_fu_99_ap_return_0),
    .ap_return_1(call_ret4_9_i_i_lut_div5_chunk_fu_99_ap_return_1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        p_Result_19_4_i_i_reg_322 <= {{in_r[17:15]}};
        p_Result_19_5_i_i_reg_327 <= {{in_r[14:12]}};
        p_Result_19_6_i_i_reg_332 <= {{in_r[11:9]}};
        p_Result_19_7_i_i_reg_337 <= {{in_r[8:6]}};
        p_Result_19_8_i_i_reg_342 <= {{in_r[5:3]}};
        q_chunk_V_ret2_1_i_i_reg_302 <= grp_lut_div5_chunk_fu_81_ap_return_0;
        q_chunk_V_ret2_2_i_i_reg_307 <= grp_lut_div5_chunk_fu_87_ap_return_0;
        q_chunk_V_ret2_3_i_i_reg_312 <= grp_lut_div5_chunk_fu_93_ap_return_0;
        q_chunk_V_ret2_i_i_reg_297 <= grp_lut_div5_chunk_fu_75_ap_return_0;
        r_V_ret3_3_i_i_reg_317 <= grp_lut_div5_chunk_fu_93_ap_return_1;
        tmp_1_reg_347 <= tmp_1_fu_263_p1;
        tmp_reg_292 <= tmp_fu_165_p1;
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
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div5_chunk_fu_68_d_V = p_Result_19_4_i_i_reg_322;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div5_chunk_fu_68_d_V = d_chunk_V_fu_160_p1;
    end else begin
        grp_lut_div5_chunk_fu_68_d_V = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div5_chunk_fu_68_r_in_V = r_V_ret3_3_i_i_reg_317;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div5_chunk_fu_68_r_in_V = 3'd0;
    end else begin
        grp_lut_div5_chunk_fu_68_r_in_V = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div5_chunk_fu_75_d_V = p_Result_19_5_i_i_reg_327;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div5_chunk_fu_75_d_V = {{in_r[29:27]}};
    end else begin
        grp_lut_div5_chunk_fu_75_d_V = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div5_chunk_fu_81_d_V = p_Result_19_6_i_i_reg_332;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div5_chunk_fu_81_d_V = {{in_r[26:24]}};
    end else begin
        grp_lut_div5_chunk_fu_81_d_V = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div5_chunk_fu_87_d_V = p_Result_19_7_i_i_reg_337;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div5_chunk_fu_87_d_V = {{in_r[23:21]}};
    end else begin
        grp_lut_div5_chunk_fu_87_d_V = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_lut_div5_chunk_fu_93_d_V = p_Result_19_8_i_i_reg_342;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        grp_lut_div5_chunk_fu_93_d_V = {{in_r[20:18]}};
    end else begin
        grp_lut_div5_chunk_fu_93_d_V = 'bx;
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

assign ap_return = {{{{{{{{{{{tmp_reg_292}, {q_chunk_V_ret2_i_i_reg_297}}, {q_chunk_V_ret2_1_i_i_reg_302}}, {q_chunk_V_ret2_2_i_i_reg_307}}, {q_chunk_V_ret2_3_i_i_reg_312}}, {grp_lut_div5_chunk_fu_68_ap_return_0}}, {grp_lut_div5_chunk_fu_75_ap_return_0}}, {grp_lut_div5_chunk_fu_81_ap_return_0}}, {grp_lut_div5_chunk_fu_87_ap_return_0}}, {grp_lut_div5_chunk_fu_93_ap_return_0}}, {call_ret4_9_i_i_lut_div5_chunk_fu_99_ap_return_0}};

assign d_chunk_V_fu_160_p1 = p_Result_i_i_fu_150_p4;

assign p_Result_i_i_fu_150_p4 = {{in_r[31:30]}};

assign tmp_1_fu_263_p1 = in_r[2:0];

assign tmp_fu_165_p1 = grp_lut_div5_chunk_fu_68_ap_return_0[1:0];

endmodule //operator_int_div5
