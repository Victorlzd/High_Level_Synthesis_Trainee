#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/Polybench/stencils/seidel-2d/fir_prj/classic/.autopilot/db/a.g.bc ${1+"$@"}
