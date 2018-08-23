#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/Polybench/stencils/jacobi-2d-imper/fir_prj/my_version_with_table/.autopilot/db/a.g.bc ${1+"$@"}
