package operator;

import java.util.ArrayList;

import fr.irisa.cairn.gecos.model.factory.GecosUserAnnotationFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserBlockFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserCoreFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserInstructionFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserTypeFactory;
import gecos.blocks.BasicBlock;
import gecos.blocks.CompositeBlock;
import gecos.blocks.IfBlock;
import gecos.core.ParameterSymbol;
import gecos.core.ProcedureSet;
import gecos.core.ProcedureSymbol;
import gecos.core.Symbol;
import gecos.instrs.Instruction;
import gecos.instrs.SetInstruction;
import util.Calcul;
import util.File_builder;
import util.Float_fix;

public class Float_mul2 {
	/* This class provides an optimized operator for computing 
	 * the multiplication by 2 of a float or a double
	 */
	
	private static ProcedureSymbol proc_symbol_float;
	private static ProcedureSymbol proc_symbol_double;

	public static ProcedureSymbol build_float_mul2(ProcedureSet ps)
	// This function provides a function which implement an optimized
	// operator for the multiplication by 2 of a float
	// return the symbol of the function
	{
		if(proc_symbol_float==null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_float_mul2 = new ArrayList<ParameterSymbol>();
			// float in
			param_float_mul2.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.FLOAT()));
			// float float_mul2(float in)
			proc_symbol_float = GecosUserCoreFactory.procSymbol("float_mul2", GecosUserTypeFactory.FLOAT(), param_float_mul2);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(proc_symbol_float, "float_mul2 implements a multiplication by two of the float in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope()); // Changing scope
			
			GecosUserAnnotationFactory.comment(mainblock, "This function is composed by three parts :\n"
					+ "1) Decompose the input float in its three parts (sign,exponent,mantissa) \n"
					+ "2) Compute the multiplication by two by manipulating directly this three parts\n"
					+ "3) Rebuild a float with the three modified parts and return it");
			
			// Variable definition
			// ap_uint<1> s;
			Symbol s_symbol = GecosUserCoreFactory.symbol("s", GecosUserTypeFactory.ACINT(1, false));
			// ap_uint<8> exp;
			Symbol exp_symbol = GecosUserCoreFactory.symbol("exp", GecosUserTypeFactory.ACINT(8, false));
			// ap_uint<23> mant;
			Symbol mant_symbol = GecosUserCoreFactory.symbol("mant", GecosUserTypeFactory.ACINT(23, false));
			// ap_uint<8> new_exp;
			Symbol new_exp_symbol = GecosUserCoreFactory.symbol("new_exp", GecosUserTypeFactory.ACINT(8, false));
			// ap_uint<23> new_mant;
			Symbol new_mant_symbol = GecosUserCoreFactory.symbol("new_mant", GecosUserTypeFactory.ACINT(23, false));
			// float out;
			Symbol out_symbol = GecosUserCoreFactory.symbol("out", GecosUserTypeFactory.FLOAT());
			
			mainblock.addSymbol(s_symbol);
			mainblock.addSymbol(exp_symbol);
			mainblock.addSymbol(mant_symbol);
			mainblock.addSymbol(new_exp_symbol);
			mainblock.addSymbol(new_mant_symbol);
			mainblock.addSymbol(out_symbol);
			
			BasicBlock bb_decompose = GecosUserBlockFactory.BBlock();
			
			// (in, &s, &exp, &mant)
			Instruction[] args_decomposition = {GecosUserInstructionFactory.symbref(param_float_mul2.get(0)),
			        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(s_symbol)),
			        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(exp_symbol)),
			        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(mant_symbol))};
			ProcedureSymbol decompose = Float_fix.build_decompose_float(ps);
			// decompose_float(in, &s, &exp, &mant)
			Instruction decompose_call = GecosUserInstructionFactory.call(decompose, args_decomposition);
			bb_decompose.addInstruction(decompose_call);
			
			// new_exp = exp;
			SetInstruction new_exp_exp = GecosUserInstructionFactory.set(new_exp_symbol, GecosUserInstructionFactory.symbref(exp_symbol));
			bb_decompose.addInstruction(new_exp_exp);
			
			// new_mant = mant;
			SetInstruction new_mant_mant = GecosUserInstructionFactory.set(new_mant_symbol, GecosUserInstructionFactory.symbref(mant_symbol));
			bb_decompose.addInstruction(new_mant_mant);
			
			// begin if_exp
			// condition instruction
			// exp != 2^8-1
			Instruction exp_diff_2_pow_8_min_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                           GecosUserInstructionFactory.Int(Calcul.pow2(8)-1));
			Instruction exp_diff_0 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                         GecosUserInstructionFactory.Int(0));
			// mant[22]
			Instruction mant22 = GecosUserInstructionFactory.array(mant_symbol, GecosUserInstructionFactory.Int(22));
			// exp != 2^8-1 & (exp != 0 | mant[22])
			Instruction cond_exp = GecosUserInstructionFactory.and(exp_diff_2_pow_8_min_1,
			                       GecosUserInstructionFactory.or(exp_diff_0, mant22));
			// then block if_exp
			// new_exp = exp - 1;
			BasicBlock then_exp = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, 
			         GecosUserInstructionFactory.add(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(1))));
			
			IfBlock if_exp = GecosUserBlockFactory.IfThen(cond_exp, then_exp);
			GecosUserAnnotationFactory.comment(if_exp, "In the general case the multiplication by two is just a incrementation by 1 of the exponent\n"
					+ "We need to exclude the infinite and NaN (exp==255) the resuslts that stays sub-normals (exp==0|mant[22])");
			// end if_exp
			
			
			// begin if_mant
			// condition instruction
			// exp == 254
			Instruction cond_if_mant = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(254));
			// then if_mant
			// new_mant = 0;
			Instruction new_mant_0 = GecosUserInstructionFactory.set(new_mant_symbol, GecosUserInstructionFactory.Int(0));
			BasicBlock new_mant_0_bb = GecosUserBlockFactory.BBlock(new_mant_0);
			
			// begin else if_mant
			// begin if_sub_normal
			// condition instruction
			// exp == 0
			Instruction cond_if_sub_normal = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
	                GecosUserInstructionFactory.Int(0));
			// then if_sub_normal
			// new_mant = mant * 2;
			Instruction new_mant_mant_mul_2 = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(new_mant_symbol), 
	                GecosUserInstructionFactory.mul(GecosUserInstructionFactory.symbref(mant_symbol), GecosUserInstructionFactory.Int(2)));
			BasicBlock new_mant_mant_mul_2_bb = GecosUserBlockFactory.BBlock(new_mant_mant_mul_2);
			
			IfBlock if_sub_normal = GecosUserBlockFactory.IfThen(cond_if_sub_normal, new_mant_mant_mul_2_bb);
			GecosUserAnnotationFactory.comment(if_sub_normal, "If the number is sub-normal weneed to multiply the mantissa by 2");
			// end if_sub_normal
			// end else if_mant
			
			IfBlock if_mant = GecosUserBlockFactory.IfThenElse(cond_if_mant, new_mant_0_bb, if_sub_normal);
			GecosUserAnnotationFactory.comment(if_mant, "If the number becomes infinite we need to fix the mantissa to 0");
			// and if_mant
			
			BasicBlock bb_rebuild = GecosUserBlockFactory.BBlock();
			// (s, exp, mant, &out)
			Instruction[] args_rebuild = {GecosUserInstructionFactory.symbref(s_symbol),
			                       GecosUserInstructionFactory.symbref(new_exp_symbol),
			                       GecosUserInstructionFactory.symbref(new_mant_symbol),
			                       GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(out_symbol))};
			ProcedureSymbol rebuild = Float_fix.build_rebuild_float(ps);
			// rebuild_float(s, exp, mant, &out)
			Instruction rebuild_call = GecosUserInstructionFactory.call(rebuild, args_rebuild);
			bb_rebuild.addInstruction(rebuild_call);
			
			// return out;
			Instruction ret_out = GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(out_symbol));
			bb_rebuild.addInstruction(ret_out);
			

			mainblock.addChildren(bb_decompose);
			mainblock.addChildren(if_exp);
			mainblock.addChildren(if_mant);
			mainblock.addChildren(bb_rebuild);
			
			
			GecosUserCoreFactory.proc(ps, proc_symbol_float, mainblock);
			File_builder.add_operator(proc_symbol_float);
		}		
		
		return proc_symbol_float;
	}

	public static ProcedureSymbol build_double_mul2(ProcedureSet ps)
	// This function provides a function which implement an optimized
	// operator for the multiplication by 2 of a float
	// return the symbol of the function
	{
		if(proc_symbol_double==null) // We need to define the function if it isn't yet
		{			
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_div_double2 = new ArrayList<ParameterSymbol>();
			// double in
			param_div_double2.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.DOUBLE()));
			// double double_mul2(double in)
			proc_symbol_double = GecosUserCoreFactory.procSymbol("double_mul2", GecosUserTypeFactory.DOUBLE(), param_div_double2);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(proc_symbol_double, "double_mul2 implements a multiplication by two of the double in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope()); 

			GecosUserAnnotationFactory.comment(mainblock, "This function is composed by three parts :\n"
					+ "1) Decompose the input double in its three parts (sign,exponent,mantissa) \n"
					+ "2) Compute the multiplication by two by manipulating directly this three parts\n"
					+ "3) Rebuild a double with the three modified parts and return it");
			
			// Variable declaration
			// ap_uint<1> s
			Symbol s_symbol = GecosUserCoreFactory.symbol("s", GecosUserTypeFactory.ACINT(1, false));
			// ap_uint<11> exp
			Symbol exp_symbol = GecosUserCoreFactory.symbol("exp", GecosUserTypeFactory.ACINT(11, false));
			// ap_uint<52> mant
			Symbol mant_symbol = GecosUserCoreFactory.symbol("mant", GecosUserTypeFactory.ACINT(52, false));
			// ap_uint<11> new_exp
			Symbol new_exp_symbol = GecosUserCoreFactory.symbol("new_exp", GecosUserTypeFactory.ACINT(11, false));
			// ap_uint<52> new_mant
			Symbol new_mant_symbol = GecosUserCoreFactory.symbol("new_mant", GecosUserTypeFactory.ACINT(52, false));
			// double out;
			Symbol out_symbol = GecosUserCoreFactory.symbol("out", GecosUserTypeFactory.DOUBLE());
			
			mainblock.addSymbol(s_symbol);
			mainblock.addSymbol(exp_symbol);
			mainblock.addSymbol(mant_symbol);
			mainblock.addSymbol(new_exp_symbol);
			mainblock.addSymbol(new_mant_symbol);
			mainblock.addSymbol(out_symbol);
			
			BasicBlock bb_decompose = GecosUserBlockFactory.BBlock();
			// (in, &s, &exp, &mant)
			Instruction[] args_decomposition = {GecosUserInstructionFactory.symbref(param_div_double2.get(0)),
			        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(s_symbol)),
			        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(exp_symbol)),
			        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(mant_symbol))};
			ProcedureSymbol decompose = Float_fix.build_decompose_double(ps);
			// decompose_double(in, &s, &exp, &mant)
			Instruction decompose_call = GecosUserInstructionFactory.call(decompose, args_decomposition);
			bb_decompose.addInstruction(decompose_call);
			
			// new_exp = exp;
			SetInstruction new_exp_exp = GecosUserInstructionFactory.set(new_exp_symbol, GecosUserInstructionFactory.symbref(exp_symbol));
			bb_decompose.addInstruction(new_exp_exp);
			
			// new_mant = mant;
			SetInstruction new_mant_mant = GecosUserInstructionFactory.set(new_mant_symbol, GecosUserInstructionFactory.symbref(mant_symbol));
			bb_decompose.addInstruction(new_mant_mant);
			
			// begin if_exp
			// condition instruction :
			// exp != 2^11-1
			Instruction exp_diff_2_pow_11_min_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                           GecosUserInstructionFactory.Int(Calcul.pow2(11)-1));
			// esp != 0
			Instruction exp_diff_0 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                         GecosUserInstructionFactory.Int(0));
			// mant[51]
			Instruction mant51 = GecosUserInstructionFactory.array(mant_symbol, GecosUserInstructionFactory.Int(51));
			// exp!= 2^11-1 & (exp!=0 | mant[51])
			Instruction cond_exp = GecosUserInstructionFactory.and(exp_diff_2_pow_11_min_1,
			                       GecosUserInstructionFactory.or(exp_diff_0, mant51));
			// then block if_exp
			// new_exp = exp+1
			BasicBlock then_exp = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, 
			         GecosUserInstructionFactory.add(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(1))));
			
			IfBlock if_exp = GecosUserBlockFactory.IfThen(cond_exp, then_exp);
			GecosUserAnnotationFactory.comment(if_exp, "In the general case the multiplication by two is just a incrementation by 1 of the exponent\n"
					+ "We need to exclude the infinite and NaN (exp==255) the resuslts that stays sub-normals (exp==0|mant[22])");
			// end if_exp
			
			
			// begin if_mant
			// condition instruction :
			// exp == 2^11-2
			Instruction cond_if_mant = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(Calcul.pow2(11)-2));
			// then block if_mant
			// new_mant = 0;
			Instruction new_mant_0 = GecosUserInstructionFactory.set(new_mant_symbol, GecosUserInstructionFactory.Int(0));
			BasicBlock new_mant_0_bb = GecosUserBlockFactory.BBlock(new_mant_0);
			
			// begin else block if_mant
			// begin if_sub_normal
			// condition instruction :
			// exp == 0
			Instruction cond_if_sub_normal = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
	                GecosUserInstructionFactory.Int(0));
			// then block if_sub_normal
			// new_mant = mant * 2;
			Instruction new_mant_mant_mul_2 = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(new_mant_symbol), 
	                GecosUserInstructionFactory.mul(GecosUserInstructionFactory.symbref(mant_symbol), GecosUserInstructionFactory.Int(2)));
			BasicBlock new_mant_mant_mul_2_bb = GecosUserBlockFactory.BBlock(new_mant_mant_mul_2);
			
			IfBlock if_sub_normal = GecosUserBlockFactory.IfThen(cond_if_sub_normal, new_mant_mant_mul_2_bb);
			GecosUserAnnotationFactory.comment(if_sub_normal, "If the number is sub-normal weneed to multiply the mantissa by 2");
			// end if_sub_normal
			// end else block if_mant
			IfBlock if_mant = GecosUserBlockFactory.IfThenElse(cond_if_mant, new_mant_0_bb, if_sub_normal);
			GecosUserAnnotationFactory.comment(if_mant, "If the number becomes infinite we need to fix the mantissa to 0");
			// end if_mant
			
			BasicBlock bb_rebuild = GecosUserBlockFactory.BBlock();
			// (s, new_exp, new_mant, &out)
			Instruction[] args_recomposition = {GecosUserInstructionFactory.symbref(s_symbol),
			                       GecosUserInstructionFactory.symbref(new_exp_symbol),
			                       GecosUserInstructionFactory.symbref(new_mant_symbol),
			                       GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(out_symbol))};
			ProcedureSymbol rebuild = Float_fix.build_rebuild_double(ps);
			// rebuild_double(s, new_exp, new_mant, &out)
			Instruction rebuild_call = GecosUserInstructionFactory.call(rebuild, args_recomposition);
			bb_rebuild.addInstruction(rebuild_call);
			
			// return out;
			Instruction ret_out = GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(out_symbol));
			bb_rebuild.addInstruction(ret_out);
			

			mainblock.addChildren(bb_decompose);
			mainblock.addChildren(if_exp);
			mainblock.addChildren(if_mant);
			mainblock.addChildren(bb_rebuild);
			

			GecosUserCoreFactory.proc(ps, proc_symbol_double, mainblock);
			File_builder.add_operator(proc_symbol_double);
		}		
		
		return proc_symbol_double;
	}

}
