package modification;

import fr.irisa.cairn.gecos.model.factory.GecosUserAnnotationFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserInstructionFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserTypeFactory;
import gecos.core.ProcedureSymbol;
import gecos.instrs.*;
import util.File_builder;

public class Mul_replacer {
	
	public static void replace(GenericInstruction g)
	{
		if(g.getChild(0) instanceof IntInstruction)
		{
			IntInstruction constant = (IntInstruction) g.getChild(0);
			
			if(g.getChild(1).getType().isEqual(GecosUserTypeFactory.FLOAT(), true, true, true))
				replace_const_float(g, constant, g.getChild(1));
			else if(g.getChild(1).getType().isEqual(GecosUserTypeFactory.DOUBLE(), true, true, true))
				replace_const_double(g, constant, g.getChild(1));
		}
		else if(g.getChild(1) instanceof IntInstruction)
		{
			IntInstruction constant = (IntInstruction) g.getChild(1);
			if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.FLOAT(), true, true, true))
				replace_const_float(g, constant, g.getChild(0));
			else if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.DOUBLE(), true, true, true))
				replace_const_double(g, constant, g.getChild(0));
		}
	}

	private static void replace_const_float(GenericInstruction g, IntInstruction constant, Instruction floatExpression) 
	{
		int mul_factor = (int) constant.getValue();
		
		ProcedureSymbol float_mul = operator.Mul.build_float_mul_by_constant(File_builder.ps_impl, mul_factor, false);
		// call optimized operator
		Instruction call_operator = GecosUserInstructionFactory.call(float_mul, floatExpression.copy()); 
		
		
		System.out.println(g+"   devient   "+call_operator);
		
		// we need to include the header file of the optimized operator
		GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
		// substitute old instruction with the new one
		g.substituteWith(call_operator);
	}
	
	private static void replace_const_double(GenericInstruction g, IntInstruction constant, Instruction doubleExpression) 
	{
		int mul_factor = (int) constant.getValue();
		
		ProcedureSymbol float_mul = operator.Mul.build_float_mul_by_constant(File_builder.ps_impl, mul_factor, true);
		// call optimized operator
		Instruction call_operator = GecosUserInstructionFactory.call(float_mul, doubleExpression.copy()); 
		
		
		System.out.println(g+"   devient   "+call_operator);
		
		// we need to include the header file of the optimized operator
		GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
		// substitute old instruction with the new one
		g.substituteWith(call_operator);
	}
}
