#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/vivado_hls_int_div/div2/.autopilot/db/a.g.bc ${1+"$@"}
