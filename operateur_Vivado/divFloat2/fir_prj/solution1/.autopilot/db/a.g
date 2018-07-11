#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/operateur_Vivado/divFloat2/fir_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
