-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity float_div2 is
port (
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    in_r : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of float_div2 is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "float_div2,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.231000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=0,HLS_SYN_LUT=247,HLS_VERSION=2018_2}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_1E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011110";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv23_7FFFFF : STD_LOGIC_VECTOR (22 downto 0) := "11111111111111111111111";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_18 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011000";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_16 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010110";
    constant ap_const_lv23_1 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal p_Val2_s_fu_58_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal new_exp_V_4_fu_70_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_1_fu_80_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_6_fu_90_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_4_fu_84_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp_fu_108_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp1_fu_114_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp2_fu_120_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_fu_96_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp3_fu_126_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal new_exp_V_1_fu_102_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal new_exp_V_2_fu_132_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal new_exp_V_3_fu_140_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_5_fu_162_p4 : STD_LOGIC_VECTOR (6 downto 0);
    signal r_V_fu_178_p4 : STD_LOGIC_VECTOR (21 downto 0);
    signal tmp_7_fu_192_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_8_fu_196_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal r_V_2_fu_188_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_1_fu_204_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal new_mant_V_fu_210_p2 : STD_LOGIC_VECTOR (22 downto 0);
    signal icmp_fu_172_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal new_mant_V_2_fu_216_p3 : STD_LOGIC_VECTOR (22 downto 0);
    signal new_mant_V_7_fu_224_p3 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_s_fu_156_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_9_fu_232_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp4_fu_240_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal not_sel_tmp_fu_246_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal new_mant_V_5_fu_252_p4 : STD_LOGIC_VECTOR (22 downto 0);
    signal p_Repl2_2_fu_62_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal new_exp_V_fu_148_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal new_mant_V_8_fu_262_p3 : STD_LOGIC_VECTOR (22 downto 0);
    signal p_Result_s_fu_270_p4 : STD_LOGIC_VECTOR (31 downto 0);


begin



    ap_done <= ap_start;
    ap_idle <= ap_const_logic_1;
    ap_ready <= ap_start;
    ap_return <= p_Result_s_fu_270_p4;
    icmp_fu_172_p2 <= "1" when (tmp_5_fu_162_p4 = ap_const_lv7_0) else "0";
    new_exp_V_1_fu_102_p2 <= std_logic_vector(signed(ap_const_lv8_FF) + signed(new_exp_V_4_fu_70_p4));
    new_exp_V_2_fu_132_p3 <= 
        new_exp_V_4_fu_70_p4 when (sel_tmp3_fu_126_p2(0) = '1') else 
        new_exp_V_1_fu_102_p2;
    new_exp_V_3_fu_140_p3 <= 
        new_exp_V_2_fu_132_p3 when (tmp_fu_96_p2(0) = '1') else 
        new_exp_V_4_fu_70_p4;
    new_exp_V_4_fu_70_p4 <= p_Val2_s_fu_58_p1(30 downto 23);
    new_exp_V_fu_148_p3 <= 
        new_exp_V_4_fu_70_p4 when (sel_tmp3_fu_126_p2(0) = '1') else 
        new_exp_V_3_fu_140_p3;
    new_mant_V_2_fu_216_p3 <= 
        new_mant_V_fu_210_p2 when (tmp_1_fu_204_p2(0) = '1') else 
        r_V_2_fu_188_p1;
    
    new_mant_V_5_fu_252_p4_proc : process(new_mant_V_7_fu_224_p3, not_sel_tmp_fu_246_p2)
    begin
        new_mant_V_5_fu_252_p4 <= new_mant_V_7_fu_224_p3;
        new_mant_V_5_fu_252_p4(22) <= not_sel_tmp_fu_246_p2(0);
    end process;

    new_mant_V_7_fu_224_p3 <= 
        new_mant_V_2_fu_216_p3 when (icmp_fu_172_p2(0) = '1') else 
        p_Val2_1_fu_80_p1;
    new_mant_V_8_fu_262_p3 <= 
        new_mant_V_5_fu_252_p4 when (tmp_s_fu_156_p2(0) = '1') else 
        new_mant_V_7_fu_224_p3;
    new_mant_V_fu_210_p2 <= std_logic_vector(unsigned(ap_const_lv23_1) + unsigned(r_V_2_fu_188_p1));
    not_sel_tmp_fu_246_p2 <= (sel_tmp4_fu_240_p2 xor ap_const_lv1_1);
    p_Repl2_2_fu_62_p3 <= p_Val2_s_fu_58_p1(31 downto 31);
    p_Result_s_fu_270_p4 <= ((p_Repl2_2_fu_62_p3 & new_exp_V_fu_148_p3) & new_mant_V_8_fu_262_p3);
    p_Val2_1_fu_80_p1 <= p_Val2_s_fu_58_p1(23 - 1 downto 0);
    p_Val2_s_fu_58_p1 <= in_r;
    r_V_2_fu_188_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_V_fu_178_p4),23));
    r_V_fu_178_p4 <= p_Val2_s_fu_58_p1(22 downto 1);
    sel_tmp1_fu_114_p2 <= "1" when (new_exp_V_4_fu_70_p4 = ap_const_lv8_0) else "0";
    sel_tmp2_fu_120_p2 <= (sel_tmp_fu_108_p2 or sel_tmp1_fu_114_p2);
    sel_tmp3_fu_126_p2 <= (tmp_fu_96_p2 and sel_tmp2_fu_120_p2);
    sel_tmp4_fu_240_p2 <= (tmp_s_fu_156_p2 and tmp_9_fu_232_p3);
    sel_tmp_fu_108_p2 <= "1" when (new_exp_V_4_fu_70_p4 = ap_const_lv8_FF) else "0";
    tmp_1_fu_204_p2 <= (tmp_8_fu_196_p3 and tmp_7_fu_192_p1);
    tmp_4_fu_84_p2 <= "0" when (new_exp_V_4_fu_70_p4 = ap_const_lv8_1) else "1";
    tmp_5_fu_162_p4 <= p_Val2_s_fu_58_p1(30 downto 24);
    tmp_6_fu_90_p2 <= "0" when (p_Val2_1_fu_80_p1 = ap_const_lv23_7FFFFF) else "1";
    tmp_7_fu_192_p1 <= p_Val2_s_fu_58_p1(1 - 1 downto 0);
    tmp_8_fu_196_p3 <= p_Val2_s_fu_58_p1(1 downto 1);
    tmp_9_fu_232_p3 <= new_mant_V_7_fu_224_p3(22 downto 22);
    tmp_fu_96_p2 <= (tmp_6_fu_90_p2 or tmp_4_fu_84_p2);
    tmp_s_fu_156_p2 <= "1" when (new_exp_V_4_fu_70_p4 = ap_const_lv8_1) else "0";
end behav;
