#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/Polybench/stencils/jacobi-2d-imper/fir_prj/test3/.autopilot/db/a.g.bc ${1+"$@"}
