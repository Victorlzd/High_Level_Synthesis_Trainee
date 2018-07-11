package util;

import java.util.ArrayList;

import fr.irisa.cairn.gecos.model.factory.GecosUserAnnotationFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserCoreFactory;
import gecos.core.ProcedureSet;
import gecos.core.ProcedureSymbol;
import gecos.gecosproject.GecosProject;

public class File_builder {
	
	public static final String filename = "optimized_operators";
	
	public static ProcedureSet ps_impl;
	
	private static ProcedureSet ps_header;
	private static ArrayList<ProcedureSymbol> proc_symbol = new ArrayList<ProcedureSymbol>();
	
	public static ProcedureSet create_ps()
	{
		ps_impl = GecosUserCoreFactory.procedureSet();
		GecosUserAnnotationFactory.pragma(ps_impl, "S2S4HLS:MODULE:PRINT:#include <ap_int.h>");
		
		return ps_impl;
	}
	
	public static void add_operator(ProcedureSymbol psymbol)
	{
		proc_symbol.add(psymbol);
	}
	
	public static GecosProject add_files(GecosProject project)
	{
		ps_header = file_h(proc_symbol);

		project.getSources().add(GecosUserCoreFactory.source(filename+".cpp", ps_impl));
		project.getSources().add(GecosUserCoreFactory.source(filename+".h", ps_header));
		System.out.println(project.getSources());
		return project;		
	}
	
	private static ProcedureSet file_h(ArrayList<ProcedureSymbol> pr_symbol)
	{
		ProcedureSet ps = GecosUserCoreFactory.procedureSet();
		for (ProcedureSymbol procedureSymbol : pr_symbol) {
			ProcedureSymbol copy = procedureSymbol.copy();
			copy.setProcedure(null);
			ps.getScope().addSymbol(copy);
		}
		return ps;
	}
}
