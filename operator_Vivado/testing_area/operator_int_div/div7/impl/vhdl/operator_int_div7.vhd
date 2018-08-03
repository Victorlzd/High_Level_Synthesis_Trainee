-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity operator_int_div7 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    in_r : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of operator_int_div7 is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "operator_int_div7,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160tfbg484-1,HLS_INPUT_CLOCK=25.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=20.538000,HLS_SYN_LAT=1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=37,HLS_SYN_LUT=9933,HLS_VERSION=2018_2}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv32_1E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011110";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_1B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011011";
    constant ap_const_lv32_1D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011101";
    constant ap_const_lv32_18 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011000";
    constant ap_const_lv32_1A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011010";
    constant ap_const_lv32_15 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010101";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv32_14 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010100";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0) := "01";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal tmp_fu_165_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_reg_292 : STD_LOGIC_VECTOR (1 downto 0);
    signal q_chunk_V_ret2_i_i_reg_297 : STD_LOGIC_VECTOR (2 downto 0);
    signal q_chunk_V_ret2_1_i_i_reg_302 : STD_LOGIC_VECTOR (2 downto 0);
    signal q_chunk_V_ret2_2_i_i_reg_307 : STD_LOGIC_VECTOR (2 downto 0);
    signal q_chunk_V_ret2_3_i_i_reg_312 : STD_LOGIC_VECTOR (2 downto 0);
    signal r_V_ret3_3_i_i_reg_317 : STD_LOGIC_VECTOR (2 downto 0);
    signal p_Result_19_4_i_i_reg_322 : STD_LOGIC_VECTOR (2 downto 0);
    signal p_Result_19_5_i_i_reg_327 : STD_LOGIC_VECTOR (2 downto 0);
    signal p_Result_19_6_i_i_reg_332 : STD_LOGIC_VECTOR (2 downto 0);
    signal p_Result_19_7_i_i_reg_337 : STD_LOGIC_VECTOR (2 downto 0);
    signal p_Result_19_8_i_i_reg_342 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_1_fu_263_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_1_reg_347 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_68_ap_ready : STD_LOGIC;
    signal grp_lut_div7_chunk_fu_68_d_V : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_68_r_in_V : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_68_ap_return_0 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_68_ap_return_1 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_75_ap_ready : STD_LOGIC;
    signal grp_lut_div7_chunk_fu_75_d_V : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_75_ap_return_0 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_75_ap_return_1 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_81_ap_ready : STD_LOGIC;
    signal grp_lut_div7_chunk_fu_81_d_V : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_81_ap_return_0 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_81_ap_return_1 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_87_ap_ready : STD_LOGIC;
    signal grp_lut_div7_chunk_fu_87_d_V : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_87_ap_return_0 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_87_ap_return_1 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_93_ap_ready : STD_LOGIC;
    signal grp_lut_div7_chunk_fu_93_d_V : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_93_ap_return_0 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_lut_div7_chunk_fu_93_ap_return_1 : STD_LOGIC_VECTOR (2 downto 0);
    signal call_ret4_9_i_i_lut_div7_chunk_fu_99_ap_ready : STD_LOGIC;
    signal call_ret4_9_i_i_lut_div7_chunk_fu_99_ap_return_0 : STD_LOGIC_VECTOR (2 downto 0);
    signal call_ret4_9_i_i_lut_div7_chunk_fu_99_ap_return_1 : STD_LOGIC_VECTOR (2 downto 0);
    signal d_chunk_V_fu_160_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal p_Result_i_i_fu_150_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (1 downto 0);

    component lut_div7_chunk IS
    port (
        ap_ready : OUT STD_LOGIC;
        d_V : IN STD_LOGIC_VECTOR (2 downto 0);
        r_in_V : IN STD_LOGIC_VECTOR (2 downto 0);
        ap_return_0 : OUT STD_LOGIC_VECTOR (2 downto 0);
        ap_return_1 : OUT STD_LOGIC_VECTOR (2 downto 0) );
    end component;



