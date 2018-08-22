#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/use_tab/lut_div3/.autopilot/db/a.g.bc ${1+"$@"}
