#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/int_13_div3/fir_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
