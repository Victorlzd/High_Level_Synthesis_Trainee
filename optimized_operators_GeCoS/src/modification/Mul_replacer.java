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
		// Let x an integer as constant%x == 0
		// if we have an optimized operator that computes multiplication by x we can optimize the multiplication by constant
		// we replace this multiplication by call to the optimized multiplier by x and multiply the result by constant/x
		// float * constant  ===>>> float_mulx_optimized(float) * (constant/x)
		
		// after this substitution we can recall the function because multiplication by constant/x could be optimized by the same way
		// this function realize a integer factorization of the constant restricted to the integer we have optimized
		if(constant.getValue() % 2 == 0)
		{
			// get optimized operator
			ProcedureSymbol float_mult2 = operator.Float_mul2.build_float_mul2(File_builder.ps_impl); 
			// call optimized operator
			Instruction call_mult_div2 = GecosUserInstructionFactory.call(float_mult2, floatExpression.copy()); 
			
			// compute new constant
			IntInstruction new_constant = GecosUserInstructionFactory.Int(constant.getValue()/2);
			// create new instruction (call operator mul by new constant)
			GenericInstruction instr = GecosUserInstructionFactory.mul(call_mult_div2, new_constant);
			
			System.out.println(g+"   devient   "+instr);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(instr);
			
			// recursive call
			replace_const_float(instr, new_constant, call_mult_div2);
			
		}else if(constant.getValue() == 1)
		// our function often creates multiplication by 1
		// we remove them to have an output code clearer
		{
			System.out.println(g+"   devient   "+floatExpression);
			g.substituteWith(floatExpression);
		}
	}
	
	private static void replace_const_double(GenericInstruction g, IntInstruction constant, Instruction doubleExpression) 
	{
		// Let x an integer as constant%x == 0
		// if we have an optimized operator that computes multiplication by x we can optimize the multiplication by constant
		// we replace this multiplication by call to the optimized multiplier by x and multiply the result by constant/x
		// double * constant  ===>>> double_mulx_optimized(float) * (constant/x)
		
		// after this substitution we can recall the function because multiplication by constant/x could be optimized by the same way
		// this function realize a integer factorization of the constant restricted to the integer we have optimized
		if(constant.getValue() % 2 == 0)
		{
			// get optimized operator
			ProcedureSymbol double_mult2 = operator.Float_mul2.build_double_mul2(File_builder.ps_impl);
			// call optimized operator
			Instruction call_mult_div2 = GecosUserInstructionFactory.call(double_mult2, doubleExpression.copy());
			
			// compute new constant
			IntInstruction new_constant = GecosUserInstructionFactory.Int(constant.getValue()/2);
			// create new instruction (call operator mul by new constant)
			GenericInstruction instr = GecosUserInstructionFactory.mul(call_mult_div2, new_constant);
			
			System.out.println(g+"   devient   "+instr);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(instr);
			
			// recursive call
			replace_const_double(instr, new_constant, call_mult_div2);
			
		}else if(constant.getValue() == 1)
		{
			System.out.println(g+"   devient   "+doubleExpression);
			g.substituteWith(doubleExpression);
		}
	}
}
