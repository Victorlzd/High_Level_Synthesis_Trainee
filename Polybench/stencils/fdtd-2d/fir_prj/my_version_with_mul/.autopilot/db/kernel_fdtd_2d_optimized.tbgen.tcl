set C_TypeInfoList {{ 
"kernel_fdtd_2d_optimized" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"tmax": [[], {"scalar": "int"}] }, {"nx": [[], {"scalar": "int"}] }, {"ny": [[], {"scalar": "int"}] }, {"ex": [[], {"array": [ {"array": [ {"scalar": "double"}, [1000]]}, [1000]]}] }, {"ey": [[], {"array": [ {"array": [ {"scalar": "double"}, [1000]]}, [1000]]}] }, {"hz": [[], {"array": [ {"array": [ {"scalar": "double"}, [1000]]}, [1000]]}] }, {"_fict_": [[], {"array": [ {"scalar": "double"}, [50]]}] }],[],""]
}}
set moduleName kernel_fdtd_2d_optimized
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
set C_modelName {kernel_fdtd_2d_optimized}
set C_modelType { void 0 }
set C_modelArgList {
	{ tmax int 32 unused  }
	{ nx int 32 unused  }
	{ ny int 32 unused  }
	{ ex double 64 regular {array 1000000 { 2 1 } 3 1 }  }
	{ ey double 64 regular {array 1000000 { 2 3 } 3 1 }  }
	{ hz double 64 regular {array 1000000 { 1 2 } 3 1 }  }
	{ p_fict_s double 64 regular {array 50 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "tmax", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "tmax","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "nx", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "nx","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ny", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ny","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ex", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "ex","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1},{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "ey", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "ey","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1},{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "hz", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "hz","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1},{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "p_fict_s", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "_fict_","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 49,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 33
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ tmax sc_in sc_lv 32 signal 0 } 
	{ nx sc_in sc_lv 32 signal 1 } 
	{ ny sc_in sc_lv 32 signal 2 } 
	{ ex_address0 sc_out sc_lv 20 signal 3 } 
	{ ex_ce0 sc_out sc_logic 1 signal 3 } 
	{ ex_we0 sc_out sc_logic 1 signal 3 } 
	{ ex_d0 sc_out sc_lv 64 signal 3 } 
	{ ex_q0 sc_in sc_lv 64 signal 3 } 
	{ ex_address1 sc_out sc_lv 20 signal 3 } 
	{ ex_ce1 sc_out sc_logic 1 signal 3 } 
	{ ex_q1 sc_in sc_lv 64 signal 3 } 
	{ ey_address0 sc_out sc_lv 20 signal 4 } 
	{ ey_ce0 sc_out sc_logic 1 signal 4 } 
	{ ey_we0 sc_out sc_logic 1 signal 4 } 
	{ ey_d0 sc_out sc_lv 64 signal 4 } 
	{ ey_q0 sc_in sc_lv 64 signal 4 } 
	{ hz_address0 sc_out sc_lv 20 signal 5 } 
	{ hz_ce0 sc_out sc_logic 1 signal 5 } 
	{ hz_q0 sc_in sc_lv 64 signal 5 } 
	{ hz_address1 sc_out sc_lv 20 signal 5 } 
	{ hz_ce1 sc_out sc_logic 1 signal 5 } 
	{ hz_we1 sc_out sc_logic 1 signal 5 } 
	{ hz_d1 sc_out sc_lv 64 signal 5 } 
	{ hz_q1 sc_in sc_lv 64 signal 5 } 
	{ p_fict_s_address0 sc_out sc_lv 6 signal 6 } 
	{ p_fict_s_ce0 sc_out sc_logic 1 signal 6 } 
	{ p_fict_s_q0 sc_in sc_lv 64 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "tmax", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "tmax", "role": "default" }} , 
 	{ "name": "nx", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nx", "role": "default" }} , 
 	{ "name": "ny", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ny", "role": "default" }} , 
 	{ "name": "ex_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "ex", "role": "address0" }} , 
 	{ "name": "ex_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ex", "role": "ce0" }} , 
 	{ "name": "ex_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ex", "role": "we0" }} , 
 	{ "name": "ex_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ex", "role": "d0" }} , 
 	{ "name": "ex_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ex", "role": "q0" }} , 
 	{ "name": "ex_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "ex", "role": "address1" }} , 
 	{ "name": "ex_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ex", "role": "ce1" }} , 
 	{ "name": "ex_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ex", "role": "q1" }} , 
 	{ "name": "ey_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "ey", "role": "address0" }} , 
 	{ "name": "ey_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ey", "role": "ce0" }} , 
 	{ "name": "ey_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ey", "role": "we0" }} , 
 	{ "name": "ey_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ey", "role": "d0" }} , 
 	{ "name": "ey_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ey", "role": "q0" }} , 
 	{ "name": "hz_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "hz", "role": "address0" }} , 
 	{ "name": "hz_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hz", "role": "ce0" }} , 
 	{ "name": "hz_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "hz", "role": "q0" }} , 
 	{ "name": "hz_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "hz", "role": "address1" }} , 
 	{ "name": "hz_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hz", "role": "ce1" }} , 
 	{ "name": "hz_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hz", "role": "we1" }} , 
 	{ "name": "hz_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "hz", "role": "d1" }} , 
 	{ "name": "hz_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "hz", "role": "q1" }} , 
 	{ "name": "p_fict_s_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "p_fict_s", "role": "address0" }} , 
 	{ "name": "p_fict_s_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_fict_s", "role": "ce0" }} , 
 	{ "name": "p_fict_s_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p_fict_s", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "17", "27", "37", "47", "57", "58", "59", "60", "61"],
		"CDFG" : "kernel_fdtd_2d_optimized",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5541053901", "EstimateLatencyMax" : "5541053901",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state63", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_607"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_607"},
			{"State" : "ap_ST_fsm_state63", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_630"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_630"},
			{"State" : "ap_ST_fsm_state63", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_653"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_653"},
			{"State" : "ap_ST_fsm_state63", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_676"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_676"},
			{"State" : "ap_ST_fsm_state63", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_699"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul7_chunk_fu_699"}],
		"Port" : [
			{"Name" : "tmax", "Type" : "None", "Direction" : "I"},
			{"Name" : "nx", "Type" : "None", "Direction" : "I"},
			{"Name" : "ny", "Type" : "None", "Direction" : "I"},
			{"Name" : "ex", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ey", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "hz", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "p_fict_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q01", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q01"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q01"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q01"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q01"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q01"}]},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q12"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q12"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q12"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q12"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q12"}]},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q23"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q23"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q23"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q23"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q23"}]},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q3"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q3"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q3"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q3"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q3"}]},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q4"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q4"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q4"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q4"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q4"}]},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q5"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q5"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q5"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q5"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q5"}]},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q6"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q6"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q6"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q6"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q6"}]},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q7"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q7"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q7"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q7"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q7"}]},
			{"Name" : "q8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_lut_mul7_chunk_fu_607", "Port" : "q8"},
					{"ID" : "17", "SubInstance" : "grp_lut_mul7_chunk_fu_630", "Port" : "q8"},
					{"ID" : "27", "SubInstance" : "grp_lut_mul7_chunk_fu_653", "Port" : "q8"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul7_chunk_fu_676", "Port" : "q8"},
					{"ID" : "47", "SubInstance" : "grp_lut_mul7_chunk_fu_699", "Port" : "q8"}]},
			{"Name" : "r0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.r0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.r1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.r2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q1_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q2_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607", "Parent" : "0", "Child" : ["8", "9", "10", "11", "12", "13", "14", "15", "16"],
		"CDFG" : "lut_mul7_chunk",
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
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q01_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q12_U", "Parent" : "7"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q23_U", "Parent" : "7"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q3_U", "Parent" : "7"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q4_U", "Parent" : "7"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q5_U", "Parent" : "7"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q6_U", "Parent" : "7"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q7_U", "Parent" : "7"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_607.q8_U", "Parent" : "7"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630", "Parent" : "0", "Child" : ["18", "19", "20", "21", "22", "23", "24", "25", "26"],
		"CDFG" : "lut_mul7_chunk",
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
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q01_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q12_U", "Parent" : "17"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q23_U", "Parent" : "17"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q3_U", "Parent" : "17"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q4_U", "Parent" : "17"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q5_U", "Parent" : "17"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q6_U", "Parent" : "17"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q7_U", "Parent" : "17"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_630.q8_U", "Parent" : "17"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653", "Parent" : "0", "Child" : ["28", "29", "30", "31", "32", "33", "34", "35", "36"],
		"CDFG" : "lut_mul7_chunk",
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
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q01_U", "Parent" : "27"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q12_U", "Parent" : "27"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q23_U", "Parent" : "27"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q3_U", "Parent" : "27"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q4_U", "Parent" : "27"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q5_U", "Parent" : "27"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q6_U", "Parent" : "27"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q7_U", "Parent" : "27"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_653.q8_U", "Parent" : "27"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676", "Parent" : "0", "Child" : ["38", "39", "40", "41", "42", "43", "44", "45", "46"],
		"CDFG" : "lut_mul7_chunk",
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
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q01_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q12_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q23_U", "Parent" : "37"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q3_U", "Parent" : "37"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q4_U", "Parent" : "37"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q5_U", "Parent" : "37"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q6_U", "Parent" : "37"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q7_U", "Parent" : "37"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_676.q8_U", "Parent" : "37"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699", "Parent" : "0", "Child" : ["48", "49", "50", "51", "52", "53", "54", "55", "56"],
		"CDFG" : "lut_mul7_chunk",
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
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q01_U", "Parent" : "47"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q12_U", "Parent" : "47"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q23_U", "Parent" : "47"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q3_U", "Parent" : "47"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q4_U", "Parent" : "47"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q5_U", "Parent" : "47"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q6_U", "Parent" : "47"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q7_U", "Parent" : "47"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul7_chunk_fu_699.q8_U", "Parent" : "47"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_fdtd_2d_ophbi_U11", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_fdtd_2d_opibs_U12", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_fdtd_2d_opjbC_U13", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_fdtd_2d_opjbC_U14", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_fdtd_2d_opjbC_U15", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	kernel_fdtd_2d_optimized {
		tmax {Type I LastRead -1 FirstWrite -1}
		nx {Type I LastRead -1 FirstWrite -1}
		ny {Type I LastRead -1 FirstWrite -1}
		ex {Type IO LastRead 11 FirstWrite 20}
		ey {Type IO LastRead 16 FirstWrite 3}
		hz {Type IO LastRead 29 FirstWrite 39}
		p_fict_s {Type I LastRead 2 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}
		q8 {Type I LastRead -1 FirstWrite -1}
		r0 {Type I LastRead -1 FirstWrite -1}
		r1 {Type I LastRead -1 FirstWrite -1}
		r2 {Type I LastRead -1 FirstWrite -1}
		q0 {Type I LastRead -1 FirstWrite -1}
		q1 {Type I LastRead -1 FirstWrite -1}
		q2 {Type I LastRead -1 FirstWrite -1}}
	lut_mul7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}
		q8 {Type I LastRead -1 FirstWrite -1}}
	lut_mul7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}
		q8 {Type I LastRead -1 FirstWrite -1}}
	lut_mul7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}
		q8 {Type I LastRead -1 FirstWrite -1}}
	lut_mul7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}
		q8 {Type I LastRead -1 FirstWrite -1}}
	lut_mul7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		q01 {Type I LastRead -1 FirstWrite -1}
		q12 {Type I LastRead -1 FirstWrite -1}
		q23 {Type I LastRead -1 FirstWrite -1}
		q3 {Type I LastRead -1 FirstWrite -1}
		q4 {Type I LastRead -1 FirstWrite -1}
		q5 {Type I LastRead -1 FirstWrite -1}
		q6 {Type I LastRead -1 FirstWrite -1}
		q7 {Type I LastRead -1 FirstWrite -1}
		q8 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "5541053901", "Max" : "5541053901"}
	, {"Name" : "Interval", "Min" : "1246086606", "Max" : "1246086606"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	tmax { ap_none {  { tmax in_data 0 32 } } }
	nx { ap_none {  { nx in_data 0 32 } } }
	ny { ap_none {  { ny in_data 0 32 } } }
	ex { ap_memory {  { ex_address0 mem_address 1 20 }  { ex_ce0 mem_ce 1 1 }  { ex_we0 mem_we 1 1 }  { ex_d0 mem_din 1 64 }  { ex_q0 mem_dout 0 64 }  { ex_address1 mem_address 1 20 }  { ex_ce1 mem_ce 1 1 }  { ex_q1 mem_dout 0 64 } } }
	ey { ap_memory {  { ey_address0 mem_address 1 20 }  { ey_ce0 mem_ce 1 1 }  { ey_we0 mem_we 1 1 }  { ey_d0 mem_din 1 64 }  { ey_q0 mem_dout 0 64 } } }
	hz { ap_memory {  { hz_address0 mem_address 1 20 }  { hz_ce0 mem_ce 1 1 }  { hz_q0 mem_dout 0 64 }  { hz_address1 mem_address 1 20 }  { hz_ce1 mem_ce 1 1 }  { hz_we1 mem_we 1 1 }  { hz_d1 mem_din 1 64 }  { hz_q1 mem_dout 0 64 } } }
	p_fict_s { ap_memory {  { p_fict_s_address0 mem_address 1 6 }  { p_fict_s_ce0 mem_ce 1 1 }  { p_fict_s_q0 mem_dout 0 64 } } }
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
	{ ex 3 }
	{ ey 3 }
	{ hz 3 }
}
