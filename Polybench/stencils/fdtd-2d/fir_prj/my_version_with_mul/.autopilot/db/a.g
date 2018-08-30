#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/Polybench/stencils/fdtd-2d/fir_prj/my_version_with_mul/.autopilot/db/a.g.bc ${1+"$@"}
