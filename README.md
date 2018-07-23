# High_Level_Synthesis_Trainee
## Purpose of the project

The purpose of this project is to develop optimized operators to compute the division or multiplication by small integer constant for the High Level Synthethis tools for FPGA such as Vivado HLS. Afterwards this optimization is integrated to the compiler GeCoS. At the end it shoulds consist in a compilation pass which substitute all the division by small integer constant with the optimized version
fhzhie
## Develop Vivado HLS operator

The first step of the project was to develop optimized operators to compute division or multiplication by two or three with the tool Vivado HLS. This work is stocked in the folder operator_vivado.
## GeCoS compilation pass
### GeCoS Presentation

The GeCoS (Generic Compiler Suite) project is an open source compiler infrastructure developed in the CAIRN group since 2004. GeCoS is mainly a Source to Source compiler targeting HLS tools (Vivado HLS, Catapult-C, etc.).

For morefepz information about GeCoS, here is the official website : http://gecos.gforge.inria.fr/doku/doku.php

### Automation of the optimization
To automate the substitution of the division or multiplication by the optimized operator we integretate it to the GeCoS compiler. We create a new compilation pass for the GeCoS compiler wich will do this substitutions. GeCoS uses the Eclipse plug-in framework and to integrate a new pass we just have to add an extension to the GeCoS framework extension point. The folder optimized_operators_GeCoS stocked this java project.