#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/test_with_tab/lut_div3_origin/.autopilot/db/a.g.bc ${1+"$@"}
