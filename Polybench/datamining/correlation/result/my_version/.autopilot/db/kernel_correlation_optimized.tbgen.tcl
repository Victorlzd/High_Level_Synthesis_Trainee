set C_TypeInfoList {{ 
"kernel_correlation_optimized" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"m": [[], {"scalar": "int"}] }, {"n": [[], {"scalar": "int"}] }, {"float_n": [[], {"scalar": "double"}] }, {"data": [[], {"array": [ {"array": [ {"scalar": "double"}, [1000]]}, [1000]]}] }, {"symmat": [[], {"array": [ {"array": [ {"scalar": "double"}, [1000]]}, [1000]]}] }, {"mean": [[], {"array": [ {"scalar": "double"}, [1000]]}] }, {"stddev": [[], {"array": [ {"scalar": "double"}, [1000]]}] }],[],""]
}}
set moduleName kernel_correlation_optimized
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {kernel_correlation_optimized}
set C_modelType { void 0 }
set C_modelArgList {
	{ m int 32 unused  }
	{ n int 32 unused  }
	{ float_n double 64 unused  }
	{ data double 64 regular {array 1000000 { 2 1 } 3 1 }  }
	{ symmat double 64 regular {array 1000000 { 0 3 } 1 1 }  }
	{ mean double 64 regular {array 1000 { 2 3 } 2 1 }  }
	{ stddev double 64 regular {array 1000 { 2 3 } 2 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "m", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "m","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "n", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "n","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "float_n", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "float_n","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "data", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "data","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1},{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "symmat", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "symmat","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1},{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "mean", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "mean","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "stddev", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "stddev","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 31
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m sc_in sc_lv 32 signal 0 } 
	{ n sc_in sc_lv 32 signal 1 } 
	{ float_n sc_in sc_lv 64 signal 2 } 
	{ data_address0 sc_out sc_lv 20 signal 3 } 
	{ data_ce0 sc_out sc_logic 1 signal 3 } 
	{ data_we0 sc_out sc_logic 1 signal 3 } 
	{ data_d0 sc_out sc_lv 64 signal 3 } 
	{ data_q0 sc_in sc_lv 64 signal 3 } 
	{ data_address1 sc_out sc_lv 20 signal 3 } 
	{ data_ce1 sc_out sc_logic 1 signal 3 } 
	{ data_q1 sc_in sc_lv 64 signal 3 } 
	{ symmat_address0 sc_out sc_lv 20 signal 4 } 
	{ symmat_ce0 sc_out sc_logic 1 signal 4 } 
	{ symmat_we0 sc_out sc_logic 1 signal 4 } 
	{ symmat_d0 sc_out sc_lv 64 signal 4 } 
	{ mean_address0 sc_out sc_lv 10 signal 5 } 
	{ mean_ce0 sc_out sc_logic 1 signal 5 } 
	{ mean_we0 sc_out sc_logic 1 signal 5 } 
	{ mean_d0 sc_out sc_lv 64 signal 5 } 
	{ mean_q0 sc_in sc_lv 64 signal 5 } 
	{ stddev_address0 sc_out sc_lv 10 signal 6 } 
	{ stddev_ce0 sc_out sc_logic 1 signal 6 } 
	{ stddev_we0 sc_out sc_logic 1 signal 6 } 
	{ stddev_d0 sc_out sc_lv 64 signal 6 } 
	{ stddev_q0 sc_in sc_lv 64 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "m", "role": "default" }} , 
 	{ "name": "n", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "n", "role": "default" }} , 
 	{ "name": "float_n", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "float_n", "role": "default" }} , 
 	{ "name": "data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "data", "role": "address0" }} , 
 	{ "name": "data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "ce0" }} , 
 	{ "name": "data_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "we0" }} , 
 	{ "name": "data_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "data", "role": "d0" }} , 
 	{ "name": "data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "data", "role": "q0" }} , 
 	{ "name": "data_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "data", "role": "address1" }} , 
 	{ "name": "data_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "ce1" }} , 
 	{ "name": "data_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "data", "role": "q1" }} , 
 	{ "name": "symmat_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "symmat", "role": "address0" }} , 
 	{ "name": "symmat_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "symmat", "role": "ce0" }} , 
 	{ "name": "symmat_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "symmat", "role": "we0" }} , 
 	{ "name": "symmat_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "symmat", "role": "d0" }} , 
 	{ "name": "mean_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "mean", "role": "address0" }} , 
 	{ "name": "mean_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mean", "role": "ce0" }} , 
 	{ "name": "mean_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mean", "role": "we0" }} , 
 	{ "name": "mean_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "mean", "role": "d0" }} , 
 	{ "name": "mean_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "mean", "role": "q0" }} , 
 	{ "name": "stddev_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "stddev", "role": "address0" }} , 
 	{ "name": "stddev_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "stddev", "role": "ce0" }} , 
 	{ "name": "stddev_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "stddev", "role": "we0" }} , 
 	{ "name": "stddev_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "stddev", "role": "d0" }} , 
 	{ "name": "stddev_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "stddev", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "85", "95", "96", "97", "98", "99", "100"],
		"CDFG" : "kernel_correlation_optimized",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "190556993", "EstimateLatencyMax" : "38084643009",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_operator_double_mul6_fu_428"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_operator_double_mul6_fu_428"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_operator_double_div5_fu_449"},
			{"State" : "ap_ST_fsm_state80", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_operator_double_div5_fu_449"}],
		"Port" : [
			{"Name" : "m", "Type" : "None", "Direction" : "I"},
			{"Name" : "n", "Type" : "None", "Direction" : "I"},
			{"Name" : "float_n", "Type" : "None", "Direction" : "I"},
			{"Name" : "data", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "symmat", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mean", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "stddev", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "r0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "grp_operator_double_div5_fu_449", "Port" : "r0"}]},
			{"Name" : "r1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "grp_operator_double_div5_fu_449", "Port" : "r1"}]},
			{"Name" : "r2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "grp_operator_double_div5_fu_449", "Port" : "r2"}]},
			{"Name" : "q0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "grp_operator_double_div5_fu_449", "Port" : "q0"}]},
			{"Name" : "q1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "grp_operator_double_div5_fu_449", "Port" : "q1"}]},
			{"Name" : "q2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "grp_operator_double_div5_fu_449", "Port" : "q2"}]},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_mul6_fu_428", "Port" : "q01"}]},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_mul6_fu_428", "Port" : "q12"}]},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_mul6_fu_428", "Port" : "q23"}]},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_mul6_fu_428", "Port" : "q3"}]},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_mul6_fu_428", "Port" : "q4"}]},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_mul6_fu_428", "Port" : "q5"}]},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_mul6_fu_428", "Port" : "q6"}]},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_mul6_fu_428", "Port" : "q7"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428", "Parent" : "0", "Child" : ["2", "11", "20", "29", "38", "47", "56", "65", "74", "83", "84"],
		"CDFG" : "operator_double_mul6",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "20",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_206"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_206"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_206"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_227"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_227"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_227"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_248"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_248"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_269"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_269"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_290"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_290"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_311"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_311"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_332"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_332"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_353"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_374"}],
		"Port" : [
			{"Name" : "in_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q01"},
					{"ID" : "20", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q01"},
					{"ID" : "29", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q01"},
					{"ID" : "74", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q01"},
					{"ID" : "2", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q01"},
					{"ID" : "11", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q01"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q01"},
					{"ID" : "56", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q01"},
					{"ID" : "65", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q01"}]},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q12"},
					{"ID" : "20", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q12"},
					{"ID" : "29", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q12"},
					{"ID" : "74", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q12"},
					{"ID" : "2", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q12"},
					{"ID" : "11", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q12"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q12"},
					{"ID" : "56", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q12"},
					{"ID" : "65", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q12"}]},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q23"},
					{"ID" : "20", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q23"},
					{"ID" : "29", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q23"},
					{"ID" : "74", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q23"},
					{"ID" : "2", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q23"},
					{"ID" : "11", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q23"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q23"},
					{"ID" : "56", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q23"},
					{"ID" : "65", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q23"}]},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q3"},
					{"ID" : "20", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q3"},
					{"ID" : "29", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q3"},
					{"ID" : "74", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q3"},
					{"ID" : "2", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q3"},
					{"ID" : "11", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q3"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q3"},
					{"ID" : "56", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q3"},
					{"ID" : "65", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q3"}]},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q4"},
					{"ID" : "20", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q4"},
					{"ID" : "29", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q4"},
					{"ID" : "74", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q4"},
					{"ID" : "2", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q4"},
					{"ID" : "11", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q4"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q4"},
					{"ID" : "56", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q4"},
					{"ID" : "65", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q4"}]},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q5"},
					{"ID" : "20", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q5"},
					{"ID" : "29", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q5"},
					{"ID" : "74", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q5"},
					{"ID" : "2", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q5"},
					{"ID" : "11", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q5"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q5"},
					{"ID" : "56", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q5"},
					{"ID" : "65", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q5"}]},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q6"},
					{"ID" : "20", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q6"},
					{"ID" : "29", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q6"},
					{"ID" : "74", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q6"},
					{"ID" : "2", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q6"},
					{"ID" : "11", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q6"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q6"},
					{"ID" : "56", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q6"},
					{"ID" : "65", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q6"}]},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q7"},
					{"ID" : "20", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q7"},
					{"ID" : "29", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q7"},
					{"ID" : "74", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q7"},
					{"ID" : "2", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q7"},
					{"ID" : "11", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q7"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q7"},
					{"ID" : "56", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q7"},
					{"ID" : "65", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q7"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206", "Parent" : "1", "Child" : ["3", "4", "5", "6", "7", "8", "9", "10"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206.q01_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206.q12_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206.q23_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206.q3_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206.q4_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206.q5_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206.q6_U", "Parent" : "2"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_206.q7_U", "Parent" : "2"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227", "Parent" : "1", "Child" : ["12", "13", "14", "15", "16", "17", "18", "19"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227.q01_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227.q12_U", "Parent" : "11"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227.q23_U", "Parent" : "11"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227.q3_U", "Parent" : "11"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227.q4_U", "Parent" : "11"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227.q5_U", "Parent" : "11"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227.q6_U", "Parent" : "11"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_227.q7_U", "Parent" : "11"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248", "Parent" : "1", "Child" : ["21", "22", "23", "24", "25", "26", "27", "28"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248.q01_U", "Parent" : "20"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248.q12_U", "Parent" : "20"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248.q23_U", "Parent" : "20"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248.q3_U", "Parent" : "20"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248.q4_U", "Parent" : "20"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248.q5_U", "Parent" : "20"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248.q6_U", "Parent" : "20"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_248.q7_U", "Parent" : "20"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269", "Parent" : "1", "Child" : ["30", "31", "32", "33", "34", "35", "36", "37"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269.q01_U", "Parent" : "29"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269.q12_U", "Parent" : "29"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269.q23_U", "Parent" : "29"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269.q3_U", "Parent" : "29"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269.q4_U", "Parent" : "29"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269.q5_U", "Parent" : "29"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269.q6_U", "Parent" : "29"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_269.q7_U", "Parent" : "29"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290", "Parent" : "1", "Child" : ["39", "40", "41", "42", "43", "44", "45", "46"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290.q01_U", "Parent" : "38"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290.q12_U", "Parent" : "38"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290.q23_U", "Parent" : "38"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290.q3_U", "Parent" : "38"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290.q4_U", "Parent" : "38"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290.q5_U", "Parent" : "38"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290.q6_U", "Parent" : "38"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_290.q7_U", "Parent" : "38"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311", "Parent" : "1", "Child" : ["48", "49", "50", "51", "52", "53", "54", "55"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311.q01_U", "Parent" : "47"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311.q12_U", "Parent" : "47"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311.q23_U", "Parent" : "47"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311.q3_U", "Parent" : "47"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311.q4_U", "Parent" : "47"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311.q5_U", "Parent" : "47"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311.q6_U", "Parent" : "47"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_311.q7_U", "Parent" : "47"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332", "Parent" : "1", "Child" : ["57", "58", "59", "60", "61", "62", "63", "64"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332.q01_U", "Parent" : "56"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332.q12_U", "Parent" : "56"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332.q23_U", "Parent" : "56"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332.q3_U", "Parent" : "56"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332.q4_U", "Parent" : "56"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332.q5_U", "Parent" : "56"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332.q6_U", "Parent" : "56"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_332.q7_U", "Parent" : "56"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353", "Parent" : "1", "Child" : ["66", "67", "68", "69", "70", "71", "72", "73"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353.q01_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353.q12_U", "Parent" : "65"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353.q23_U", "Parent" : "65"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353.q3_U", "Parent" : "65"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353.q4_U", "Parent" : "65"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353.q5_U", "Parent" : "65"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353.q6_U", "Parent" : "65"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_353.q7_U", "Parent" : "65"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374", "Parent" : "1", "Child" : ["75", "76", "77", "78", "79", "80", "81", "82"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374.q01_U", "Parent" : "74"},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374.q12_U", "Parent" : "74"},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374.q23_U", "Parent" : "74"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374.q3_U", "Parent" : "74"},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374.q4_U", "Parent" : "74"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374.q5_U", "Parent" : "74"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374.q6_U", "Parent" : "74"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.grp_lut_mul3_chunk_fu_374.q7_U", "Parent" : "74"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.kernel_correlatiokbM_U23", "Parent" : "1"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_mul6_fu_428.kernel_correlatiolbW_U24", "Parent" : "1"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449", "Parent" : "0", "Child" : ["86", "87", "88", "89", "90", "91", "92", "93", "94"],
		"CDFG" : "operator_double_div5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "249", "EstimateLatencyMax" : "249",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "r0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.r0_U", "Parent" : "85"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.r1_U", "Parent" : "85"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.r2_U", "Parent" : "85"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.q0_U", "Parent" : "85"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.q1_U", "Parent" : "85"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.q2_U", "Parent" : "85"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.kernel_correlatiohbi_U1", "Parent" : "85"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.kernel_correlatioibs_U2", "Parent" : "85"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_449.kernel_correlatiojbC_U3", "Parent" : "85"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_correlatiomb6_U28", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_correlationcg_U29", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_correlatioocq_U30", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_correlatiopcA_U31", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_correlatioqcK_U32", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_correlatiorcU_U33", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	kernel_correlation_optimized {
		m {Type I LastRead -1 FirstWrite -1}
		n {Type I LastRead -1 FirstWrite -1}
		float_n {Type I LastRead -1 FirstWrite -1}
		data {Type IO LastRead 15 FirstWrite 84}
		symmat {Type O LastRead -1 FirstWrite 4}
		mean {Type IO LastRead 8 FirstWrite 6}
		stddev {Type IO LastRead 4 FirstWrite 72}
		r0 {Type I LastRead -1 FirstWrite -1}
		r1 {Type I LastRead -1 FirstWrite -1}
		r2 {Type I LastRead -1 FirstWrite -1}
		q0 {Type I LastRead -1 FirstWrite -1}
		q1 {Type I LastRead -1 FirstWrite -1}
		q2 {Type I LastRead -1 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	operator_double_mul6 {
		in_r {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}}
	operator_double_div5 {
		in_r {Type I LastRead 0 FirstWrite -1}
		r0 {Type I LastRead -1 FirstWrite -1}
		r1 {Type I LastRead -1 FirstWrite -1}
		r2 {Type I LastRead -1 FirstWrite -1}
		q0 {Type I LastRead -1 FirstWrite -1}
		q1 {Type I LastRead -1 FirstWrite -1}
		q2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "190556993", "Max" : "38084643009"}
	, {"Name" : "Interval", "Min" : "190556994", "Max" : "-570062654"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	m { ap_none {  { m in_data 0 32 } } }
	n { ap_none {  { n in_data 0 32 } } }
	float_n { ap_none {  { float_n in_data 0 64 } } }
	data { ap_memory {  { data_address0 mem_address 1 20 }  { data_ce0 mem_ce 1 1 }  { data_we0 mem_we 1 1 }  { data_d0 mem_din 1 64 }  { data_q0 mem_dout 0 64 }  { data_address1 mem_address 1 20 }  { data_ce1 mem_ce 1 1 }  { data_q1 mem_dout 0 64 } } }
	symmat { ap_memory {  { symmat_address0 mem_address 1 20 }  { symmat_ce0 mem_ce 1 1 }  { symmat_we0 mem_we 1 1 }  { symmat_d0 mem_din 1 64 } } }
	mean { ap_memory {  { mean_address0 mem_address 1 10 }  { mean_ce0 mem_ce 1 1 }  { mean_we0 mem_we 1 1 }  { mean_d0 mem_din 1 64 }  { mean_q0 mem_dout 0 64 } } }
	stddev { ap_memory {  { stddev_address0 mem_address 1 10 }  { stddev_ce0 mem_ce 1 1 }  { stddev_we0 mem_we 1 1 }  { stddev_d0 mem_din 1 64 }  { stddev_q0 mem_dout 0 64 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
	{ data 3 }
	{ mean 2 }
	{ stddev 2 }
}
