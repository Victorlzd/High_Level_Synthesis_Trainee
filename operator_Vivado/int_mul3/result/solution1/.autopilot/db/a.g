#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/int_mul3/result/solution1/.autopilot/db/a.g.bc ${1+"$@"}
