
/opt/Xilinx/Vivado/2018.2/bin/xelab xil_defaultlib.apatb_long_div3_top glbl -prj long_div3.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims -L xpm --initfile "/opt/Xilinx/Vivado/2018.2/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s long_div3 
/opt/Xilinx/Vivado/2018.2/bin/xsim --noieeewarnings long_div3 -tclbatch long_div3.tcl

