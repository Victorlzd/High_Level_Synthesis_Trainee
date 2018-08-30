############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################

open_project -reset result
set_top kernel_correlation_optimized
add_files correlation.cpp
add_files correlation.h
add_files polybench.h
open_solution -reset 	"my_version"
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 2.5 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog
exit
