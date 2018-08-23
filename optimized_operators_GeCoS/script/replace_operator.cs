echo("Preparation du projet");
#CDTUseGecosStandardIncludes();

p = CreateGecosProject("IfCounterVisitor"); # Create a empty GeCoS project
AddSourceToGecosProject(p, "input_c/example.c"); # Add a new C source in the project
CDTFrontend(p); # Generate the GeCoS IR from the C source added
echo("Done");

#GecosTreeToDAGIRConversion(p);
#output(p,"dot","/tmp/test");
#GecosTreeToDAGIRConversion(p);
echo("appel replace_operator");
p = replace_operator(p);
echo("Done");

echo("Executing SetBitAccurateBackend('VivadoAP')... ");
SetBitAccurateBackend("VivadoAP");
echo("Done");

#echo("Saving Project...");
#SaveGecosProject(p, "project_from_factories.gecosproject");
#echo("Done");

#ClearControlFlow(p);
#BuildControlFlow(p);
GecosDAGToTreeIRConversion(p);

echo("Writing c file...");
output(p, "c", "output"); # Generate the C source code from the GeCoS IR
echo("Done");