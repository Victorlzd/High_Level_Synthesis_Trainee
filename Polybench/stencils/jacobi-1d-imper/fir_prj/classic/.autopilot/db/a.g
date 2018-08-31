#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/Polybench/stencils/jacobi-1d-imper/fir_prj/classic/.autopilot/db/a.g.bc ${1+"$@"}
