#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/duazel/Documents/stage3IF/High_Level_Synthesis_Trainee/operator_Vivado/testing_area/test_vivado_int_multiplier/mul11_int_vivado/.autopilot/db/a.g.bc ${1+"$@"}
