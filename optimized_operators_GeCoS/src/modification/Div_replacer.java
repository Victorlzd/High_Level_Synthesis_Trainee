package modification;

import fr.irisa.cairn.gecos.model.factory.GecosUserAnnotationFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserInstructionFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserTypeFactory;
import gecos.core.ProcedureSymbol;
import gecos.instrs.GenericInstruction;
import gecos.instrs.Instruction;
import gecos.instrs.IntInstruction;
import operator.Div;
import util.File_builder;

/*
 * This method handles the substitution of the division by integer constant
 * with the appropriate optimized operator.
 */
public class Div_replacer {
	
	public static void replace(GenericInstruction g)
	{
		if(g.getChild(1) instanceof IntInstruction)
		{
			IntInstruction constant = (IntInstruction) g.getChild(1);
			if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.FLOAT(), true, true, true))
			{
				replace_const_float(g, constant, g.getChild(0));
			}
			else if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.INT(), true, true, true))
			{
				replace_const_int(g, constant, g.getChild(0));
			}
			else if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.DOUBLE(), true, true, true))
			{
				replace_const_double(g, constant, g.getChild(0));
			}
			else if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.LONG(), true, true, true))
			{
				replace_const_long(g, constant, g.getChild(0));
			}
		}
	}

	private static void replace_const_int(GenericInstruction g, IntInstruction constant, Instruction intExpression) 
	{
		
		ProcedureSymbol optimized_divider = Div.arbitrary_sized_int_div_by_constant(File_builder.ps_impl, (int) constant.getValue(), 32);
		
		if(optimized_divider != null)
		{
			Instruction call_optimized_divider = GecosUserInstructionFactory.call(optimized_divider, intExpression.copy());
			
			System.out.println(g+"   devient   "+call_optimized_divider);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(call_optimized_divider);
		}
		
		
	}

	private static void replace_const_float(GenericInstruction g, IntInstruction constant, Instruction floatExpression) 
	{
		ProcedureSymbol optimized_divider = Div.build_float_div_by_constant(File_builder.ps_impl, (int) constant.getValue(), false);
		
		if(optimized_divider != null)
		{
			Instruction call_optimized_divider = GecosUserInstructionFactory.call(optimized_divider, floatExpression.copy());
			
			System.out.println(g+"   devient   "+call_optimized_divider);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			
			g.substituteWith(call_optimized_divider);
		}
	}
	
	private static void replace_const_double(GenericInstruction g, IntInstruction constant, Instruction doubleExpression) 
	{
		ProcedureSymbol optimized_divider = Div.build_float_div_by_constant(File_builder.ps_impl, (int) constant.getValue(), true);
		
		if(optimized_divider != null)
		{
			Instruction call_optimized_divider = GecosUserInstructionFactory.call(optimized_divider, doubleExpression.copy());
			
			System.out.println(g+"   devient   "+call_optimized_divider);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(call_optimized_divider);
		}
	}
	
	private static void replace_const_long(GenericInstruction g, IntInstruction constant, Instruction longExpression) 
	{
		ProcedureSymbol optimized_divider = Div.arbitrary_sized_int_div_by_constant(File_builder.ps_impl, (int) constant.getValue(), 64);
		
		if(optimized_divider != null)
		{
			Instruction call_optimized_divider = GecosUserInstructionFactory.call(optimized_divider, longExpression.copy());
			
			System.out.println(g+"   devient   "+call_optimized_divider);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(call_optimized_divider);
		}
	}

}
