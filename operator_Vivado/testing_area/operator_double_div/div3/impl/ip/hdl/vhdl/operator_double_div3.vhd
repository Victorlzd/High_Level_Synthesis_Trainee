-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity operator_double_div3 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    in_r : IN STD_LOGIC_VECTOR (63 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (63 downto 0) );
end;


architecture behav of operator_double_div3 is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "operator_double_div3,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=29.069000,HLS_SYN_LAT=1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=121,HLS_SYN_LUT=13939,HLS_VERSION=2018_2}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv32_34 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110100";
    constant ap_const_lv32_3E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111110";
    constant ap_const_lv32_33 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110011";
    constant ap_const_lv11_1 : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    constant ap_const_lv11_2 : STD_LOGIC_VECTOR (10 downto 0) := "00000000010";
    constant ap_const_lv11_7FF : STD_LOGIC_VECTOR (10 downto 0) := "11111111111";
    constant ap_const_lv11_0 : STD_LOGIC_VECTOR (10 downto 0) := "00000000000";
    constant ap_const_lv32_35 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110101";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv55_1 : STD_LOGIC_VECTOR (54 downto 0) := "0000000000000000000000000000000000000000000000000000001";
    constant ap_const_lv32_36 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110110";
    constant ap_const_lv32_30 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110000";
    constant ap_const_lv32_2C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000101100";
    constant ap_const_lv32_2F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000101111";
    constant ap_const_lv32_28 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000101000";
    constant ap_const_lv32_2B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000101011";
    constant ap_const_lv32_24 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100100";
    constant ap_const_lv32_27 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100111";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_23 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100011";
    constant ap_const_lv32_1C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011100";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_18 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011000";
    constant ap_const_lv32_1B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011011";
    constant ap_const_lv32_14 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010100";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_13 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010011";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0) := "01";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal p_Repl2_2_reg_663 : STD_LOGIC_VECTOR (0 downto 0);
    signal new_mant_V_fu_248_p1 : STD_LOGIC_VECTOR (51 downto 0);
    signal tmp_1_fu_272_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_1_reg_673 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Repl2_1_fu_304_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal p_Repl2_1_reg_677 : STD_LOGIC_VECTOR (10 downto 0);
    signal q_chunk_V_ret2_i_i_reg_682 : STD_LOGIC_VECTOR (3 downto 0);
    signal q_chunk_V_ret2_1_i_i_reg_687 : STD_LOGIC_VECTOR (3 downto 0);
    signal q_chunk_V_ret2_2_i_i_reg_692 : STD_LOGIC_VECTOR (3 downto 0);
    signal q_chunk_V_ret2_3_i_i_reg_697 : STD_LOGIC_VECTOR (3 downto 0);
    signal q_chunk_V_ret2_4_i_i_reg_702 : STD_LOGIC_VECTOR (3 downto 0);
    signal r_V_ret3_4_i_i_reg_707 : STD_LOGIC_VECTOR (1 downto 0);
    signal p_Result_22_5_i_i_reg_712 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_22_6_i_i_reg_717 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_22_7_i_i_reg_722 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_22_8_i_i_reg_727 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_22_9_i_i_reg_732 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_22_i_i_8_reg_737 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_22_10_i_i_reg_742 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_9_fu_604_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_9_reg_747 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_127_ap_ready : STD_LOGIC;
    signal grp_lut_div3_chunk_fu_127_d_V : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_127_r_in_V : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_lut_div3_chunk_fu_127_ap_return_0 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_127_ap_return_1 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_lut_div3_chunk_fu_134_ap_ready : STD_LOGIC;
    signal grp_lut_div3_chunk_fu_134_d_V : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_134_ap_return_0 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_134_ap_return_1 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_lut_div3_chunk_fu_140_ap_ready : STD_LOGIC;
    signal grp_lut_div3_chunk_fu_140_d_V : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_140_ap_return_0 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_140_ap_return_1 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_lut_div3_chunk_fu_146_ap_ready : STD_LOGIC;
    signal grp_lut_div3_chunk_fu_146_d_V : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_146_ap_return_0 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_146_ap_return_1 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_lut_div3_chunk_fu_152_ap_ready : STD_LOGIC;
    signal grp_lut_div3_chunk_fu_152_d_V : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_152_ap_return_0 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_152_ap_return_1 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_lut_div3_chunk_fu_158_ap_ready : STD_LOGIC;
    signal grp_lut_div3_chunk_fu_158_d_V : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_158_ap_return_0 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_lut_div3_chunk_fu_158_ap_return_1 : STD_LOGIC_VECTOR (1 downto 0);
    signal call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_ready : STD_LOGIC;
    signal call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_return_0 : STD_LOGIC_VECTOR (3 downto 0);
    signal call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_return_1 : STD_LOGIC_VECTOR (1 downto 0);
    signal call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_ready : STD_LOGIC;
    signal call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_return_0 : STD_LOGIC_VECTOR (3 downto 0);
    signal call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_return_1 : STD_LOGIC_VECTOR (1 downto 0);
    signal new_mant_V_1_fu_625_p14 : STD_LOGIC_VECTOR (51 downto 0);
    signal ap_phi_mux_p_Repl2_s_phi_fu_121_p4 : STD_LOGIC_VECTOR (51 downto 0);
    signal p_Repl2_s_reg_118 : STD_LOGIC_VECTOR (51 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal d_chunk_V_fu_474_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Val2_s_fu_226_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_fu_256_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal new_exp_V_fu_238_p4 : STD_LOGIC_VECTOR (10 downto 0);
    signal shift_V_cast_cast_fu_264_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_2_fu_278_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_7_fu_298_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_new_exp_V_1_fu_290_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal new_exp_V_1_fu_284_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_8_fu_324_p4 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_4_fu_312_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_5_fu_318_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp3_demorgan_fu_352_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_fu_334_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp3_fu_358_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp4_fu_364_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal shift_V_fu_340_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal shift_V_1_fu_346_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal shift_V_2_fu_370_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal sel_tmp7_fu_386_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp8_fu_392_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal shift_V_3_fu_378_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal xf_V_5_cast_fu_252_p1 : STD_LOGIC_VECTOR (52 downto 0);
    signal tmp_3_fu_406_p3 : STD_LOGIC_VECTOR (52 downto 0);
    signal xf_V_1_fu_414_p3 : STD_LOGIC_VECTOR (52 downto 0);
    signal shift_V_4_fu_398_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_cast_fu_430_p1 : STD_LOGIC_VECTOR (52 downto 0);
    signal r_V_3_fu_434_p2 : STD_LOGIC_VECTOR (52 downto 0);
    signal p_cast_fu_422_p1 : STD_LOGIC_VECTOR (54 downto 0);
    signal tmp_s_fu_426_p1 : STD_LOGIC_VECTOR (54 downto 0);
    signal r_V_1_cast_fu_440_p1 : STD_LOGIC_VECTOR (54 downto 0);
    signal r_V_4_fu_444_p2 : STD_LOGIC_VECTOR (54 downto 0);
    signal xf_V_3_fu_450_p3 : STD_LOGIC_VECTOR (54 downto 0);
    signal xf_V_fu_458_p2 : STD_LOGIC_VECTOR (54 downto 0);
    signal p_Result_i_i_fu_464_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal p_Result_s_fu_651_p4 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (1 downto 0);

    component lut_div3_chunk IS
    port (
        ap_ready : OUT STD_LOGIC;
        d_V : IN STD_LOGIC_VECTOR (3 downto 0);
        r_in_V : IN STD_LOGIC_VECTOR (1 downto 0);
        ap_return_0 : OUT STD_LOGIC_VECTOR (3 downto 0);
        ap_return_1 : OUT STD_LOGIC_VECTOR (1 downto 0) );
    end component;



begin
    grp_lut_div3_chunk_fu_127 : component lut_div3_chunk
    port map (
        ap_ready => grp_lut_div3_chunk_fu_127_ap_ready,
        d_V => grp_lut_div3_chunk_fu_127_d_V,
        r_in_V => grp_lut_div3_chunk_fu_127_r_in_V,
        ap_return_0 => grp_lut_div3_chunk_fu_127_ap_return_0,
        ap_return_1 => grp_lut_div3_chunk_fu_127_ap_return_1);

    grp_lut_div3_chunk_fu_134 : component lut_div3_chunk
    port map (
        ap_ready => grp_lut_div3_chunk_fu_134_ap_ready,
        d_V => grp_lut_div3_chunk_fu_134_d_V,
        r_in_V => grp_lut_div3_chunk_fu_127_ap_return_1,
        ap_return_0 => grp_lut_div3_chunk_fu_134_ap_return_0,
        ap_return_1 => grp_lut_div3_chunk_fu_134_ap_return_1);

    grp_lut_div3_chunk_fu_140 : component lut_div3_chunk
    port map (
        ap_ready => grp_lut_div3_chunk_fu_140_ap_ready,
        d_V => grp_lut_div3_chunk_fu_140_d_V,
        r_in_V => grp_lut_div3_chunk_fu_134_ap_return_1,
        ap_return_0 => grp_lut_div3_chunk_fu_140_ap_return_0,
        ap_return_1 => grp_lut_div3_chunk_fu_140_ap_return_1);

    grp_lut_div3_chunk_fu_146 : component lut_div3_chunk
    port map (
        ap_ready => grp_lut_div3_chunk_fu_146_ap_ready,
        d_V => grp_lut_div3_chunk_fu_146_d_V,
        r_in_V => grp_lut_div3_chunk_fu_140_ap_return_1,
        ap_return_0 => grp_lut_div3_chunk_fu_146_ap_return_0,
        ap_return_1 => grp_lut_div3_chunk_fu_146_ap_return_1);

    grp_lut_div3_chunk_fu_152 : component lut_div3_chunk
    port map (
        ap_ready => grp_lut_div3_chunk_fu_152_ap_ready,
        d_V => grp_lut_div3_chunk_fu_152_d_V,
        r_in_V => grp_lut_div3_chunk_fu_146_ap_return_1,
        ap_return_0 => grp_lut_div3_chunk_fu_152_ap_return_0,
        ap_return_1 => grp_lut_div3_chunk_fu_152_ap_return_1);

    grp_lut_div3_chunk_fu_158 : component lut_div3_chunk
    port map (
        ap_ready => grp_lut_div3_chunk_fu_158_ap_ready,
        d_V => grp_lut_div3_chunk_fu_158_d_V,
        r_in_V => grp_lut_div3_chunk_fu_152_ap_return_1,
        ap_return_0 => grp_lut_div3_chunk_fu_158_ap_return_0,
        ap_return_1 => grp_lut_div3_chunk_fu_158_ap_return_1);

    call_ret4_10_i_i_lut_div3_chunk_fu_164 : component lut_div3_chunk
    port map (
        ap_ready => call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_ready,
        d_V => p_Result_22_10_i_i_reg_742,
        r_in_V => grp_lut_div3_chunk_fu_158_ap_return_1,
        ap_return_0 => call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_return_0,
        ap_return_1 => call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_return_1);

    call_ret4_11_i_i_lut_div3_chunk_fu_170 : component lut_div3_chunk
    port map (
        ap_ready => call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_ready,
        d_V => tmp_9_reg_747,
        r_in_V => call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_return_1,
        ap_return_0 => call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_return_0,
        ap_return_1 => call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_return_1);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    p_Repl2_s_reg_118_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (tmp_1_fu_272_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                p_Repl2_s_reg_118 <= new_mant_V_fu_248_p1;
            elsif (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                p_Repl2_s_reg_118 <= new_mant_V_1_fu_625_p14;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                p_Repl2_1_reg_677 <= p_Repl2_1_fu_304_p3;
                p_Repl2_2_reg_663 <= p_Val2_s_fu_226_p1(63 downto 63);
                tmp_1_reg_673 <= tmp_1_fu_272_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (tmp_1_fu_272_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                p_Result_22_10_i_i_reg_742 <= xf_V_fu_458_p2(7 downto 4);
                p_Result_22_5_i_i_reg_712 <= xf_V_fu_458_p2(31 downto 28);
                p_Result_22_6_i_i_reg_717 <= xf_V_fu_458_p2(27 downto 24);
                p_Result_22_7_i_i_reg_722 <= xf_V_fu_458_p2(23 downto 20);
                p_Result_22_8_i_i_reg_727 <= xf_V_fu_458_p2(19 downto 16);
                p_Result_22_9_i_i_reg_732 <= xf_V_fu_458_p2(15 downto 12);
                p_Result_22_i_i_8_reg_737 <= xf_V_fu_458_p2(11 downto 8);
                q_chunk_V_ret2_1_i_i_reg_687 <= grp_lut_div3_chunk_fu_140_ap_return_0;
                q_chunk_V_ret2_2_i_i_reg_692 <= grp_lut_div3_chunk_fu_146_ap_return_0;
                q_chunk_V_ret2_3_i_i_reg_697 <= grp_lut_div3_chunk_fu_152_ap_return_0;
                q_chunk_V_ret2_4_i_i_reg_702 <= grp_lut_div3_chunk_fu_158_ap_return_0;
                q_chunk_V_ret2_i_i_reg_682 <= grp_lut_div3_chunk_fu_134_ap_return_0;
                r_V_ret3_4_i_i_reg_707 <= grp_lut_div3_chunk_fu_158_ap_return_1;
                tmp_9_reg_747 <= tmp_9_fu_604_p1;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);

    ap_done_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_p_Repl2_s_phi_fu_121_p4_assign_proc : process(tmp_1_reg_673, new_mant_V_1_fu_625_p14, p_Repl2_s_reg_118, ap_CS_fsm_state2)
    begin
        if (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_phi_mux_p_Repl2_s_phi_fu_121_p4 <= new_mant_V_1_fu_625_p14;
        else 
            ap_phi_mux_p_Repl2_s_phi_fu_121_p4 <= p_Repl2_s_reg_118;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= p_Result_s_fu_651_p4;
    d_chunk_V_fu_474_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Result_i_i_fu_464_p4),4));

    grp_lut_div3_chunk_fu_127_d_V_assign_proc : process(ap_CS_fsm_state1, tmp_1_fu_272_p2, tmp_1_reg_673, p_Result_22_5_i_i_reg_712, ap_CS_fsm_state2, d_chunk_V_fu_474_p1)
    begin
        if (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            grp_lut_div3_chunk_fu_127_d_V <= p_Result_22_5_i_i_reg_712;
        elsif (((tmp_1_fu_272_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            grp_lut_div3_chunk_fu_127_d_V <= d_chunk_V_fu_474_p1;
        else 
            grp_lut_div3_chunk_fu_127_d_V <= "XXXX";
        end if; 
    end process;


    grp_lut_div3_chunk_fu_127_r_in_V_assign_proc : process(ap_CS_fsm_state1, tmp_1_fu_272_p2, tmp_1_reg_673, r_V_ret3_4_i_i_reg_707, ap_CS_fsm_state2)
    begin
        if (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            grp_lut_div3_chunk_fu_127_r_in_V <= r_V_ret3_4_i_i_reg_707;
        elsif (((tmp_1_fu_272_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            grp_lut_div3_chunk_fu_127_r_in_V <= ap_const_lv2_0;
        else 
            grp_lut_div3_chunk_fu_127_r_in_V <= "XX";
        end if; 
    end process;


    grp_lut_div3_chunk_fu_134_d_V_assign_proc : process(ap_CS_fsm_state1, tmp_1_fu_272_p2, tmp_1_reg_673, p_Result_22_6_i_i_reg_717, ap_CS_fsm_state2, xf_V_fu_458_p2)
    begin
        if (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            grp_lut_div3_chunk_fu_134_d_V <= p_Result_22_6_i_i_reg_717;
        elsif (((tmp_1_fu_272_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            grp_lut_div3_chunk_fu_134_d_V <= xf_V_fu_458_p2(51 downto 48);
        else 
            grp_lut_div3_chunk_fu_134_d_V <= "XXXX";
        end if; 
    end process;


    grp_lut_div3_chunk_fu_140_d_V_assign_proc : process(ap_CS_fsm_state1, tmp_1_fu_272_p2, tmp_1_reg_673, p_Result_22_7_i_i_reg_722, ap_CS_fsm_state2, xf_V_fu_458_p2)
    begin
        if (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            grp_lut_div3_chunk_fu_140_d_V <= p_Result_22_7_i_i_reg_722;
        elsif (((tmp_1_fu_272_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            grp_lut_div3_chunk_fu_140_d_V <= xf_V_fu_458_p2(47 downto 44);
        else 
            grp_lut_div3_chunk_fu_140_d_V <= "XXXX";
        end if; 
    end process;


    grp_lut_div3_chunk_fu_146_d_V_assign_proc : process(ap_CS_fsm_state1, tmp_1_fu_272_p2, tmp_1_reg_673, p_Result_22_8_i_i_reg_727, ap_CS_fsm_state2, xf_V_fu_458_p2)
    begin
        if (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            grp_lut_div3_chunk_fu_146_d_V <= p_Result_22_8_i_i_reg_727;
        elsif (((tmp_1_fu_272_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            grp_lut_div3_chunk_fu_146_d_V <= xf_V_fu_458_p2(43 downto 40);
        else 
            grp_lut_div3_chunk_fu_146_d_V <= "XXXX";
        end if; 
    end process;


    grp_lut_div3_chunk_fu_152_d_V_assign_proc : process(ap_CS_fsm_state1, tmp_1_fu_272_p2, tmp_1_reg_673, p_Result_22_9_i_i_reg_732, ap_CS_fsm_state2, xf_V_fu_458_p2)
    begin
        if (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            grp_lut_div3_chunk_fu_152_d_V <= p_Result_22_9_i_i_reg_732;
        elsif (((tmp_1_fu_272_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            grp_lut_div3_chunk_fu_152_d_V <= xf_V_fu_458_p2(39 downto 36);
        else 
            grp_lut_div3_chunk_fu_152_d_V <= "XXXX";
        end if; 
    end process;


    grp_lut_div3_chunk_fu_158_d_V_assign_proc : process(ap_CS_fsm_state1, tmp_1_fu_272_p2, tmp_1_reg_673, p_Result_22_i_i_8_reg_737, ap_CS_fsm_state2, xf_V_fu_458_p2)
    begin
        if (((tmp_1_reg_673 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            grp_lut_div3_chunk_fu_158_d_V <= p_Result_22_i_i_8_reg_737;
        elsif (((tmp_1_fu_272_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            grp_lut_div3_chunk_fu_158_d_V <= xf_V_fu_458_p2(35 downto 32);
        else 
            grp_lut_div3_chunk_fu_158_d_V <= "XXXX";
        end if; 
    end process;

    icmp_fu_334_p2 <= "1" when (tmp_8_fu_324_p4 = ap_const_lv10_0) else "0";
    new_exp_V_1_fu_284_p2 <= std_logic_vector(unsigned(new_exp_V_fu_238_p4) - unsigned(shift_V_cast_cast_fu_264_p3));
    new_exp_V_fu_238_p4 <= p_Val2_s_fu_226_p1(62 downto 52);
    new_mant_V_1_fu_625_p14 <= ((((((((((((q_chunk_V_ret2_i_i_reg_682 & q_chunk_V_ret2_1_i_i_reg_687) & q_chunk_V_ret2_2_i_i_reg_692) & q_chunk_V_ret2_3_i_i_reg_697) & q_chunk_V_ret2_4_i_i_reg_702) & grp_lut_div3_chunk_fu_127_ap_return_0) & grp_lut_div3_chunk_fu_134_ap_return_0) & grp_lut_div3_chunk_fu_140_ap_return_0) & grp_lut_div3_chunk_fu_146_ap_return_0) & grp_lut_div3_chunk_fu_152_ap_return_0) & grp_lut_div3_chunk_fu_158_ap_return_0) & call_ret4_10_i_i_lut_div3_chunk_fu_164_ap_return_0) & call_ret4_11_i_i_lut_div3_chunk_fu_170_ap_return_0);
    new_mant_V_fu_248_p1 <= p_Val2_s_fu_226_p1(52 - 1 downto 0);
    p_Repl2_1_fu_304_p3 <= 
        p_new_exp_V_1_fu_290_p3 when (tmp_7_fu_298_p2(0) = '1') else 
        new_exp_V_1_fu_284_p2;
    p_Result_i_i_fu_464_p4 <= xf_V_fu_458_p2(54 downto 52);
    p_Result_s_fu_651_p4 <= ((p_Repl2_2_reg_663 & p_Repl2_1_reg_677) & ap_phi_mux_p_Repl2_s_phi_fu_121_p4);
    p_Val2_s_fu_226_p1 <= in_r;
    p_cast_fu_422_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(xf_V_1_fu_414_p3),55));
    p_new_exp_V_1_fu_290_p3 <= 
        ap_const_lv11_7FF when (tmp_1_fu_272_p2(0) = '1') else 
        ap_const_lv11_0;
    r_V_1_cast_fu_440_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_V_3_fu_434_p2),55));
    r_V_3_fu_434_p2 <= std_logic_vector(shift_right(unsigned(xf_V_1_fu_414_p3),to_integer(unsigned('0' & tmp_cast_fu_430_p1(31-1 downto 0)))));
    r_V_4_fu_444_p2 <= std_logic_vector(shift_left(unsigned(p_cast_fu_422_p1),to_integer(unsigned('0' & tmp_s_fu_426_p1(31-1 downto 0)))));
    sel_tmp3_demorgan_fu_352_p2 <= (tmp_5_fu_318_p2 or tmp_4_fu_312_p2);
    sel_tmp3_fu_358_p2 <= (sel_tmp3_demorgan_fu_352_p2 xor ap_const_lv1_1);
    sel_tmp4_fu_364_p2 <= (sel_tmp3_fu_358_p2 and icmp_fu_334_p2);
    sel_tmp7_fu_386_p2 <= (tmp_4_fu_312_p2 xor ap_const_lv1_1);
    sel_tmp8_fu_392_p2 <= (tmp_5_fu_318_p2 and sel_tmp7_fu_386_p2);
    shift_V_1_fu_346_p2 <= std_logic_vector(signed(ap_const_lv11_7FF) + signed(new_exp_V_fu_238_p4));
    shift_V_2_fu_370_p3 <= 
        shift_V_fu_340_p2 when (sel_tmp4_fu_364_p2(0) = '1') else 
        shift_V_1_fu_346_p2;
    shift_V_3_fu_378_p3 <= 
        ap_const_lv11_0 when (tmp_4_fu_312_p2(0) = '1') else 
        shift_V_2_fu_370_p3;
    shift_V_4_fu_398_p3 <= 
        shift_V_cast_cast_fu_264_p3 when (sel_tmp8_fu_392_p2(0) = '1') else 
        shift_V_3_fu_378_p3;
    shift_V_cast_cast_fu_264_p3 <= 
        ap_const_lv11_1 when (tmp_fu_256_p3(0) = '1') else 
        ap_const_lv11_2;
    shift_V_fu_340_p2 <= std_logic_vector(unsigned(ap_const_lv11_1) - unsigned(new_exp_V_fu_238_p4));
    tmp_1_fu_272_p2 <= "1" when (new_exp_V_fu_238_p4 = ap_const_lv11_7FF) else "0";
    tmp_2_fu_278_p2 <= "1" when (unsigned(shift_V_cast_cast_fu_264_p3) > unsigned(new_exp_V_fu_238_p4)) else "0";
    tmp_3_fu_406_p3 <= (ap_const_lv1_1 & new_mant_V_fu_248_p1);
    tmp_4_fu_312_p2 <= "1" when (new_exp_V_fu_238_p4 = ap_const_lv11_0) else "0";
    tmp_5_fu_318_p2 <= "1" when (unsigned(shift_V_cast_cast_fu_264_p3) < unsigned(new_exp_V_fu_238_p4)) else "0";
    tmp_7_fu_298_p2 <= (tmp_2_fu_278_p2 or tmp_1_fu_272_p2);
    tmp_8_fu_324_p4 <= p_Val2_s_fu_226_p1(62 downto 53);
    tmp_9_fu_604_p1 <= xf_V_fu_458_p2(4 - 1 downto 0);
    tmp_cast_fu_430_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(shift_V_4_fu_398_p3),53));
    tmp_fu_256_p3 <= p_Val2_s_fu_226_p1(51 downto 51);
    tmp_s_fu_426_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(shift_V_4_fu_398_p3),55));
    xf_V_1_fu_414_p3 <= 
        xf_V_5_cast_fu_252_p1 when (tmp_4_fu_312_p2(0) = '1') else 
        tmp_3_fu_406_p3;
    xf_V_3_fu_450_p3 <= 
        r_V_1_cast_fu_440_p1 when (icmp_fu_334_p2(0) = '1') else 
        r_V_4_fu_444_p2;
    xf_V_5_cast_fu_252_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(new_mant_V_fu_248_p1),53));
    xf_V_fu_458_p2 <= std_logic_vector(unsigned(ap_const_lv55_1) + unsigned(xf_V_3_fu_450_p3));
end behav;
