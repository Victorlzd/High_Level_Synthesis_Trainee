############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project fir_prj
set_top kernel_fdtd_2d
add_files polybench.h
add_files fdtd-2d.h
add_files fdtd-2d.cpp
open_solution "classic"
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 10 -name default
#source "./fir_prj/classic/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
