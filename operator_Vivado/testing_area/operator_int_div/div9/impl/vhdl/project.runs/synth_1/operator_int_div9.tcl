# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
create_project -in_memory -part xc7k160tfbg484-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/operator_int_div/div9/impl/vhdl/project.cache/wt [current_project]
set_property parent.project_path /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/operator_int_div/div9/impl/vhdl/project.xpr [current_project]
set_property XPM_LIBRARIES XPM_MEMORY [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language VHDL [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_vhdl -library xil_defaultlib {
  /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/operator_int_div/div9/impl/vhdl/lut_div9_chunk.vhd
  /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/operator_int_div/div9/impl/vhdl/operator_int_div9.vhd
  /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/operator_int_div/div9/impl/vhdl/operator_int_div9bkb.vhd
}
# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/operator_int_div/div9/impl/vhdl/operator_int_div9.xdc
set_property used_in_implementation false [get_files /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/operator_int_div/div9/impl/vhdl/operator_int_div9.xdc]

set_param ips.enableIPCacheLiteLoad 0
close [open __synthesis_is_running__ w]

synth_design -top operator_int_div9 -part xc7k160tfbg484-1 -directive sdx_optimization_effort_high -no_iobuf -mode out_of_context


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef operator_int_div9.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file operator_int_div9_utilization_synth.rpt -pb operator_int_div9_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
