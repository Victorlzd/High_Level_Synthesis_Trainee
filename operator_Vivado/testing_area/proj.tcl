############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################

open_project -reset test_with_tab
set_top lut_div3_chunk_use_tab
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"lut_div3_with_tab"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 12 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
#export_design -flow impl -rtl vhdl -format ip_catalog

exit
