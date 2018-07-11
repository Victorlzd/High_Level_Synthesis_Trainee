echo("Executing script");

echo("Executing buildDivFloat2... ");
project = Build_operators(); # Call the script command which correspond to our GeCoS module
echo("Done");

echo("Executing SetBitAccurateBackend('VivadoAP')... ");
SetBitAccurateBackend("VivadoAP");
echo("Done");

echo("Saving Project...");
SaveGecosProject(project, "project_from_factories.gecosproject");
echo("Done");

echo("Writing c file...");
output(project, "c", "output"); # Generate the C source code from the GeCoS IR
echo("Done");

echo("Script terminated");