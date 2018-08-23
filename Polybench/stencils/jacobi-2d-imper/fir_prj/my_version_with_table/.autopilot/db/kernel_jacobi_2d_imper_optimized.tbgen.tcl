set C_TypeInfoList {{ 
"kernel_jacobi_2d_imper_optimized" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"tsteps": [[], {"scalar": "int"}] }, {"n": [[], {"scalar": "int"}] }, {"A": [[], {"array": [ {"array": [ {"scalar": "double"}, [1000]]}, [1000]]}] }, {"B": [[], {"array": [ {"array": [ {"scalar": "double"}, [1000]]}, [1000]]}] }],[],""]
}}
set moduleName kernel_jacobi_2d_imper_optimized
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
set C_modelName {kernel_jacobi_2d_imper_optimized}
set C_modelType { void 0 }
set C_modelArgList {
	{ tsteps int 32 unused  }
	{ n int 32 unused  }
	{ A double 64 regular {array 1000000 { 1 2 } 3 1 }  }
	{ B double 64 regular {array 1000000 { 2 3 } 3 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "tsteps", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "tsteps","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "n", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "n","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "A", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "A","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1},{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "B", "interface" : "memory", "bitwidth" : 64, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "B","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 999,"step" : 1},{"low" : 0,"up" : 999,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ tsteps sc_in sc_lv 32 signal 0 } 
	{ n sc_in sc_lv 32 signal 1 } 
	{ A_address0 sc_out sc_lv 20 signal 2 } 
	{ A_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_q0 sc_in sc_lv 64 signal 2 } 
	{ A_address1 sc_out sc_lv 20 signal 2 } 
	{ A_ce1 sc_out sc_logic 1 signal 2 } 
	{ A_we1 sc_out sc_logic 1 signal 2 } 
	{ A_d1 sc_out sc_lv 64 signal 2 } 
	{ A_q1 sc_in sc_lv 64 signal 2 } 
	{ B_address0 sc_out sc_lv 20 signal 3 } 
	{ B_ce0 sc_out sc_logic 1 signal 3 } 
	{ B_we0 sc_out sc_logic 1 signal 3 } 
	{ B_d0 sc_out sc_lv 64 signal 3 } 
	{ B_q0 sc_in sc_lv 64 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "tsteps", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "tsteps", "role": "default" }} , 
 	{ "name": "n", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "n", "role": "default" }} , 
 	{ "name": "A_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "A", "role": "address0" }} , 
 	{ "name": "A_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A", "role": "ce0" }} , 
 	{ "name": "A_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A", "role": "q0" }} , 
 	{ "name": "A_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "A", "role": "address1" }} , 
 	{ "name": "A_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A", "role": "ce1" }} , 
 	{ "name": "A_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A", "role": "we1" }} , 
 	{ "name": "A_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A", "role": "d1" }} , 
 	{ "name": "A_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A", "role": "q1" }} , 
 	{ "name": "B_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "B", "role": "address0" }} , 
 	{ "name": "B_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B", "role": "ce0" }} , 
 	{ "name": "B_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B", "role": "we0" }} , 
 	{ "name": "B_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B", "role": "d0" }} , 
 	{ "name": "B_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "9", "10", "11", "12", "13"],
		"CDFG" : "kernel_jacobi_2d_imper_optimized",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "677362621", "EstimateLatencyMax" : "1792887101",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_operator_double_div5_fu_184"}],
		"Port" : [
			{"Name" : "tsteps", "Type" : "None", "Direction" : "I"},
			{"Name" : "n", "Type" : "None", "Direction" : "I"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "r0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_div5_fu_184", "Port" : "r0"}]},
			{"Name" : "r1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_div5_fu_184", "Port" : "r1"}]},
			{"Name" : "r2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_div5_fu_184", "Port" : "r2"}]},
			{"Name" : "q0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_div5_fu_184", "Port" : "q0"}]},
			{"Name" : "q1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_div5_fu_184", "Port" : "q1"}]},
			{"Name" : "q2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_double_div5_fu_184", "Port" : "q2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_184", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "operator_double_div5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "57",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"},
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lut_div5_chunk_fu_149"}],
		"Port" : [
			{"Name" : "in_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "r0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_lut_div5_chunk_fu_149", "Port" : "r0"}]},
			{"Name" : "r1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_lut_div5_chunk_fu_149", "Port" : "r1"}]},
			{"Name" : "r2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_lut_div5_chunk_fu_149", "Port" : "r2"}]},
			{"Name" : "q0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_lut_div5_chunk_fu_149", "Port" : "q0"}]},
			{"Name" : "q1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_lut_div5_chunk_fu_149", "Port" : "q1"}]},
			{"Name" : "q2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_lut_div5_chunk_fu_149", "Port" : "q2"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_184.grp_lut_div5_chunk_fu_149", "Parent" : "1", "Child" : ["3", "4", "5", "6", "7", "8"],
		"CDFG" : "lut_div5_chunk",
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
			{"Name" : "r_in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "r0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "q2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_184.grp_lut_div5_chunk_fu_149.r0_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_184.grp_lut_div5_chunk_fu_149.r1_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_184.grp_lut_div5_chunk_fu_149.r2_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_184.grp_lut_div5_chunk_fu_149.q0_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_184.grp_lut_div5_chunk_fu_149.q1_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_operator_double_div5_fu_184.grp_lut_div5_chunk_fu_149.q2_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_jacobi_2d_bkb_U10", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_jacobi_2d_cud_U11", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_jacobi_2d_cud_U12", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_jacobi_2d_cud_U13", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_jacobi_2d_cud_U14", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	kernel_jacobi_2d_imper_optimized {
		tsteps {Type I LastRead -1 FirstWrite -1}
		n {Type I LastRead -1 FirstWrite -1}
		A {Type IO LastRead 18 FirstWrite 9}
		B {Type IO LastRead 4 FirstWrite 27}
		r0 {Type I LastRead -1 FirstWrite -1}
		r1 {Type I LastRead -1 FirstWrite -1}
		r2 {Type I LastRead -1 FirstWrite -1}
		q0 {Type I LastRead -1 FirstWrite -1}
		q1 {Type I LastRead -1 FirstWrite -1}
		q2 {Type I LastRead -1 FirstWrite -1}}
	operator_double_div5 {
		in_r {Type I LastRead 0 FirstWrite -1}
		r0 {Type I LastRead -1 FirstWrite -1}
		r1 {Type I LastRead -1 FirstWrite -1}
		r2 {Type I LastRead -1 FirstWrite -1}
		q0 {Type I LastRead -1 FirstWrite -1}
		q1 {Type I LastRead -1 FirstWrite -1}
		q2 {Type I LastRead -1 FirstWrite -1}}
	lut_div5_chunk {
		d_V {Type I LastRead 0 FirstWrite -1}
		r_in_V {Type I LastRead 0 FirstWrite -1}
		r0 {Type I LastRead -1 FirstWrite -1}
		r1 {Type I LastRead -1 FirstWrite -1}
		r2 {Type I LastRead -1 FirstWrite -1}
		q0 {Type I LastRead -1 FirstWrite -1}
		q1 {Type I LastRead -1 FirstWrite -1}
		q2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "677362621", "Max" : "1792887101"}
	, {"Name" : "Interval", "Min" : "677362622", "Max" : "1792887102"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	tsteps { ap_none {  { tsteps in_data 0 32 } } }
	n { ap_none {  { n in_data 0 32 } } }
	A { ap_memory {  { A_address0 mem_address 1 20 }  { A_ce0 mem_ce 1 1 }  { A_q0 mem_dout 0 64 }  { A_address1 mem_address 1 20 }  { A_ce1 mem_ce 1 1 }  { A_we1 mem_we 1 1 }  { A_d1 mem_din 1 64 }  { A_q1 mem_dout 0 64 } } }
	B { ap_memory {  { B_address0 mem_address 1 20 }  { B_ce0 mem_ce 1 1 }  { B_we0 mem_we 1 1 }  { B_d0 mem_din 1 64 }  { B_q0 mem_dout 0 64 } } }
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
	{ A 3 }
	{ B 3 }
}
