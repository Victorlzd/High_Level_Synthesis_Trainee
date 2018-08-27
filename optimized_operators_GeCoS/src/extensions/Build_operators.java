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
		//project.listProcedures()
		ProcedureSet ps = File_builder.create_ps();
		
		Div.build_int_div_by_constant(ps, 3, false);
		
		return File_builder.add_files(project);		
	}
	


}
