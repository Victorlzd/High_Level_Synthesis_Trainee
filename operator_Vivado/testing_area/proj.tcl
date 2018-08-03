############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################

open_project -reset vivado_hls_float_div
set_top div2
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div2"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 12 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog

open_project -reset vivado_hls_float_div
set_top div3
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div3"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 60 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog

open_project -reset vivado_hls_float_div
set_top div4
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div4"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 15 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog

open_project -reset vivado_hls_float_div
set_top div5
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div5"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 60 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog

open_project -reset vivado_hls_float_div
set_top div6
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div6"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 60 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog

open_project -reset vivado_hls_float_div
set_top div7
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div7"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 60 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog

open_project -reset vivado_hls_float_div
set_top div9
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div9"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 60 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog

open_project -reset vivado_hls_float_div
set_top div10
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div10"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 60 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog

open_project -reset vivado_hls_float_div
set_top div11
add_files test.cpp
add_files -tb test_bench.cpp
open_solution -reset 	"div11"
#set_directive_latency -max=1 operator_long_div11
set_part {xc7k160tfbg484-1} -tool vivado
create_clock -period 60 -name default
#source "./fir_prj/solution1/directives.tcl"
#csim_design -clean -compiler gcc
csynth_design
#cosim_design -O -compiler gcc -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog
exit
