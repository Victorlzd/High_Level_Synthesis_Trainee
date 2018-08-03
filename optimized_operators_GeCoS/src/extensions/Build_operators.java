package extensions;


import fr.irisa.cairn.gecos.model.factory.GecosUserCoreFactory;
import gecos.core.ProcedureSet;
import gecos.gecosproject.GecosProject;
import operator.*;
import util.*;

public class Build_operators {
	public static ProcedureSet ps_h = GecosUserCoreFactory.procedureSet();

	public Build_operators () {
	}
	
	public GecosProject compute() {
		GecosProject project = GecosUserCoreFactory.project("build_operators");
		ProcedureSet ps = File_builder.create_ps();
		
		Div.build_int_div_by_constant(ps, 2, true);
		Div.build_int_div_by_constant(ps, 3, true);
		Div.build_int_div_by_constant(ps, 4, true);
		Div.build_int_div_by_constant(ps, 5, true);
		Div.build_int_div_by_constant(ps, 6, true);
		Div.build_int_div_by_constant(ps, 7, true);
		Div.build_int_div_by_constant(ps, 9, true);
		Div.build_int_div_by_constant(ps, 10, true);
		Div.build_int_div_by_constant(ps, 11, true);
		
		Div.build_float_div_by_constant(ps, 2, true);
		Div.build_float_div_by_constant(ps, 3, true);
		Div.build_float_div_by_constant(ps, 4, true);
		Div.build_float_div_by_constant(ps, 5, true);
		Div.build_float_div_by_constant(ps, 6, true);
		Div.build_float_div_by_constant(ps, 7, true);
		Div.build_float_div_by_constant(ps, 9, true);
		Div.build_float_div_by_constant(ps, 10, true);
		Div.build_float_div_by_constant(ps, 11, true);
		
		Div.build_float_div_by_constant(ps, 2, false);
		Div.build_float_div_by_constant(ps, 3, false);
		Div.build_float_div_by_constant(ps, 4, false);
		Div.build_float_div_by_constant(ps, 5, false);
		Div.build_float_div_by_constant(ps, 6, false);
		Div.build_float_div_by_constant(ps, 7, false);
		Div.build_float_div_by_constant(ps, 9, false);
		Div.build_float_div_by_constant(ps, 10, false);
		Div.build_float_div_by_constant(ps, 11, false);
		
		
		return File_builder.add_files(project);		
	}
	


}
