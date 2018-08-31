package extensions;


import fr.irisa.cairn.gecos.model.factory.GecosUserCoreFactory;
import gecos.core.ProcedureSet;
import gecos.gecosproject.GecosProject;
import operator.*;
import util.*;

public class Build_operators {
	/*
	 * This extension is used to generate the code of the operators
	 * Just add a call to operator.Div or operator.Mul method to generate the
	 * code of the operators
	 */
	
	
	public static ProcedureSet ps_h = GecosUserCoreFactory.procedureSet();

	public Build_operators () {
	}
	
	public GecosProject compute() {
		GecosProject project = GecosUserCoreFactory.project("build_operators");
		ProcedureSet ps = File_builder.create_ps();
		
		// add method call here
		Div.build_float_div_by_constant(ps, 2, true);
		Mul.build_float_mul_by_constant(ps, 7, true);
		Div.build_float_div_by_constant(ps, 10, true);
		
		return File_builder.add_files(project);		
	}
	


}
