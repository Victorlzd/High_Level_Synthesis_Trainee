
/opt/Xilinx/Vivado/2018.2/bin/xelab xil_defaultlib.apatb_operator_int_32_div30_top glbl -prj operator_int_32_div30.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims -L xpm --initfile "/opt/Xilinx/Vivado/2018.2/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s operator_int_32_div30 
/opt/Xilinx/Vivado/2018.2/bin/xsim --noieeewarnings operator_int_32_div30 -tclbatch operator_int_32_div30.tcl
