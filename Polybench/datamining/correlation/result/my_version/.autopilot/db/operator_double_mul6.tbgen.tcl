set moduleName operator_double_mul6
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
set C_modelName {operator_double_mul6}
set C_modelType { double 64 }
set C_modelArgList {
	{ in_r double 64 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_r", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 64} ]}
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "10", "19", "28", "37", "46", "55", "64", "73", "82", "83"],
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
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q01"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q01"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q01"},
					{"ID" : "73", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q01"},
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q01"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q01"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q01"},
					{"ID" : "55", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q01"},
					{"ID" : "64", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q01"}]},
			{"Name" : "q12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q12"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q12"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q12"},
					{"ID" : "73", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q12"},
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q12"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q12"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q12"},
					{"ID" : "55", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q12"},
					{"ID" : "64", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q12"}]},
			{"Name" : "q23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q23"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q23"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q23"},
					{"ID" : "73", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q23"},
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q23"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q23"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q23"},
					{"ID" : "55", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q23"},
					{"ID" : "64", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q23"}]},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q3"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q3"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q3"},
					{"ID" : "73", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q3"},
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q3"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q3"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q3"},
					{"ID" : "55", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q3"},
					{"ID" : "64", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q3"}]},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q4"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q4"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q4"},
					{"ID" : "73", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q4"},
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q4"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q4"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q4"},
					{"ID" : "55", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q4"},
					{"ID" : "64", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q4"}]},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q5"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q5"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q5"},
					{"ID" : "73", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q5"},
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q5"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q5"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q5"},
					{"ID" : "55", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q5"},
					{"ID" : "64", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q5"}]},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q6"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q6"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q6"},
					{"ID" : "73", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q6"},
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q6"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q6"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q6"},
					{"ID" : "55", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q6"},
					{"ID" : "64", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q6"}]},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_lut_mul3_chunk_fu_290", "Port" : "q7"},
					{"ID" : "19", "SubInstance" : "grp_lut_mul3_chunk_fu_248", "Port" : "q7"},
					{"ID" : "28", "SubInstance" : "grp_lut_mul3_chunk_fu_269", "Port" : "q7"},
					{"ID" : "73", "SubInstance" : "grp_lut_mul3_chunk_fu_374", "Port" : "q7"},
					{"ID" : "1", "SubInstance" : "grp_lut_mul3_chunk_fu_206", "Port" : "q7"},
					{"ID" : "10", "SubInstance" : "grp_lut_mul3_chunk_fu_227", "Port" : "q7"},
					{"ID" : "46", "SubInstance" : "grp_lut_mul3_chunk_fu_311", "Port" : "q7"},
					{"ID" : "55", "SubInstance" : "grp_lut_mul3_chunk_fu_332", "Port" : "q7"},
					{"ID" : "64", "SubInstance" : "grp_lut_mul3_chunk_fu_353", "Port" : "q7"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206.q01_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206.q12_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206.q23_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206.q3_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206.q4_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206.q5_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206.q6_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_206.q7_U", "Parent" : "1"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15", "16", "17", "18"],
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
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227.q01_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227.q12_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227.q23_U", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227.q3_U", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227.q4_U", "Parent" : "10"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227.q5_U", "Parent" : "10"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227.q6_U", "Parent" : "10"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_227.q7_U", "Parent" : "10"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248", "Parent" : "0", "Child" : ["20", "21", "22", "23", "24", "25", "26", "27"],
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
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248.q01_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248.q12_U", "Parent" : "19"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248.q23_U", "Parent" : "19"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248.q3_U", "Parent" : "19"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248.q4_U", "Parent" : "19"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248.q5_U", "Parent" : "19"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248.q6_U", "Parent" : "19"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_248.q7_U", "Parent" : "19"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269", "Parent" : "0", "Child" : ["29", "30", "31", "32", "33", "34", "35", "36"],
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
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269.q01_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269.q12_U", "Parent" : "28"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269.q23_U", "Parent" : "28"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269.q3_U", "Parent" : "28"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269.q4_U", "Parent" : "28"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269.q5_U", "Parent" : "28"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269.q6_U", "Parent" : "28"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_269.q7_U", "Parent" : "28"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290", "Parent" : "0", "Child" : ["38", "39", "40", "41", "42", "43", "44", "45"],
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
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290.q01_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290.q12_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290.q23_U", "Parent" : "37"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290.q3_U", "Parent" : "37"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290.q4_U", "Parent" : "37"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290.q5_U", "Parent" : "37"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290.q6_U", "Parent" : "37"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_290.q7_U", "Parent" : "37"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311", "Parent" : "0", "Child" : ["47", "48", "49", "50", "51", "52", "53", "54"],
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
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311.q01_U", "Parent" : "46"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311.q12_U", "Parent" : "46"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311.q23_U", "Parent" : "46"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311.q3_U", "Parent" : "46"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311.q4_U", "Parent" : "46"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311.q5_U", "Parent" : "46"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311.q6_U", "Parent" : "46"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_311.q7_U", "Parent" : "46"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332", "Parent" : "0", "Child" : ["56", "57", "58", "59", "60", "61", "62", "63"],
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
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332.q01_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332.q12_U", "Parent" : "55"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332.q23_U", "Parent" : "55"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332.q3_U", "Parent" : "55"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332.q4_U", "Parent" : "55"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332.q5_U", "Parent" : "55"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332.q6_U", "Parent" : "55"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_332.q7_U", "Parent" : "55"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353", "Parent" : "0", "Child" : ["65", "66", "67", "68", "69", "70", "71", "72"],
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
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353.q01_U", "Parent" : "64"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353.q12_U", "Parent" : "64"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353.q23_U", "Parent" : "64"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353.q3_U", "Parent" : "64"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353.q4_U", "Parent" : "64"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353.q5_U", "Parent" : "64"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353.q6_U", "Parent" : "64"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_353.q7_U", "Parent" : "64"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374", "Parent" : "0", "Child" : ["74", "75", "76", "77", "78", "79", "80", "81"],
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
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374.q01_U", "Parent" : "73"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374.q12_U", "Parent" : "73"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374.q23_U", "Parent" : "73"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374.q3_U", "Parent" : "73"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374.q4_U", "Parent" : "73"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374.q5_U", "Parent" : "73"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374.q6_U", "Parent" : "73"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lut_mul3_chunk_fu_374.q7_U", "Parent" : "73"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_correlatiokbM_U23", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_correlatiolbW_U24", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		q7 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3", "Max" : "20"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "20"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_r { ap_none {  { in_r in_data 0 64 } } }
}
