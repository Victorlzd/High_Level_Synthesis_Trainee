package extensions;

import gecos.core.Procedure;
import gecos.core.ProcedureSet;
import gecos.gecosproject.GecosProject;
import modification.Visitor_op_replacer;
import util.File_builder;

public class Replace_Operator {

	private GecosProject p;
	
	public Replace_Operator(GecosProject p) {
		this.p = p;
	}
	
	public GecosProject compute() {
		File_builder.create_ps();
		for (ProcedureSet ps : p.listProcedureSets()) { // Iterate on each procedure set contained in a GeCoS project 
			for (Procedure pr : ps.listProcedures()) { // Iterate on each procedure contained in a procedure set
				Visitor_op_replacer visitor = new Visitor_op_replacer();
				pr.getBody().accept(visitor); // apply the visitor on the body block of a procedure
			}
		}
		
		return File_builder.add_files(p);	
	}

}
