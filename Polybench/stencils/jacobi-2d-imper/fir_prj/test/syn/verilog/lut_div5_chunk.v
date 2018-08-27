// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module lut_div5_chunk (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        d_V,
        r_in_V,
        ap_return_0,
        ap_return_1
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [2:0] d_V;
input  [2:0] r_in_V;
output  [2:0] ap_return_0;
output  [2:0] ap_return_1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[2:0] ap_return_0;
reg[2:0] ap_return_1;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [5:0] r0_address0;
reg    r0_ce0;
wire   [0:0] r0_q0;
wire   [5:0] r1_address0;
reg    r1_ce0;
wire   [0:0] r1_q0;
wire   [5:0] r2_address0;
reg    r2_ce0;
wire   [0:0] r2_q0;
wire   [5:0] q0_address0;
reg    q0_ce0;
wire   [0:0] q0_q0;
wire   [5:0] q1_address0;
reg    q1_ce0;
wire   [0:0] q1_q0;
wire   [5:0] q2_address0;
reg    q2_ce0;
wire   [0:0] q2_q0;
wire   [63:0] tmp_fu_124_p1;
wire   [5:0] p_Result_3_fu_116_p3;
wire    ap_CS_fsm_state2;
wire   [2:0] p_Result_1_fu_144_p4;
wire   [2:0] p_Result_s_fu_134_p4;
reg   [2:0] ap_return_0_preg;
reg   [2:0] ap_return_1_preg;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
#0 ap_return_0_preg = 3'd0;
#0 ap_return_1_preg = 3'd0;
end

lut_div5_chunk_r0 #(
    .DataWidth( 1 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
r0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(r0_address0),
    .ce0(r0_ce0),
    .q0(r0_q0)
);

lut_div5_chunk_r1 #(
    .DataWidth( 1 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
r1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(r1_address0),
    .ce0(r1_ce0),
    .q0(r1_q0)
);

lut_div5_chunk_r2 #(
    .DataWidth( 1 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
r2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(r2_address0),
    .ce0(r2_ce0),
    .q0(r2_q0)
);

lut_div5_chunk_q0 #(
    .DataWidth( 1 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
q0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(q0_address0),
    .ce0(q0_ce0),
    .q0(q0_q0)
);

lut_div5_chunk_q1 #(
    .DataWidth( 1 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
q1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(q1_address0),
    .ce0(q1_ce0),
    .q0(q1_q0)
);

lut_div5_chunk_q2 #(
    .DataWidth( 1 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
q2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(q2_address0),
    .ce0(q2_ce0),
    .q0(q2_q0)
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
        ap_return_0_preg <= 3'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_0_preg <= p_Result_1_fu_144_p4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_1_preg <= 3'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_1_preg <= p_Result_s_fu_134_p4;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return_0 <= p_Result_1_fu_144_p4;
        ap_return_1 <= p_Result_s_fu_134_p4;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
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
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        q0_ce0 = 1'b1;
    end else begin
        q0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        q1_ce0 = 1'b1;
    end else begin
        q1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        q2_ce0 = 1'b1;
    end else begin
        q2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        r0_ce0 = 1'b1;
    end else begin
        r0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        r1_ce0 = 1'b1;
    end else begin
        r1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        r2_ce0 = 1'b1;
    end else begin
        r2_ce0 = 1'b0;
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

assign p_Result_1_fu_144_p4 = {{{q2_q0}, {q1_q0}}, {q0_q0}};

assign p_Result_3_fu_116_p3 = {{r_in_V}, {d_V}};

assign p_Result_s_fu_134_p4 = {{{r2_q0}, {r1_q0}}, {r0_q0}};

assign q0_address0 = tmp_fu_124_p1;

assign q1_address0 = tmp_fu_124_p1;

assign q2_address0 = tmp_fu_124_p1;

assign r0_address0 = tmp_fu_124_p1;

assign r1_address0 = tmp_fu_124_p1;

assign r2_address0 = tmp_fu_124_p1;

assign tmp_fu_124_p1 = p_Result_3_fu_116_p3;

endmodule //lut_div5_chunk
