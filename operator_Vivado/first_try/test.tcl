############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project -reset fir_prj
set_top top
add_files top.cpp
add_files -tb top_test.cpp
open_solution -reset 	"solution1"
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 10 -name default
#source "./fir_prj/solution1/directives.tcl"
csim_design -clean -compiler clang
csynth_design
#cosim_design -rtl vhdl
#export_design -flow impl -rtl vhdl -format ip_catalog
exit
