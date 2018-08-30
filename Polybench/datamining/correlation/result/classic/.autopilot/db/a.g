#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/Polybench/datamining/correlation/result/classic/.autopilot/db/a.g.bc ${1+"$@"}