begin
    grp_lut_div7_chunk_fu_68 : component lut_div7_chunk
    port map (
        ap_ready => grp_lut_div7_chunk_fu_68_ap_ready,
        d_V => grp_lut_div7_chunk_fu_68_d_V,
        r_in_V => grp_lut_div7_chunk_fu_68_r_in_V,
        ap_return_0 => grp_lut_div7_chunk_fu_68_ap_return_0,
        ap_return_1 => grp_lut_div7_chunk_fu_68_ap_return_1);

    grp_lut_div7_chunk_fu_75 : component lut_div7_chunk
    port map (
        ap_ready => grp_lut_div7_chunk_fu_75_ap_ready,
        d_V => grp_lut_div7_chunk_fu_75_d_V,
        r_in_V => grp_lut_div7_chunk_fu_68_ap_return_1,
        ap_return_0 => grp_lut_div7_chunk_fu_75_ap_return_0,
        ap_return_1 => grp_lut_div7_chunk_fu_75_ap_return_1);

    grp_lut_div7_chunk_fu_81 : component lut_div7_chunk
    port map (
        ap_ready => grp_lut_div7_chunk_fu_81_ap_ready,
        d_V => grp_lut_div7_chunk_fu_81_d_V,
        r_in_V => grp_lut_div7_chunk_fu_75_ap_return_1,
        ap_return_0 => grp_lut_div7_chunk_fu_81_ap_return_0,
        ap_return_1 => grp_lut_div7_chunk_fu_81_ap_return_1);

    grp_lut_div7_chunk_fu_87 : component lut_div7_chunk
    port map (
        ap_ready => grp_lut_div7_chunk_fu_87_ap_ready,
        d_V => grp_lut_div7_chunk_fu_87_d_V,
        r_in_V => grp_lut_div7_chunk_fu_81_ap_return_1,
        ap_return_0 => grp_lut_div7_chunk_fu_87_ap_return_0,
        ap_return_1 => grp_lut_div7_chunk_fu_87_ap_return_1);

    grp_lut_div7_chunk_fu_93 : component lut_div7_chunk
    port map (
        ap_ready => grp_lut_div7_chunk_fu_93_ap_ready,
        d_V => grp_lut_div7_chunk_fu_93_d_V,
        r_in_V => grp_lut_div7_chunk_fu_87_ap_return_1,
        ap_return_0 => grp_lut_div7_chunk_fu_93_ap_return_0,
        ap_return_1 => grp_lut_div7_chunk_fu_93_ap_return_1);

    call_ret4_9_i_i_lut_div7_chunk_fu_99 : component lut_div7_chunk
    port map (
        ap_ready => call_ret4_9_i_i_lut_div7_chunk_fu_99_ap_ready,
        d_V => tmp_1_reg_347,
        r_in_V => grp_lut_div7_chunk_fu_93_ap_return_1,
        ap_return_0 => call_ret4_9_i_i_lut_div7_chunk_fu_99_ap_return_0,
        ap_return_1 => call_ret4_9_i_i_lut_div7_chunk_fu_99_ap_return_1);





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

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                p_Result_19_4_i_i_reg_322 <= in_r(17 downto 15);
                p_Result_19_5_i_i_reg_327 <= in_r(14 downto 12);
                p_Result_19_6_i_i_reg_332 <= in_r(11 downto 9);
                p_Result_19_7_i_i_reg_337 <= in_r(8 downto 6);
                p_Result_19_8_i_i_reg_342 <= in_r(5 downto 3);
                q_chunk_V_ret2_1_i_i_reg_302 <= grp_lut_div7_chunk_fu_81_ap_return_0;
                q_chunk_V_ret2_2_i_i_reg_307 <= grp_lut_div7_chunk_fu_87_ap_return_0;
                q_chunk_V_ret2_3_i_i_reg_312 <= grp_lut_div7_chunk_fu_93_ap_return_0;
                q_chunk_V_ret2_i_i_reg_297 <= grp_lut_div7_chunk_fu_75_ap_return_0;
                r_V_ret3_3_i_i_reg_317 <= grp_lut_div7_chunk_fu_93_ap_return_1;
                tmp_1_reg_347 <= tmp_1_fu_263_p1;
                tmp_reg_292 <= tmp_fu_165_p1;
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= ((((((((((tmp_reg_292 & q_chunk_V_ret2_i_i_reg_297) & q_chunk_V_ret2_1_i_i_reg_302) & q_chunk_V_ret2_2_i_i_reg_307) & q_chunk_V_ret2_3_i_i_reg_312) & grp_lut_div7_chunk_fu_68_ap_return_0) & grp_lut_div7_chunk_fu_75_ap_return_0) & grp_lut_div7_chunk_fu_81_ap_return_0) & grp_lut_div7_chunk_fu_87_ap_return_0) & grp_lut_div7_chunk_fu_93_ap_return_0) & call_ret4_9_i_i_lut_div7_chunk_fu_99_ap_return_0);
    d_chunk_V_fu_160_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Result_i_i_fu_150_p4),3));

    grp_lut_div7_chunk_fu_68_d_V_assign_proc : process(ap_CS_fsm_state1, p_Result_19_4_i_i_reg_322, d_chunk_V_fu_160_p1, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            grp_lut_div7_chunk_fu_68_d_V <= p_Result_19_4_i_i_reg_322;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            grp_lut_div7_chunk_fu_68_d_V <= d_chunk_V_fu_160_p1;
        else 
            grp_lut_div7_chunk_fu_68_d_V <= "XXX";
        end if; 
    end process;


    grp_lut_div7_chunk_fu_68_r_in_V_assign_proc : process(ap_CS_fsm_state1, r_V_ret3_3_i_i_reg_317, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            grp_lut_div7_chunk_fu_68_r_in_V <= r_V_ret3_3_i_i_reg_317;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            grp_lut_div7_chunk_fu_68_r_in_V <= ap_const_lv3_0;
        else 
            grp_lut_div7_chunk_fu_68_r_in_V <= "XXX";
        end if; 
    end process;


    grp_lut_div7_chunk_fu_75_d_V_assign_proc : process(ap_CS_fsm_state1, in_r, p_Result_19_5_i_i_reg_327, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            grp_lut_div7_chunk_fu_75_d_V <= p_Result_19_5_i_i_reg_327;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            grp_lut_div7_chunk_fu_75_d_V <= in_r(29 downto 27);
        else 
            grp_lut_div7_chunk_fu_75_d_V <= "XXX";
        end if; 
    end process;


    grp_lut_div7_chunk_fu_81_d_V_assign_proc : process(ap_CS_fsm_state1, in_r, p_Result_19_6_i_i_reg_332, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            grp_lut_div7_chunk_fu_81_d_V <= p_Result_19_6_i_i_reg_332;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            grp_lut_div7_chunk_fu_81_d_V <= in_r(26 downto 24);
        else 
            grp_lut_div7_chunk_fu_81_d_V <= "XXX";
        end if; 
    end process;


    grp_lut_div7_chunk_fu_87_d_V_assign_proc : process(ap_CS_fsm_state1, in_r, p_Result_19_7_i_i_reg_337, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            grp_lut_div7_chunk_fu_87_d_V <= p_Result_19_7_i_i_reg_337;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            grp_lut_div7_chunk_fu_87_d_V <= in_r(23 downto 21);
        else 
            grp_lut_div7_chunk_fu_87_d_V <= "XXX";
        end if; 
    end process;


    grp_lut_div7_chunk_fu_93_d_V_assign_proc : process(ap_CS_fsm_state1, in_r, p_Result_19_8_i_i_reg_342, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            grp_lut_div7_chunk_fu_93_d_V <= p_Result_19_8_i_i_reg_342;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            grp_lut_div7_chunk_fu_93_d_V <= in_r(20 downto 18);
        else 
            grp_lut_div7_chunk_fu_93_d_V <= "XXX";
        end if; 
    end process;

    p_Result_i_i_fu_150_p4 <= in_r(31 downto 30);
    tmp_1_fu_263_p1 <= in_r(3 - 1 downto 0);
    tmp_fu_165_p1 <= grp_lut_div7_chunk_fu_68_ap_return_0(2 - 1 downto 0);
end behav;
