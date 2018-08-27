############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################


open_project -reset result
set_top int_32_mul3
add_files int_mul3.cpp
add_files -tb test_int_mul3.cpp
open_solution -reset 	"solution1"
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 10 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog
exit
