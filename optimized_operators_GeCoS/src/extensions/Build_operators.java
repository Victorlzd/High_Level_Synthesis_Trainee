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
		
		Float_div2.build_float_div2(ps);
		Float_div2.build_double_div2(ps);
		Div3.build_double_div3(ps);
		Div3.build_float_div3(ps);
		Div3.build_int_div3(ps);
		Div3.build_long_div3(ps);
		Float_mul2.build_double_mul2(ps);
		Float_mul2.build_float_mul2(ps);
		
		return File_builder.add_files(project);		
	}
	


}
