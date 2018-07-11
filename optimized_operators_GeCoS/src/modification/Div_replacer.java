package modification;

import fr.irisa.cairn.gecos.model.factory.GecosUserAnnotationFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserInstructionFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserTypeFactory;
import gecos.core.ProcedureSymbol;
import gecos.instrs.GenericInstruction;
import gecos.instrs.Instruction;
import gecos.instrs.IntInstruction;
import util.File_builder;

public class Div_replacer {
	
	public static void replace(GenericInstruction g)
	{
		if(g.getChild(1) instanceof IntInstruction)
		{
			IntInstruction constant = (IntInstruction) g.getChild(1);
			if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.FLOAT(), true, true, true))
				replace_const_float(g, constant, g.getChild(0));
			else if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.INT(), true, true, true))
				replace_const_int(g, constant, g.getChild(0));
			else if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.DOUBLE(), true, true, true))
				replace_const_double(g, constant, g.getChild(0));
			else if(g.getChild(0).getType().isEqual(GecosUserTypeFactory.LONG(), true, true, true))
				replace_const_long(g, constant, g.getChild(0));
		}
	}

	private static void replace_const_int(GenericInstruction g, IntInstruction constant, Instruction intExpression) {
		// Let x an integer as constant%x == 0
		// if we have an optimized operator that computes division by x we can optimize the division by constant
		// we replace this division by call to the optimized divider by x and divide the result by constant/x
		// int * constant  ===>>> int_divx_optimized(int) * (constant/x)
		
		// after this substitution we can recall the function because multiplication by constant/x could be optimized by the same way
		// this function realize a integer factorization of the constant restricted to the integer we have optimized
		if(constant.getValue() % 3 == 0)
		{
			// get optimized operator
			ProcedureSymbol int_div3 = operator.Div3.build_int_div3(File_builder.ps_impl);
			// call optimized operator
			Instruction call_int_div3 = GecosUserInstructionFactory.call(int_div3, intExpression.copy());
			// compute new constant
			IntInstruction new_constant = GecosUserInstructionFactory.Int(constant.getValue()/3);
			// create new instruction (call operator mul by new constant)
			GenericInstruction instr = GecosUserInstructionFactory.div(call_int_div3, new_constant);
			
			System.out.println(g+"   devient   "+instr);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(instr);
			
			// recursive call
			replace_const_int(instr, new_constant, call_int_div3);
			
		} else if(constant.getValue() == 1)
		{
			// our function often creates multiplication by 1
			// we remove them to have an output code clearer
			System.out.println(g+"   devient   "+intExpression);
			g.substituteWith(intExpression);
		}
		
	}

	private static void replace_const_float(GenericInstruction g, IntInstruction constant, Instruction floatExpression) 
	{
		// Let x an integer as constant%x == 0
		// if we have an optimized operator that computes division by x we can optimize the division by constant
		// we replace this division by call to the optimized divider by x and divide the result by constant/x
		// float * constant  ===>>> float_divx_optimized(float) * (constant/x)
		
		// after this substitution we can recall the function because multiplication by constant/x could be optimized by the same way
		// this function realize a integer factorization of the constant restricted to the integer we have optimized
		if(constant.getValue() % 2 == 0)
		{
			// get optimized operator
			ProcedureSymbol float_div2 = operator.Float_div2.build_float_div2(File_builder.ps_impl);
			// call optimized operator
			Instruction call_float_div2 = GecosUserInstructionFactory.call(float_div2, floatExpression.copy());
			// compute new constant
			IntInstruction new_constant = GecosUserInstructionFactory.Int(constant.getValue()/2);
			// create new instruction (call operator mul by new constant)
			GenericInstruction instr = GecosUserInstructionFactory.div(call_float_div2, new_constant);
			
			System.out.println(g+"   devient   "+instr);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(instr);
			
			// recursive call
			replace_const_float(instr, new_constant, call_float_div2);
			
		} else if(constant.getValue() % 3 == 0)
		{
			// get optimized operator
			ProcedureSymbol float_div3 = operator.Div3.build_float_div3(File_builder.ps_impl);
			// call optimized operator
			Instruction call_float_div3 = GecosUserInstructionFactory.call(float_div3, floatExpression.copy());
			// compute new constant
			IntInstruction new_constant = GecosUserInstructionFactory.Int(constant.getValue()/3);
			// create new instruction (call operator mul by new constant)
			GenericInstruction instr = GecosUserInstructionFactory.div(call_float_div3, new_constant);
			
			System.out.println(g+"   devient   "+instr);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(instr);
			
			// recursive call
			replace_const_float(instr, new_constant, call_float_div3);
			
		}else if(constant.getValue() == 1)
		{
			// our function often creates multiplication by 1
			// we remove them to have an output code clearer
			System.out.println(g+"   devient   "+floatExpression);
			g.substituteWith(floatExpression);
		}
	}
	
	private static void replace_const_double(GenericInstruction g, IntInstruction constant, Instruction doubleExpression) 
	{
		// Let x an integer as constant%x == 0
		// if we have an optimized operator that computes division by x we can optimize the division by constant
		// we replace this division by call to the optimized divider by x and divide the result by constant/x
		// double * constant  ===>>> double_divx_optimized(double) * (constant/x)
		
		// after this substitution we can recall the function because multiplication by constant/x could be optimized by the same way
		// this function realize a integer factorization of the constant restricted to the integer we have optimized
		if(constant.getValue() % 2 == 0)
		{
			// get optimized operator
			ProcedureSymbol double_div2 = operator.Float_div2.build_double_div2(File_builder.ps_impl);
			// call optimized operator
			Instruction call_double_div2 = GecosUserInstructionFactory.call(double_div2, doubleExpression.copy());
			// compute new constant
			IntInstruction new_constant = GecosUserInstructionFactory.Int(constant.getValue()/2);
			// create new instruction (call operator mul by new constant)
			GenericInstruction instr = GecosUserInstructionFactory.div(call_double_div2, new_constant);
			
			System.out.println(g+"   devient   "+instr);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(instr);
			
			// recursive call
			replace_const_double(instr, new_constant, call_double_div2);
			
		} else if(constant.getValue() % 3 == 0)
		{
			// get optimized operator
			ProcedureSymbol double_div3 = operator.Div3.build_double_div3(File_builder.ps_impl);
			// call optimized operator
			Instruction call_double_div3 = GecosUserInstructionFactory.call(double_div3, doubleExpression.copy());
			// compute new constant
			IntInstruction new_constant = GecosUserInstructionFactory.Int(constant.getValue()/3);
			// create new instruction (call operator mul by new constant)
			GenericInstruction instr = GecosUserInstructionFactory.div(call_double_div3, new_constant);
			
			System.out.println(g+"   devient   "+instr);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(instr);
			
			// recursive call
			replace_const_double(instr, new_constant, call_double_div3);
			
		}else if(constant.getValue() == 1)
		{
			// our function often creates multiplication by 1
			// we remove them to have an output code clearer
			System.out.println(g+"   devient   "+doubleExpression);
			g.substituteWith(doubleExpression);
		}
	}
	
	private static void replace_const_long(GenericInstruction g, IntInstruction constant, Instruction longExpression) {
		// Let x an integer as constant%x == 0
		// if we have an optimized operator that computes division by x we can optimize the division by constant
		// we replace this division by call to the optimized divider by x and divide the result by constant/x
		// long * constant  ===>>> long_divx_optimized(long) * (constant/x)
		
		// after this substitution we can recall the function because multiplication by constant/x could be optimized by the same way
		// this function realize a integer factorization of the constant restricted to the integer we have optimized
		if(constant.getValue() % 3 == 0)
		{
			// get optimized operator
			ProcedureSymbol long_div3 = operator.Div3.build_long_div3(File_builder.ps_impl);
			// call optimized operator
			Instruction call_long_div3 = GecosUserInstructionFactory.call(long_div3, longExpression.copy());
			// compute new constant
			IntInstruction new_constant = GecosUserInstructionFactory.Int(constant.getValue()/3);
			// create new instruction (call operator mul by new constant)
			GenericInstruction instr = GecosUserInstructionFactory.div(call_long_div3, new_constant);
			
			System.out.println(g+"   devient   "+instr);
			
			// we need to include the header file of the optimized operator
			GecosUserAnnotationFactory.pragma(g.getContainingProcedureSet(), "S2S4HLS:MODULE:PRINT:#include \""+File_builder.filename+".h\"");
			// substitute old instruction with the new one
			g.substituteWith(instr);
			
			// recursive call
			replace_const_long(instr, new_constant, call_long_div3);
			
		} else if(constant.getValue() == 1)
		{
			// our function often creates multiplication by 1
			// we remove them to have an output code clearer
			System.out.println(g+"   devient   "+longExpression);
			g.substituteWith(longExpression);
		}
		
	}

}
