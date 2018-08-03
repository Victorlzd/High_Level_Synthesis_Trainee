set C_TypeInfoList {{ 
"operator_double_div7" : [[], {"return": [[], {"scalar": "double"}] }, [{"ExternC" : 0}], [ {"in": [[], {"scalar": "double"}] }],[],""]
}}
set moduleName operator_double_div7
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
set C_modelName {operator_double_div7}
set C_modelType { double 64 }
set C_modelArgList {
	{ in_r double 64 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_r", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "in","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 64,"bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "return","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 8
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_r sc_in sc_lv 64 signal 0 } 
	{ ap_return sc_out sc_lv 64 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_r", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "in_r", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "8", "15", "22", "29", "36", "43", "50", "57", "64", "71"],
		"CDFG" : "operator_double_div7",
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
			{"Name" : "in_r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_151", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_151.operator_double_dbkb_U1", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_151.operator_double_dbkb_U2", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_151.operator_double_dbkb_U3", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_151.operator_double_dbkb_U4", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_151.operator_double_dbkb_U5", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_151.operator_double_dbkb_U6", "Parent" : "1"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_158", "Parent" : "0", "Child" : ["9", "10", "11", "12", "13", "14"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_158.operator_double_dbkb_U1", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_158.operator_double_dbkb_U2", "Parent" : "8"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_158.operator_double_dbkb_U3", "Parent" : "8"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_158.operator_double_dbkb_U4", "Parent" : "8"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_158.operator_double_dbkb_U5", "Parent" : "8"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_158.operator_double_dbkb_U6", "Parent" : "8"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_164", "Parent" : "0", "Child" : ["16", "17", "18", "19", "20", "21"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_164.operator_double_dbkb_U1", "Parent" : "15"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_164.operator_double_dbkb_U2", "Parent" : "15"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_164.operator_double_dbkb_U3", "Parent" : "15"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_164.operator_double_dbkb_U4", "Parent" : "15"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_164.operator_double_dbkb_U5", "Parent" : "15"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_164.operator_double_dbkb_U6", "Parent" : "15"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_170", "Parent" : "0", "Child" : ["23", "24", "25", "26", "27", "28"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_170.operator_double_dbkb_U1", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_170.operator_double_dbkb_U2", "Parent" : "22"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_170.operator_double_dbkb_U3", "Parent" : "22"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_170.operator_double_dbkb_U4", "Parent" : "22"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_170.operator_double_dbkb_U5", "Parent" : "22"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_170.operator_double_dbkb_U6", "Parent" : "22"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_176", "Parent" : "0", "Child" : ["30", "31", "32", "33", "34", "35"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_176.operator_double_dbkb_U1", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_176.operator_double_dbkb_U2", "Parent" : "29"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_176.operator_double_dbkb_U3", "Parent" : "29"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_176.operator_double_dbkb_U4", "Parent" : "29"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_176.operator_double_dbkb_U5", "Parent" : "29"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_176.operator_double_dbkb_U6", "Parent" : "29"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_182", "Parent" : "0", "Child" : ["37", "38", "39", "40", "41", "42"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_182.operator_double_dbkb_U1", "Parent" : "36"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_182.operator_double_dbkb_U2", "Parent" : "36"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_182.operator_double_dbkb_U3", "Parent" : "36"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_182.operator_double_dbkb_U4", "Parent" : "36"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_182.operator_double_dbkb_U5", "Parent" : "36"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_182.operator_double_dbkb_U6", "Parent" : "36"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_188", "Parent" : "0", "Child" : ["44", "45", "46", "47", "48", "49"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_188.operator_double_dbkb_U1", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_188.operator_double_dbkb_U2", "Parent" : "43"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_188.operator_double_dbkb_U3", "Parent" : "43"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_188.operator_double_dbkb_U4", "Parent" : "43"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_188.operator_double_dbkb_U5", "Parent" : "43"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_188.operator_double_dbkb_U6", "Parent" : "43"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_194", "Parent" : "0", "Child" : ["51", "52", "53", "54", "55", "56"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_194.operator_double_dbkb_U1", "Parent" : "50"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_194.operator_double_dbkb_U2", "Parent" : "50"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_194.operator_double_dbkb_U3", "Parent" : "50"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_194.operator_double_dbkb_U4", "Parent" : "50"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_194.operator_double_dbkb_U5", "Parent" : "50"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_div7_chunk_fu_194.operator_double_dbkb_U6", "Parent" : "50"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret4_14_i_i_lut_div7_chunk_fu_200", "Parent" : "0", "Child" : ["58", "59", "60", "61", "62", "63"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_14_i_i_lut_div7_chunk_fu_200.operator_double_dbkb_U1", "Parent" : "57"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_14_i_i_lut_div7_chunk_fu_200.operator_double_dbkb_U2", "Parent" : "57"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_14_i_i_lut_div7_chunk_fu_200.operator_double_dbkb_U3", "Parent" : "57"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_14_i_i_lut_div7_chunk_fu_200.operator_double_dbkb_U4", "Parent" : "57"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_14_i_i_lut_div7_chunk_fu_200.operator_double_dbkb_U5", "Parent" : "57"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_14_i_i_lut_div7_chunk_fu_200.operator_double_dbkb_U6", "Parent" : "57"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret4_15_i_i_lut_div7_chunk_fu_206", "Parent" : "0", "Child" : ["65", "66", "67", "68", "69", "70"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_15_i_i_lut_div7_chunk_fu_206.operator_double_dbkb_U1", "Parent" : "64"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_15_i_i_lut_div7_chunk_fu_206.operator_double_dbkb_U2", "Parent" : "64"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_15_i_i_lut_div7_chunk_fu_206.operator_double_dbkb_U3", "Parent" : "64"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_15_i_i_lut_div7_chunk_fu_206.operator_double_dbkb_U4", "Parent" : "64"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_15_i_i_lut_div7_chunk_fu_206.operator_double_dbkb_U5", "Parent" : "64"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_15_i_i_lut_div7_chunk_fu_206.operator_double_dbkb_U6", "Parent" : "64"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret4_16_i_i_lut_div7_chunk_fu_212", "Parent" : "0", "Child" : ["72", "73", "74", "75", "76", "77"],
		"CDFG" : "lut_div7_chunk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "d_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_16_i_i_lut_div7_chunk_fu_212.operator_double_dbkb_U1", "Parent" : "71"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_16_i_i_lut_div7_chunk_fu_212.operator_double_dbkb_U2", "Parent" : "71"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_16_i_i_lut_div7_chunk_fu_212.operator_double_dbkb_U3", "Parent" : "71"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_16_i_i_lut_div7_chunk_fu_212.operator_double_dbkb_U4", "Parent" : "71"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_16_i_i_lut_div7_chunk_fu_212.operator_double_dbkb_U5", "Parent" : "71"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret4_16_i_i_lut_div7_chunk_fu_212.operator_double_dbkb_U6", "Parent" : "71"}]}


set ArgLastReadFirstWriteLatency {
	operator_double_div7 {
		in_r {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}
	lut_div7_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "2"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_r { ap_none {  { in_r in_data 0 64 } } }
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
