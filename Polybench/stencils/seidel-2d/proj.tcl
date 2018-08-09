############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################


open_project -reset fir_prj
set_top kernel_seidel_2d_my_version
#add_files optimized_operators.c
#add_files optimized_operators.h
add_files seidel-2d.cpp
add_files seidel-2d.h
add_files polybench.h
open_solution -reset 	"my_version"
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 10 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog
exit
