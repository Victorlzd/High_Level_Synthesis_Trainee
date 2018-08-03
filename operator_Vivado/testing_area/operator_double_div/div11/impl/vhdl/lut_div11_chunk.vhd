-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity lut_div11_chunk is
port (
    ap_ready : OUT STD_LOGIC;
    d_V : IN STD_LOGIC_VECTOR (1 downto 0);
    r_in_V : IN STD_LOGIC_VECTOR (3 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (1 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (3 downto 0) );
end;


architecture behav of lut_div11_chunk is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal p_Result_8_fu_34_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal agg_result_V_i6_fu_444_p66 : STD_LOGIC_VECTOR (0 downto 0);
    signal agg_result_V_i4_fu_310_p66 : STD_LOGIC_VECTOR (0 downto 0);
    signal agg_result_V_i2_fu_176_p66 : STD_LOGIC_VECTOR (0 downto 0);
    signal agg_result_V_i_fu_42_p66 : STD_LOGIC_VECTOR (0 downto 0);
    signal agg_result_V_i1_fu_724_p66 : STD_LOGIC_VECTOR (0 downto 0);
    signal agg_result_V_i8_fu_590_p66 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Result_1_fu_858_p3 : STD_LOGIC_VECTOR (1 downto 0);
    signal p_Result_s_fu_578_p5 : STD_LOGIC_VECTOR (3 downto 0);

    component operator_double_dbkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        din5_WIDTH : INTEGER;
        din6_WIDTH : INTEGER;
        din7_WIDTH : INTEGER;
        din8_WIDTH : INTEGER;
        din9_WIDTH : INTEGER;
        din10_WIDTH : INTEGER;
        din11_WIDTH : INTEGER;
        din12_WIDTH : INTEGER;
        din13_WIDTH : INTEGER;
        din14_WIDTH : INTEGER;
        din15_WIDTH : INTEGER;
        din16_WIDTH : INTEGER;
        din17_WIDTH : INTEGER;
        din18_WIDTH : INTEGER;
        din19_WIDTH : INTEGER;
        din20_WIDTH : INTEGER;
        din21_WIDTH : INTEGER;
        din22_WIDTH : INTEGER;
        din23_WIDTH : INTEGER;
        din24_WIDTH : INTEGER;
        din25_WIDTH : INTEGER;
        din26_WIDTH : INTEGER;
        din27_WIDTH : INTEGER;
        din28_WIDTH : INTEGER;
        din29_WIDTH : INTEGER;
        din30_WIDTH : INTEGER;
        din31_WIDTH : INTEGER;
        din32_WIDTH : INTEGER;
        din33_WIDTH : INTEGER;
        din34_WIDTH : INTEGER;
        din35_WIDTH : INTEGER;
        din36_WIDTH : INTEGER;
        din37_WIDTH : INTEGER;
        din38_WIDTH : INTEGER;
        din39_WIDTH : INTEGER;
        din40_WIDTH : INTEGER;
        din41_WIDTH : INTEGER;
        din42_WIDTH : INTEGER;
        din43_WIDTH : INTEGER;
        din44_WIDTH : INTEGER;
        din45_WIDTH : INTEGER;
        din46_WIDTH : INTEGER;
        din47_WIDTH : INTEGER;
        din48_WIDTH : INTEGER;
        din49_WIDTH : INTEGER;
        din50_WIDTH : INTEGER;
        din51_WIDTH : INTEGER;
        din52_WIDTH : INTEGER;
        din53_WIDTH : INTEGER;
        din54_WIDTH : INTEGER;
        din55_WIDTH : INTEGER;
        din56_WIDTH : INTEGER;
        din57_WIDTH : INTEGER;
        din58_WIDTH : INTEGER;
        din59_WIDTH : INTEGER;
        din60_WIDTH : INTEGER;
        din61_WIDTH : INTEGER;
        din62_WIDTH : INTEGER;
        din63_WIDTH : INTEGER;
        din64_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (0 downto 0);
        din1 : IN STD_LOGIC_VECTOR (0 downto 0);
        din2 : IN STD_LOGIC_VECTOR (0 downto 0);
        din3 : IN STD_LOGIC_VECTOR (0 downto 0);
        din4 : IN STD_LOGIC_VECTOR (0 downto 0);
        din5 : IN STD_LOGIC_VECTOR (0 downto 0);
        din6 : IN STD_LOGIC_VECTOR (0 downto 0);
        din7 : IN STD_LOGIC_VECTOR (0 downto 0);
        din8 : IN STD_LOGIC_VECTOR (0 downto 0);
        din9 : IN STD_LOGIC_VECTOR (0 downto 0);
        din10 : IN STD_LOGIC_VECTOR (0 downto 0);
        din11 : IN STD_LOGIC_VECTOR (0 downto 0);
        din12 : IN STD_LOGIC_VECTOR (0 downto 0);
        din13 : IN STD_LOGIC_VECTOR (0 downto 0);
        din14 : IN STD_LOGIC_VECTOR (0 downto 0);
        din15 : IN STD_LOGIC_VECTOR (0 downto 0);
        din16 : IN STD_LOGIC_VECTOR (0 downto 0);
        din17 : IN STD_LOGIC_VECTOR (0 downto 0);
        din18 : IN STD_LOGIC_VECTOR (0 downto 0);
        din19 : IN STD_LOGIC_VECTOR (0 downto 0);
        din20 : IN STD_LOGIC_VECTOR (0 downto 0);
        din21 : IN STD_LOGIC_VECTOR (0 downto 0);
        din22 : IN STD_LOGIC_VECTOR (0 downto 0);
        din23 : IN STD_LOGIC_VECTOR (0 downto 0);
        din24 : IN STD_LOGIC_VECTOR (0 downto 0);
        din25 : IN STD_LOGIC_VECTOR (0 downto 0);
        din26 : IN STD_LOGIC_VECTOR (0 downto 0);
        din27 : IN STD_LOGIC_VECTOR (0 downto 0);
        din28 : IN STD_LOGIC_VECTOR (0 downto 0);
        din29 : IN STD_LOGIC_VECTOR (0 downto 0);
        din30 : IN STD_LOGIC_VECTOR (0 downto 0);
        din31 : IN STD_LOGIC_VECTOR (0 downto 0);
        din32 : IN STD_LOGIC_VECTOR (0 downto 0);
        din33 : IN STD_LOGIC_VECTOR (0 downto 0);
        din34 : IN STD_LOGIC_VECTOR (0 downto 0);
        din35 : IN STD_LOGIC_VECTOR (0 downto 0);
        din36 : IN STD_LOGIC_VECTOR (0 downto 0);
        din37 : IN STD_LOGIC_VECTOR (0 downto 0);
        din38 : IN STD_LOGIC_VECTOR (0 downto 0);
        din39 : IN STD_LOGIC_VECTOR (0 downto 0);
        din40 : IN STD_LOGIC_VECTOR (0 downto 0);
        din41 : IN STD_LOGIC_VECTOR (0 downto 0);
        din42 : IN STD_LOGIC_VECTOR (0 downto 0);
        din43 : IN STD_LOGIC_VECTOR (0 downto 0);
        din44 : IN STD_LOGIC_VECTOR (0 downto 0);
        din45 : IN STD_LOGIC_VECTOR (0 downto 0);
        din46 : IN STD_LOGIC_VECTOR (0 downto 0);
        din47 : IN STD_LOGIC_VECTOR (0 downto 0);
        din48 : IN STD_LOGIC_VECTOR (0 downto 0);
        din49 : IN STD_LOGIC_VECTOR (0 downto 0);
        din50 : IN STD_LOGIC_VECTOR (0 downto 0);
        din51 : IN STD_LOGIC_VECTOR (0 downto 0);
        din52 : IN STD_LOGIC_VECTOR (0 downto 0);
        din53 : IN STD_LOGIC_VECTOR (0 downto 0);
        din54 : IN STD_LOGIC_VECTOR (0 downto 0);
        din55 : IN STD_LOGIC_VECTOR (0 downto 0);
        din56 : IN STD_LOGIC_VECTOR (0 downto 0);
        din57 : IN STD_LOGIC_VECTOR (0 downto 0);
        din58 : IN STD_LOGIC_VECTOR (0 downto 0);
        din59 : IN STD_LOGIC_VECTOR (0 downto 0);
        din60 : IN STD_LOGIC_VECTOR (0 downto 0);
        din61 : IN STD_LOGIC_VECTOR (0 downto 0);
        din62 : IN STD_LOGIC_VECTOR (0 downto 0);
        din63 : IN STD_LOGIC_VECTOR (0 downto 0);
        din64 : IN STD_LOGIC_VECTOR (5 downto 0);
        dout : OUT STD_LOGIC_VECTOR (0 downto 0) );
    end component;



begin
    operator_double_dbkb_U1 : component operator_double_dbkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 1,
        din1_WIDTH => 1,
        din2_WIDTH => 1,
        din3_WIDTH => 1,
        din4_WIDTH => 1,
        din5_WIDTH => 1,
        din6_WIDTH => 1,
        din7_WIDTH => 1,
        din8_WIDTH => 1,
        din9_WIDTH => 1,
        din10_WIDTH => 1,
        din11_WIDTH => 1,
        din12_WIDTH => 1,
        din13_WIDTH => 1,
        din14_WIDTH => 1,
        din15_WIDTH => 1,
        din16_WIDTH => 1,
        din17_WIDTH => 1,
        din18_WIDTH => 1,
        din19_WIDTH => 1,
        din20_WIDTH => 1,
        din21_WIDTH => 1,
        din22_WIDTH => 1,
        din23_WIDTH => 1,
        din24_WIDTH => 1,
        din25_WIDTH => 1,
        din26_WIDTH => 1,
        din27_WIDTH => 1,
        din28_WIDTH => 1,
        din29_WIDTH => 1,
        din30_WIDTH => 1,
        din31_WIDTH => 1,
        din32_WIDTH => 1,
        din33_WIDTH => 1,
        din34_WIDTH => 1,
        din35_WIDTH => 1,
        din36_WIDTH => 1,
        din37_WIDTH => 1,
        din38_WIDTH => 1,
        din39_WIDTH => 1,
        din40_WIDTH => 1,
        din41_WIDTH => 1,
        din42_WIDTH => 1,
        din43_WIDTH => 1,
        din44_WIDTH => 1,
        din45_WIDTH => 1,
        din46_WIDTH => 1,
        din47_WIDTH => 1,
        din48_WIDTH => 1,
        din49_WIDTH => 1,
        din50_WIDTH => 1,
        din51_WIDTH => 1,
        din52_WIDTH => 1,
        din53_WIDTH => 1,
        din54_WIDTH => 1,
        din55_WIDTH => 1,
        din56_WIDTH => 1,
        din57_WIDTH => 1,
        din58_WIDTH => 1,
        din59_WIDTH => 1,
        din60_WIDTH => 1,
        din61_WIDTH => 1,
        din62_WIDTH => 1,
        din63_WIDTH => 1,
        din64_WIDTH => 6,
        dout_WIDTH => 1)
    port map (
        din0 => ap_const_lv1_0,
        din1 => ap_const_lv1_1,
        din2 => ap_const_lv1_0,
        din3 => ap_const_lv1_1,
        din4 => ap_const_lv1_0,
        din5 => ap_const_lv1_1,
        din6 => ap_const_lv1_0,
        din7 => ap_const_lv1_1,
        din8 => ap_const_lv1_0,
        din9 => ap_const_lv1_1,
        din10 => ap_const_lv1_0,
        din11 => ap_const_lv1_0,
        din12 => ap_const_lv1_1,
        din13 => ap_const_lv1_0,
        din14 => ap_const_lv1_1,
        din15 => ap_const_lv1_0,
        din16 => ap_const_lv1_1,
        din17 => ap_const_lv1_0,
        din18 => ap_const_lv1_1,
        din19 => ap_const_lv1_0,
        din20 => ap_const_lv1_1,
        din21 => ap_const_lv1_0,
        din22 => ap_const_lv1_0,
        din23 => ap_const_lv1_1,
        din24 => ap_const_lv1_0,
        din25 => ap_const_lv1_1,
        din26 => ap_const_lv1_0,
        din27 => ap_const_lv1_1,
        din28 => ap_const_lv1_0,
        din29 => ap_const_lv1_1,
        din30 => ap_const_lv1_0,
        din31 => ap_const_lv1_1,
        din32 => ap_const_lv1_0,
        din33 => ap_const_lv1_0,
        din34 => ap_const_lv1_1,
        din35 => ap_const_lv1_0,
        din36 => ap_const_lv1_1,
        din37 => ap_const_lv1_0,
        din38 => ap_const_lv1_1,
        din39 => ap_const_lv1_0,
        din40 => ap_const_lv1_1,
        din41 => ap_const_lv1_0,
        din42 => ap_const_lv1_1,
        din43 => ap_const_lv1_0,
        din44 => ap_const_lv1_0,
        din45 => ap_const_lv1_1,
        din46 => ap_const_lv1_0,
        din47 => ap_const_lv1_1,
        din48 => ap_const_lv1_0,
        din49 => ap_const_lv1_1,
        din50 => ap_const_lv1_0,
        din51 => ap_const_lv1_1,
        din52 => ap_const_lv1_0,
        din53 => ap_const_lv1_1,
        din54 => ap_const_lv1_0,
        din55 => ap_const_lv1_0,
        din56 => ap_const_lv1_1,
        din57 => ap_const_lv1_0,
        din58 => ap_const_lv1_1,
        din59 => ap_const_lv1_0,
        din60 => ap_const_lv1_1,
        din61 => ap_const_lv1_0,
        din62 => ap_const_lv1_1,
        din63 => ap_const_lv1_0,
        din64 => p_Result_8_fu_34_p3,
        dout => agg_result_V_i_fu_42_p66);

    operator_double_dbkb_U2 : component operator_double_dbkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 1,
        din1_WIDTH => 1,
        din2_WIDTH => 1,
        din3_WIDTH => 1,
        din4_WIDTH => 1,
        din5_WIDTH => 1,
        din6_WIDTH => 1,
        din7_WIDTH => 1,
        din8_WIDTH => 1,
        din9_WIDTH => 1,
        din10_WIDTH => 1,
        din11_WIDTH => 1,
        din12_WIDTH => 1,
        din13_WIDTH => 1,
        din14_WIDTH => 1,
        din15_WIDTH => 1,
        din16_WIDTH => 1,
        din17_WIDTH => 1,
        din18_WIDTH => 1,
        din19_WIDTH => 1,
        din20_WIDTH => 1,
        din21_WIDTH => 1,
        din22_WIDTH => 1,
        din23_WIDTH => 1,
        din24_WIDTH => 1,
        din25_WIDTH => 1,
        din26_WIDTH => 1,
        din27_WIDTH => 1,
        din28_WIDTH => 1,
        din29_WIDTH => 1,
        din30_WIDTH => 1,
        din31_WIDTH => 1,
        din32_WIDTH => 1,
        din33_WIDTH => 1,
        din34_WIDTH => 1,
        din35_WIDTH => 1,
        din36_WIDTH => 1,
        din37_WIDTH => 1,
        din38_WIDTH => 1,
        din39_WIDTH => 1,
        din40_WIDTH => 1,
        din41_WIDTH => 1,
        din42_WIDTH => 1,
        din43_WIDTH => 1,
        din44_WIDTH => 1,
        din45_WIDTH => 1,
        din46_WIDTH => 1,
        din47_WIDTH => 1,
        din48_WIDTH => 1,
        din49_WIDTH => 1,
        din50_WIDTH => 1,
        din51_WIDTH => 1,
        din52_WIDTH => 1,
        din53_WIDTH => 1,
        din54_WIDTH => 1,
        din55_WIDTH => 1,
        din56_WIDTH => 1,
        din57_WIDTH => 1,
        din58_WIDTH => 1,
        din59_WIDTH => 1,
        din60_WIDTH => 1,
        din61_WIDTH => 1,
        din62_WIDTH => 1,
        din63_WIDTH => 1,
        din64_WIDTH => 6,
        dout_WIDTH => 1)
    port map (
        din0 => ap_const_lv1_0,
        din1 => ap_const_lv1_0,
        din2 => ap_const_lv1_1,
        din3 => ap_const_lv1_1,
        din4 => ap_const_lv1_0,
        din5 => ap_const_lv1_0,
        din6 => ap_const_lv1_1,
        din7 => ap_const_lv1_1,
        din8 => ap_const_lv1_0,
        din9 => ap_const_lv1_0,
        din10 => ap_const_lv1_1,
        din11 => ap_const_lv1_0,
        din12 => ap_const_lv1_0,
        din13 => ap_const_lv1_1,
        din14 => ap_const_lv1_1,
        din15 => ap_const_lv1_0,
        din16 => ap_const_lv1_0,
        din17 => ap_const_lv1_1,
        din18 => ap_const_lv1_1,
        din19 => ap_const_lv1_0,
        din20 => ap_const_lv1_0,
        din21 => ap_const_lv1_1,
        din22 => ap_const_lv1_0,
        din23 => ap_const_lv1_0,
        din24 => ap_const_lv1_1,
        din25 => ap_const_lv1_1,
        din26 => ap_const_lv1_0,
        din27 => ap_const_lv1_0,
        din28 => ap_const_lv1_1,
        din29 => ap_const_lv1_1,
        din30 => ap_const_lv1_0,
        din31 => ap_const_lv1_0,
        din32 => ap_const_lv1_1,
        din33 => ap_const_lv1_0,
        din34 => ap_const_lv1_0,
        din35 => ap_const_lv1_1,
        din36 => ap_const_lv1_1,
        din37 => ap_const_lv1_0,
        din38 => ap_const_lv1_0,
        din39 => ap_const_lv1_1,
        din40 => ap_const_lv1_1,
        din41 => ap_const_lv1_0,
        din42 => ap_const_lv1_0,
        din43 => ap_const_lv1_1,
        din44 => ap_const_lv1_0,
        din45 => ap_const_lv1_0,
        din46 => ap_const_lv1_1,
        din47 => ap_const_lv1_1,
        din48 => ap_const_lv1_0,
        din49 => ap_const_lv1_0,
        din50 => ap_const_lv1_1,
        din51 => ap_const_lv1_1,
        din52 => ap_const_lv1_0,
        din53 => ap_const_lv1_0,
        din54 => ap_const_lv1_1,
        din55 => ap_const_lv1_0,
        din56 => ap_const_lv1_0,
        din57 => ap_const_lv1_1,
        din58 => ap_const_lv1_1,
        din59 => ap_const_lv1_0,
        din60 => ap_const_lv1_0,
        din61 => ap_const_lv1_1,
        din62 => ap_const_lv1_1,
        din63 => ap_const_lv1_0,
        din64 => p_Result_8_fu_34_p3,
        dout => agg_result_V_i2_fu_176_p66);

    operator_double_dbkb_U3 : component operator_double_dbkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 1,
        din1_WIDTH => 1,
        din2_WIDTH => 1,
        din3_WIDTH => 1,
        din4_WIDTH => 1,
        din5_WIDTH => 1,
        din6_WIDTH => 1,
        din7_WIDTH => 1,
        din8_WIDTH => 1,
        din9_WIDTH => 1,
        din10_WIDTH => 1,
        din11_WIDTH => 1,
        din12_WIDTH => 1,
        din13_WIDTH => 1,
        din14_WIDTH => 1,
        din15_WIDTH => 1,
        din16_WIDTH => 1,
        din17_WIDTH => 1,
        din18_WIDTH => 1,
        din19_WIDTH => 1,
        din20_WIDTH => 1,
        din21_WIDTH => 1,
        din22_WIDTH => 1,
        din23_WIDTH => 1,
        din24_WIDTH => 1,
        din25_WIDTH => 1,
        din26_WIDTH => 1,
        din27_WIDTH => 1,
        din28_WIDTH => 1,
        din29_WIDTH => 1,
        din30_WIDTH => 1,
        din31_WIDTH => 1,
        din32_WIDTH => 1,
        din33_WIDTH => 1,
        din34_WIDTH => 1,
        din35_WIDTH => 1,
        din36_WIDTH => 1,
        din37_WIDTH => 1,
        din38_WIDTH => 1,
        din39_WIDTH => 1,
        din40_WIDTH => 1,
        din41_WIDTH => 1,
        din42_WIDTH => 1,
        din43_WIDTH => 1,
        din44_WIDTH => 1,
        din45_WIDTH => 1,
        din46_WIDTH => 1,
        din47_WIDTH => 1,
        din48_WIDTH => 1,
        din49_WIDTH => 1,
        din50_WIDTH => 1,
        din51_WIDTH => 1,
        din52_WIDTH => 1,
        din53_WIDTH => 1,
        din54_WIDTH => 1,
        din55_WIDTH => 1,
        din56_WIDTH => 1,
        din57_WIDTH => 1,
        din58_WIDTH => 1,
        din59_WIDTH => 1,
        din60_WIDTH => 1,
        din61_WIDTH => 1,
        din62_WIDTH => 1,
        din63_WIDTH => 1,
        din64_WIDTH => 6,
        dout_WIDTH => 1)
    port map (
        din0 => ap_const_lv1_0,
        din1 => ap_const_lv1_0,
        din2 => ap_const_lv1_0,
        din3 => ap_const_lv1_0,
        din4 => ap_const_lv1_1,
        din5 => ap_const_lv1_1,
        din6 => ap_const_lv1_1,
        din7 => ap_const_lv1_1,
        din8 => ap_const_lv1_0,
        din9 => ap_const_lv1_0,
        din10 => ap_const_lv1_0,
        din11 => ap_const_lv1_0,
        din12 => ap_const_lv1_0,
        din13 => ap_const_lv1_0,
        din14 => ap_const_lv1_0,
        din15 => ap_const_lv1_1,
        din16 => ap_const_lv1_1,
        din17 => ap_const_lv1_1,
        din18 => ap_const_lv1_1,
        din19 => ap_const_lv1_0,
        din20 => ap_const_lv1_0,
        din21 => ap_const_lv1_0,
        din22 => ap_const_lv1_0,
        din23 => ap_const_lv1_0,
        din24 => ap_const_lv1_0,
        din25 => ap_const_lv1_0,
        din26 => ap_const_lv1_1,
        din27 => ap_const_lv1_1,
        din28 => ap_const_lv1_1,
        din29 => ap_const_lv1_1,
        din30 => ap_const_lv1_0,
        din31 => ap_const_lv1_0,
        din32 => ap_const_lv1_0,
        din33 => ap_const_lv1_0,
        din34 => ap_const_lv1_0,
        din35 => ap_const_lv1_0,
        din36 => ap_const_lv1_0,
        din37 => ap_const_lv1_1,
        din38 => ap_const_lv1_1,
        din39 => ap_const_lv1_1,
        din40 => ap_const_lv1_1,
        din41 => ap_const_lv1_0,
        din42 => ap_const_lv1_0,
        din43 => ap_const_lv1_0,
        din44 => ap_const_lv1_0,
        din45 => ap_const_lv1_0,
        din46 => ap_const_lv1_0,
        din47 => ap_const_lv1_0,
        din48 => ap_const_lv1_1,
        din49 => ap_const_lv1_1,
        din50 => ap_const_lv1_1,
        din51 => ap_const_lv1_1,
        din52 => ap_const_lv1_0,
        din53 => ap_const_lv1_0,
        din54 => ap_const_lv1_0,
        din55 => ap_const_lv1_0,
        din56 => ap_const_lv1_0,
        din57 => ap_const_lv1_0,
        din58 => ap_const_lv1_0,
        din59 => ap_const_lv1_1,
        din60 => ap_const_lv1_1,
        din61 => ap_const_lv1_1,
        din62 => ap_const_lv1_1,
        din63 => ap_const_lv1_0,
        din64 => p_Result_8_fu_34_p3,
        dout => agg_result_V_i4_fu_310_p66);

    operator_double_dbkb_U4 : component operator_double_dbkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 1,
        din1_WIDTH => 1,
        din2_WIDTH => 1,
        din3_WIDTH => 1,
        din4_WIDTH => 1,
        din5_WIDTH => 1,
        din6_WIDTH => 1,
        din7_WIDTH => 1,
        din8_WIDTH => 1,
        din9_WIDTH => 1,
        din10_WIDTH => 1,
        din11_WIDTH => 1,
        din12_WIDTH => 1,
        din13_WIDTH => 1,
        din14_WIDTH => 1,
        din15_WIDTH => 1,
        din16_WIDTH => 1,
        din17_WIDTH => 1,
        din18_WIDTH => 1,
        din19_WIDTH => 1,
        din20_WIDTH => 1,
        din21_WIDTH => 1,
        din22_WIDTH => 1,
        din23_WIDTH => 1,
        din24_WIDTH => 1,
        din25_WIDTH => 1,
        din26_WIDTH => 1,
        din27_WIDTH => 1,
        din28_WIDTH => 1,
        din29_WIDTH => 1,
        din30_WIDTH => 1,
        din31_WIDTH => 1,
        din32_WIDTH => 1,
        din33_WIDTH => 1,
        din34_WIDTH => 1,
        din35_WIDTH => 1,
        din36_WIDTH => 1,
        din37_WIDTH => 1,
        din38_WIDTH => 1,
        din39_WIDTH => 1,
        din40_WIDTH => 1,
        din41_WIDTH => 1,
        din42_WIDTH => 1,
        din43_WIDTH => 1,
        din44_WIDTH => 1,
        din45_WIDTH => 1,
        din46_WIDTH => 1,
        din47_WIDTH => 1,
        din48_WIDTH => 1,
        din49_WIDTH => 1,
        din50_WIDTH => 1,
        din51_WIDTH => 1,
        din52_WIDTH => 1,
        din53_WIDTH => 1,
        din54_WIDTH => 1,
        din55_WIDTH => 1,
        din56_WIDTH => 1,
        din57_WIDTH => 1,
        din58_WIDTH => 1,
        din59_WIDTH => 1,
        din60_WIDTH => 1,
        din61_WIDTH => 1,
        din62_WIDTH => 1,
        din63_WIDTH => 1,
        din64_WIDTH => 6,
        dout_WIDTH => 1)
    port map (
        din0 => ap_const_lv1_0,
        din1 => ap_const_lv1_0,
        din2 => ap_const_lv1_0,
        din3 => ap_const_lv1_0,
        din4 => ap_const_lv1_0,
        din5 => ap_const_lv1_0,
        din6 => ap_const_lv1_0,
        din7 => ap_const_lv1_0,
        din8 => ap_const_lv1_1,
        din9 => ap_const_lv1_1,
        din10 => ap_const_lv1_1,
        din11 => ap_const_lv1_0,
        din12 => ap_const_lv1_0,
        din13 => ap_const_lv1_0,
        din14 => ap_const_lv1_0,
        din15 => ap_const_lv1_0,
        din16 => ap_const_lv1_0,
        din17 => ap_const_lv1_0,
        din18 => ap_const_lv1_0,
        din19 => ap_const_lv1_1,
        din20 => ap_const_lv1_1,
        din21 => ap_const_lv1_1,
        din22 => ap_const_lv1_0,
        din23 => ap_const_lv1_0,
        din24 => ap_const_lv1_0,
        din25 => ap_const_lv1_0,
        din26 => ap_const_lv1_0,
        din27 => ap_const_lv1_0,
        din28 => ap_const_lv1_0,
        din29 => ap_const_lv1_0,
        din30 => ap_const_lv1_1,
        din31 => ap_const_lv1_1,
        din32 => ap_const_lv1_1,
        din33 => ap_const_lv1_0,
        din34 => ap_const_lv1_0,
        din35 => ap_const_lv1_0,
        din36 => ap_const_lv1_0,
        din37 => ap_const_lv1_0,
        din38 => ap_const_lv1_0,
        din39 => ap_const_lv1_0,
        din40 => ap_const_lv1_0,
        din41 => ap_const_lv1_1,
        din42 => ap_const_lv1_1,
        din43 => ap_const_lv1_1,
        din44 => ap_const_lv1_0,
        din45 => ap_const_lv1_0,
        din46 => ap_const_lv1_0,
        din47 => ap_const_lv1_0,
        din48 => ap_const_lv1_0,
        din49 => ap_const_lv1_0,
        din50 => ap_const_lv1_0,
        din51 => ap_const_lv1_0,
        din52 => ap_const_lv1_1,
        din53 => ap_const_lv1_1,
        din54 => ap_const_lv1_1,
        din55 => ap_const_lv1_0,
        din56 => ap_const_lv1_0,
        din57 => ap_const_lv1_0,
        din58 => ap_const_lv1_0,
        din59 => ap_const_lv1_0,
        din60 => ap_const_lv1_0,
        din61 => ap_const_lv1_0,
        din62 => ap_const_lv1_0,
        din63 => ap_const_lv1_1,
        din64 => p_Result_8_fu_34_p3,
        dout => agg_result_V_i6_fu_444_p66);

    operator_double_dbkb_U5 : component operator_double_dbkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 1,
        din1_WIDTH => 1,
        din2_WIDTH => 1,
        din3_WIDTH => 1,
        din4_WIDTH => 1,
        din5_WIDTH => 1,
        din6_WIDTH => 1,
        din7_WIDTH => 1,
        din8_WIDTH => 1,
        din9_WIDTH => 1,
        din10_WIDTH => 1,
        din11_WIDTH => 1,
        din12_WIDTH => 1,
        din13_WIDTH => 1,
        din14_WIDTH => 1,
        din15_WIDTH => 1,
        din16_WIDTH => 1,
        din17_WIDTH => 1,
        din18_WIDTH => 1,
        din19_WIDTH => 1,
        din20_WIDTH => 1,
        din21_WIDTH => 1,
        din22_WIDTH => 1,
        din23_WIDTH => 1,
        din24_WIDTH => 1,
        din25_WIDTH => 1,
        din26_WIDTH => 1,
        din27_WIDTH => 1,
        din28_WIDTH => 1,
        din29_WIDTH => 1,
        din30_WIDTH => 1,
        din31_WIDTH => 1,
        din32_WIDTH => 1,
        din33_WIDTH => 1,
        din34_WIDTH => 1,
        din35_WIDTH => 1,
        din36_WIDTH => 1,
        din37_WIDTH => 1,
        din38_WIDTH => 1,
        din39_WIDTH => 1,
        din40_WIDTH => 1,
        din41_WIDTH => 1,
        din42_WIDTH => 1,
        din43_WIDTH => 1,
        din44_WIDTH => 1,
        din45_WIDTH => 1,
        din46_WIDTH => 1,
        din47_WIDTH => 1,
        din48_WIDTH => 1,
        din49_WIDTH => 1,
        din50_WIDTH => 1,
        din51_WIDTH => 1,
        din52_WIDTH => 1,
        din53_WIDTH => 1,
        din54_WIDTH => 1,
        din55_WIDTH => 1,
        din56_WIDTH => 1,
        din57_WIDTH => 1,
        din58_WIDTH => 1,
        din59_WIDTH => 1,
        din60_WIDTH => 1,
        din61_WIDTH => 1,
        din62_WIDTH => 1,
        din63_WIDTH => 1,
        din64_WIDTH => 6,
        dout_WIDTH => 1)
    port map (
        din0 => ap_const_lv1_0,
        din1 => ap_const_lv1_0,
        din2 => ap_const_lv1_0,
        din3 => ap_const_lv1_0,
        din4 => ap_const_lv1_0,
        din5 => ap_const_lv1_0,
        din6 => ap_const_lv1_0,
        din7 => ap_const_lv1_0,
        din8 => ap_const_lv1_0,
        din9 => ap_const_lv1_0,
        din10 => ap_const_lv1_0,
        din11 => ap_const_lv1_1,
        din12 => ap_const_lv1_1,
        din13 => ap_const_lv1_1,
        din14 => ap_const_lv1_1,
        din15 => ap_const_lv1_1,
        din16 => ap_const_lv1_1,
        din17 => ap_const_lv1_1,
        din18 => ap_const_lv1_1,
        din19 => ap_const_lv1_1,
        din20 => ap_const_lv1_1,
        din21 => ap_const_lv1_1,
        din22 => ap_const_lv1_0,
        din23 => ap_const_lv1_0,
        din24 => ap_const_lv1_0,
        din25 => ap_const_lv1_0,
        din26 => ap_const_lv1_0,
        din27 => ap_const_lv1_0,
        din28 => ap_const_lv1_0,
        din29 => ap_const_lv1_0,
        din30 => ap_const_lv1_0,
        din31 => ap_const_lv1_0,
        din32 => ap_const_lv1_0,
        din33 => ap_const_lv1_1,
        din34 => ap_const_lv1_1,
        din35 => ap_const_lv1_1,
        din36 => ap_const_lv1_1,
        din37 => ap_const_lv1_1,
        din38 => ap_const_lv1_1,
        din39 => ap_const_lv1_1,
        din40 => ap_const_lv1_1,
        din41 => ap_const_lv1_1,
        din42 => ap_const_lv1_1,
        din43 => ap_const_lv1_1,
        din44 => ap_const_lv1_0,
        din45 => ap_const_lv1_0,
        din46 => ap_const_lv1_0,
        din47 => ap_const_lv1_0,
        din48 => ap_const_lv1_0,
        din49 => ap_const_lv1_0,
        din50 => ap_const_lv1_0,
        din51 => ap_const_lv1_0,
        din52 => ap_const_lv1_0,
        din53 => ap_const_lv1_0,
        din54 => ap_const_lv1_0,
        din55 => ap_const_lv1_1,
        din56 => ap_const_lv1_1,
        din57 => ap_const_lv1_1,
        din58 => ap_const_lv1_1,
        din59 => ap_const_lv1_1,
        din60 => ap_const_lv1_1,
        din61 => ap_const_lv1_1,
        din62 => ap_const_lv1_1,
        din63 => ap_const_lv1_1,
        din64 => p_Result_8_fu_34_p3,
        dout => agg_result_V_i8_fu_590_p66);

    operator_double_dbkb_U6 : component operator_double_dbkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 1,
        din1_WIDTH => 1,
        din2_WIDTH => 1,
        din3_WIDTH => 1,
        din4_WIDTH => 1,
        din5_WIDTH => 1,
        din6_WIDTH => 1,
        din7_WIDTH => 1,
        din8_WIDTH => 1,
        din9_WIDTH => 1,
        din10_WIDTH => 1,
        din11_WIDTH => 1,
        din12_WIDTH => 1,
        din13_WIDTH => 1,
        din14_WIDTH => 1,
        din15_WIDTH => 1,
        din16_WIDTH => 1,
        din17_WIDTH => 1,
        din18_WIDTH => 1,
        din19_WIDTH => 1,
        din20_WIDTH => 1,
        din21_WIDTH => 1,
        din22_WIDTH => 1,
        din23_WIDTH => 1,
        din24_WIDTH => 1,
        din25_WIDTH => 1,
        din26_WIDTH => 1,
        din27_WIDTH => 1,
        din28_WIDTH => 1,
        din29_WIDTH => 1,
        din30_WIDTH => 1,
        din31_WIDTH => 1,
        din32_WIDTH => 1,
        din33_WIDTH => 1,
        din34_WIDTH => 1,
        din35_WIDTH => 1,
        din36_WIDTH => 1,
        din37_WIDTH => 1,
        din38_WIDTH => 1,
        din39_WIDTH => 1,
        din40_WIDTH => 1,
        din41_WIDTH => 1,
        din42_WIDTH => 1,
        din43_WIDTH => 1,
        din44_WIDTH => 1,
        din45_WIDTH => 1,
        din46_WIDTH => 1,
        din47_WIDTH => 1,
        din48_WIDTH => 1,
        din49_WIDTH => 1,
        din50_WIDTH => 1,
        din51_WIDTH => 1,
        din52_WIDTH => 1,
        din53_WIDTH => 1,
        din54_WIDTH => 1,
        din55_WIDTH => 1,
        din56_WIDTH => 1,
        din57_WIDTH => 1,
        din58_WIDTH => 1,
        din59_WIDTH => 1,
        din60_WIDTH => 1,
        din61_WIDTH => 1,
        din62_WIDTH => 1,
        din63_WIDTH => 1,
        din64_WIDTH => 6,
        dout_WIDTH => 1)
    port map (
        din0 => ap_const_lv1_0,
        din1 => ap_const_lv1_0,
        din2 => ap_const_lv1_0,
        din3 => ap_const_lv1_0,
        din4 => ap_const_lv1_0,
        din5 => ap_const_lv1_0,
        din6 => ap_const_lv1_0,
        din7 => ap_const_lv1_0,
        din8 => ap_const_lv1_0,
        din9 => ap_const_lv1_0,
        din10 => ap_const_lv1_0,
        din11 => ap_const_lv1_0,
        din12 => ap_const_lv1_0,
        din13 => ap_const_lv1_0,
        din14 => ap_const_lv1_0,
        din15 => ap_const_lv1_0,
        din16 => ap_const_lv1_0,
        din17 => ap_const_lv1_0,
        din18 => ap_const_lv1_0,
        din19 => ap_const_lv1_0,
        din20 => ap_const_lv1_0,
        din21 => ap_const_lv1_0,
        din22 => ap_const_lv1_1,
        din23 => ap_const_lv1_1,
        din24 => ap_const_lv1_1,
        din25 => ap_const_lv1_1,
        din26 => ap_const_lv1_1,
        din27 => ap_const_lv1_1,
        din28 => ap_const_lv1_1,
        din29 => ap_const_lv1_1,
        din30 => ap_const_lv1_1,
        din31 => ap_const_lv1_1,
        din32 => ap_const_lv1_1,
        din33 => ap_const_lv1_1,
        din34 => ap_const_lv1_1,
        din35 => ap_const_lv1_1,
        din36 => ap_const_lv1_1,
        din37 => ap_const_lv1_1,
        din38 => ap_const_lv1_1,
        din39 => ap_const_lv1_1,
        din40 => ap_const_lv1_1,
        din41 => ap_const_lv1_1,
        din42 => ap_const_lv1_1,
        din43 => ap_const_lv1_1,
        din44 => ap_const_lv1_0,
        din45 => ap_const_lv1_0,
        din46 => ap_const_lv1_0,
        din47 => ap_const_lv1_0,
        din48 => ap_const_lv1_0,
        din49 => ap_const_lv1_0,
        din50 => ap_const_lv1_0,
        din51 => ap_const_lv1_0,
        din52 => ap_const_lv1_0,
        din53 => ap_const_lv1_0,
        din54 => ap_const_lv1_0,
        din55 => ap_const_lv1_0,
        din56 => ap_const_lv1_0,
        din57 => ap_const_lv1_0,
        din58 => ap_const_lv1_0,
        din59 => ap_const_lv1_0,
        din60 => ap_const_lv1_0,
        din61 => ap_const_lv1_0,
        din62 => ap_const_lv1_0,
        din63 => ap_const_lv1_0,
        din64 => p_Result_8_fu_34_p3,
        dout => agg_result_V_i1_fu_724_p66);




    ap_ready <= ap_const_logic_1;
    ap_return_0 <= p_Result_1_fu_858_p3;
    ap_return_1 <= p_Result_s_fu_578_p5;
    p_Result_1_fu_858_p3 <= (agg_result_V_i1_fu_724_p66 & agg_result_V_i8_fu_590_p66);
    p_Result_8_fu_34_p3 <= (r_in_V & d_V);
    p_Result_s_fu_578_p5 <= (((agg_result_V_i6_fu_444_p66 & agg_result_V_i4_fu_310_p66) & agg_result_V_i2_fu_176_p66) & agg_result_V_i_fu_42_p66);
end behav;
