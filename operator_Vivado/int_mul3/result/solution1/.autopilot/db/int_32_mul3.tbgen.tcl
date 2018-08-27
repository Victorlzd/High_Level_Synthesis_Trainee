set C_TypeInfoList {{ 
"int_32_mul3" : [[], {"return": [[],"0"] }, [{"ExternC" : 0}], [ {"in": [[],"0"] }],[],""], 
"0": [ "ap_uint<32>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 32}}]],""]}}]
}}
set moduleName int_32_mul3
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
set C_modelName {int_32_mul3}
set C_modelType { int 32 }
set C_modelArgList {
	{ in_V int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "agg.result.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 8
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_V sc_in sc_lv 32 signal 0 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_V", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "10", "19", "28", "37", "46"],
		"CDFG" : "int_32_mul3",
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
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_80"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_101"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_122"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_143"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_164"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_mul3_chunk_fu_185"}],
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mem_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_80", "Port" : "mem_0"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_101", "Port" : "mem_0"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_122", "Port" : "mem_0"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_143", "Port" : "mem_0"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_164", "Port" : "mem_0"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_185", "Port" : "mem_0"}]},
			{"Name" : "mem_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_80", "Port" : "mem_1"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_101", "Port" : "mem_1"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_122", "Port" : "mem_1"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_143", "Port" : "mem_1"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_164", "Port" : "mem_1"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_185", "Port" : "mem_1"}]},
			{"Name" : "mem_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_80", "Port" : "mem_2"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_101", "Port" : "mem_2"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_122", "Port" : "mem_2"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_143", "Port" : "mem_2"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_164", "Port" : "mem_2"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_185", "Port" : "mem_2"}]},
			{"Name" : "mem_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_80", "Port" : "mem_3"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_101", "Port" : "mem_3"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_122", "Port" : "mem_3"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_143", "Port" : "mem_3"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_164", "Port" : "mem_3"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_185", "Port" : "mem_3"}]},
			{"Name" : "mem_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_80", "Port" : "mem_4"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_101", "Port" : "mem_4"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_122", "Port" : "mem_4"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_143", "Port" : "mem_4"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_164", "Port" : "mem_4"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_185", "Port" : "mem_4"}]},
			{"Name" : "mem_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_80", "Port" : "mem_5"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_101", "Port" : "mem_5"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_122", "Port" : "mem_5"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_143", "Port" : "mem_5"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_164", "Port" : "mem_5"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_185", "Port" : "mem_5"}]},
			{"Name" : "mem_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_80", "Port" : "mem_6"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_101", "Port" : "mem_6"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_122", "Port" : "mem_6"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_143", "Port" : "mem_6"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_164", "Port" : "mem_6"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_185", "Port" : "mem_6"}]},
			{"Name" : "mem_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_80", "Port" : "mem_7"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_101", "Port" : "mem_7"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_122", "Port" : "mem_7"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_143", "Port" : "mem_7"},
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_164", "Port" : "mem_7"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_185", "Port" : "mem_7"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mem_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80.mem_0_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80.mem_1_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80.mem_2_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80.mem_3_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80.mem_4_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80.mem_5_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80.mem_6_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_80.mem_7_U", "Parent" : "1"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15", "16", "17", "18"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mem_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101.mem_0_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101.mem_1_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101.mem_2_U", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101.mem_3_U", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101.mem_4_U", "Parent" : "10"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101.mem_5_U", "Parent" : "10"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101.mem_6_U", "Parent" : "10"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_101.mem_7_U", "Parent" : "10"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122", "Parent" : "0", "Child" : ["20", "21", "22", "23", "24", "25", "26", "27"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mem_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122.mem_0_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122.mem_1_U", "Parent" : "19"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122.mem_2_U", "Parent" : "19"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122.mem_3_U", "Parent" : "19"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122.mem_4_U", "Parent" : "19"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122.mem_5_U", "Parent" : "19"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122.mem_6_U", "Parent" : "19"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_122.mem_7_U", "Parent" : "19"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143", "Parent" : "0", "Child" : ["29", "30", "31", "32", "33", "34", "35", "36"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mem_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143.mem_0_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143.mem_1_U", "Parent" : "28"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143.mem_2_U", "Parent" : "28"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143.mem_3_U", "Parent" : "28"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143.mem_4_U", "Parent" : "28"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143.mem_5_U", "Parent" : "28"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143.mem_6_U", "Parent" : "28"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_143.mem_7_U", "Parent" : "28"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164", "Parent" : "0", "Child" : ["38", "39", "40", "41", "42", "43", "44", "45"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mem_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164.mem_0_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164.mem_1_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164.mem_2_U", "Parent" : "37"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164.mem_3_U", "Parent" : "37"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164.mem_4_U", "Parent" : "37"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164.mem_5_U", "Parent" : "37"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164.mem_6_U", "Parent" : "37"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_164.mem_7_U", "Parent" : "37"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185", "Parent" : "0", "Child" : ["47", "48", "49", "50", "51", "52", "53", "54"],
		"CDFG" : "lut_mul3_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mem_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mem_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185.mem_0_U", "Parent" : "46"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185.mem_1_U", "Parent" : "46"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185.mem_2_U", "Parent" : "46"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185.mem_3_U", "Parent" : "46"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185.mem_4_U", "Parent" : "46"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185.mem_5_U", "Parent" : "46"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185.mem_6_U", "Parent" : "46"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_185.mem_7_U", "Parent" : "46"}]}


set ArgLastReadFirstWriteLatency {
	int_32_mul3 {
		in_V {Type I LastRead 0 FirstWrite -1}
		mem_0 {Type I LastRead -1 FirstWrite -1}
		mem_1 {Type I LastRead -1 FirstWrite -1}
		mem_2 {Type I LastRead -1 FirstWrite -1}
		mem_3 {Type I LastRead -1 FirstWrite -1}
		mem_4 {Type I LastRead -1 FirstWrite -1}
		mem_5 {Type I LastRead -1 FirstWrite -1}
		mem_6 {Type I LastRead -1 FirstWrite -1}
		mem_7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		in_V {Type I LastRead 0 FirstWrite -1}
		mem_0 {Type I LastRead -1 FirstWrite -1}
		mem_1 {Type I LastRead -1 FirstWrite -1}
		mem_2 {Type I LastRead -1 FirstWrite -1}
		mem_3 {Type I LastRead -1 FirstWrite -1}
		mem_4 {Type I LastRead -1 FirstWrite -1}
		mem_5 {Type I LastRead -1 FirstWrite -1}
		mem_6 {Type I LastRead -1 FirstWrite -1}
		mem_7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		in_V {Type I LastRead 0 FirstWrite -1}
		mem_0 {Type I LastRead -1 FirstWrite -1}
		mem_1 {Type I LastRead -1 FirstWrite -1}
		mem_2 {Type I LastRead -1 FirstWrite -1}
		mem_3 {Type I LastRead -1 FirstWrite -1}
		mem_4 {Type I LastRead -1 FirstWrite -1}
		mem_5 {Type I LastRead -1 FirstWrite -1}
		mem_6 {Type I LastRead -1 FirstWrite -1}
		mem_7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		in_V {Type I LastRead 0 FirstWrite -1}
		mem_0 {Type I LastRead -1 FirstWrite -1}
		mem_1 {Type I LastRead -1 FirstWrite -1}
		mem_2 {Type I LastRead -1 FirstWrite -1}
		mem_3 {Type I LastRead -1 FirstWrite -1}
		mem_4 {Type I LastRead -1 FirstWrite -1}
		mem_5 {Type I LastRead -1 FirstWrite -1}
		mem_6 {Type I LastRead -1 FirstWrite -1}
		mem_7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		in_V {Type I LastRead 0 FirstWrite -1}
		mem_0 {Type I LastRead -1 FirstWrite -1}
		mem_1 {Type I LastRead -1 FirstWrite -1}
		mem_2 {Type I LastRead -1 FirstWrite -1}
		mem_3 {Type I LastRead -1 FirstWrite -1}
		mem_4 {Type I LastRead -1 FirstWrite -1}
		mem_5 {Type I LastRead -1 FirstWrite -1}
		mem_6 {Type I LastRead -1 FirstWrite -1}
		mem_7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		in_V {Type I LastRead 0 FirstWrite -1}
		mem_0 {Type I LastRead -1 FirstWrite -1}
		mem_1 {Type I LastRead -1 FirstWrite -1}
		mem_2 {Type I LastRead -1 FirstWrite -1}
		mem_3 {Type I LastRead -1 FirstWrite -1}
		mem_4 {Type I LastRead -1 FirstWrite -1}
		mem_5 {Type I LastRead -1 FirstWrite -1}
		mem_6 {Type I LastRead -1 FirstWrite -1}
		mem_7 {Type I LastRead -1 FirstWrite -1}}
	lut_mul3_chunk {
		in_V {Type I LastRead 0 FirstWrite -1}
		mem_0 {Type I LastRead -1 FirstWrite -1}
		mem_1 {Type I LastRead -1 FirstWrite -1}
		mem_2 {Type I LastRead -1 FirstWrite -1}
		mem_3 {Type I LastRead -1 FirstWrite -1}
		mem_4 {Type I LastRead -1 FirstWrite -1}
		mem_5 {Type I LastRead -1 FirstWrite -1}
		mem_6 {Type I LastRead -1 FirstWrite -1}
		mem_7 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2", "Max" : "2"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "3"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_V { ap_none {  { in_V in_data 0 32 } } }
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
}
