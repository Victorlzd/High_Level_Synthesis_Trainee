#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/first_try/fir_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
