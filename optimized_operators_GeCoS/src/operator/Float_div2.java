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


public class Float_div2 {
	/* This class provides an optimized operator for computing 
	 * the division by 2 of a float or a double
	 */
	
	private static ProcedureSymbol proc_symbol_float = null;
	private static ProcedureSymbol proc_symbol_double = null;
	
	public static ProcedureSymbol build_float_div2(ProcedureSet ps)
	// This function provides a function which implement an optimized
	// operator for the division by 2 of a float
	// return the symbol of the function
	{
		if(proc_symbol_float == null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_float_div2 = new ArrayList<ParameterSymbol>();
			// float in
			param_float_div2.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.FLOAT()));
			// float float_div2(float in)
			proc_symbol_float = GecosUserCoreFactory.procSymbol("float_div2", GecosUserTypeFactory.FLOAT(), param_float_div2);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(proc_symbol_float, "float_div2 implements a division by two of the float in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			// add a comment which the algorithm of the function
			GecosUserAnnotationFactory.comment(mainblock, "This function is composed by three parts :\n"
					+ "1) Decompose the input float in its three parts (sign,exponent,mantissa) \n"
					+ "2) Compute the division by two by manipulating directly this three parts\n"
					+ "3) Rebuild a float with the three modified parts and return it");
			
			// Variables definition
			// ap_uint<1> s
			Symbol s_symbol = GecosUserCoreFactory.symbol("s", GecosUserTypeFactory.ACINT(1, false));
			// ap_uint<8> exp
			Symbol exp_symbol = GecosUserCoreFactory.symbol("exp", GecosUserTypeFactory.ACINT(8, false));
			// ap_uint<23> mant
			Symbol mant_symbol = GecosUserCoreFactory.symbol("mant", GecosUserTypeFactory.ACINT(23, false));
			// ap_uint<8> new_exp
			Symbol new_exp_symbol = GecosUserCoreFactory.symbol("new_exp", GecosUserTypeFactory.ACINT(8, false));
			// ap_uint<23> new_mant
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
			Instruction[] args_decomposition = {GecosUserInstructionFactory.symbref(param_float_div2.get(0)),
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
			// condition instruction :
			Instruction exp_diff_255 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                           GecosUserInstructionFactory.Int(255));
			Instruction exp_diff_0 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                         GecosUserInstructionFactory.Int(0));
			Instruction exp_diff_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                         GecosUserInstructionFactory.Int(1));
			// mant != 2^23-1
			Instruction mant_diff_2_pow_23_min_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(mant_symbol), 
			                                GecosUserInstructionFactory.Int(Calcul.pow2(23)-1));
			// exp != 255 & exp != 0 & (exp != 1 | mant != 2^23-1)
			Instruction cond_exp = GecosUserInstructionFactory.and(GecosUserInstructionFactory.and(exp_diff_255, exp_diff_0), 
			                       GecosUserInstructionFactory.or(exp_diff_1, mant_diff_2_pow_23_min_1));
			
			// then block
			//new_exp = exp - 1;
			BasicBlock then_exp = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, 
			         GecosUserInstructionFactory.sub(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(1))));
			
			IfBlock if_exp = GecosUserBlockFactory.IfThen(cond_exp, then_exp);
			GecosUserAnnotationFactory.comment(if_exp, "In the general case the division by two is just a diminution by 1 of the exponent\n"
					+ "We need to exclude the infinite and NaN (exp==255) the subnormals (exp==0) and the exception (exp==1 & mant==2^23-1)");
			// end if_exp
			
			
			//begin if_mant
			// condition instruction
			Instruction exp_eg_0 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(0));
			Instruction exp_eg_1 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(1));
			// exp == 1 | exp==0
			Instruction cond_mant = GecosUserInstructionFactory.or(exp_eg_0, exp_eg_1);
			
			//begin then block if_mant
			CompositeBlock then_mant = GecosUserBlockFactory.CompositeBlock();
			// new_mant = mant >> 1;
			Instruction mant_shr = GecosUserInstructionFactory.set(new_mant_symbol,
			                       GecosUserInstructionFactory.shr(GecosUserInstructionFactory.symbref(mant_symbol), 1));
			BasicBlock mant_shr_bb = GecosUserBlockFactory.BBlock(mant_shr);
			then_mant.addChildren(mant_shr_bb);
			
			//begin if_round
			// condition instruction
			Instruction mant0_eg_1 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.array(mant_symbol, GecosUserInstructionFactory.Int(0)), 
			                         GecosUserInstructionFactory.Int(1));
			Instruction mant1_eg_1 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.array(mant_symbol, GecosUserInstructionFactory.Int(1)), 
			                         GecosUserInstructionFactory.Int(1));
			// mant[0]==1 && mant[1]==1
			Instruction cond_round = GecosUserInstructionFactory.and(mant0_eg_1, mant1_eg_1);
			
			// then block if_round
			//new_mant++;
			BasicBlock then_round = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_mant_symbol, 
			                        GecosUserInstructionFactory.add(GecosUserInstructionFactory.symbref(new_mant_symbol), 
			                        GecosUserInstructionFactory.Int(1))));
			IfBlock if_round = GecosUserBlockFactory.IfThen(cond_round, then_round);
			GecosUserAnnotationFactory.comment(if_round, "We implement the half to even round (by dividing by 2 we can only have half)\n"
					+ "so if we have to round (mant[0]==1) and the result will be odd (mant[1]==1) we need to add 1 to the result");
			//end if_round
			
			then_mant.addChildren(if_round);
			//end then block if_mant
			
			IfBlock if_mant = GecosUserBlockFactory.IfThen(cond_mant, then_mant);
			GecosUserAnnotationFactory.comment(if_mant, "If the result will be sub-normal we need to divide the mantissa by 2");
			// end if_mant
			
			
			// begin if_exp_eg_1
			// condition instruction : exp_eg_1.copy()
			
			// then block if_exp_eg_1
			// new_mant.invert(22);
			Instruction new_mant_set_22 = GecosUserInstructionFactory.methodCallInstruction("set", 
			                                 GecosUserInstructionFactory.symbref(new_mant_symbol), GecosUserInstructionFactory.Int(22));
			BasicBlock new_mant_set_22_bb = GecosUserBlockFactory.BBlock(new_mant_set_22);
			
			IfBlock if_exp_eg_1 = GecosUserBlockFactory.IfThen(exp_eg_1.copy(), new_mant_set_22_bb);
			GecosUserAnnotationFactory.comment(if_exp_eg_1, "If the number becomes sub-normal we need to had the 0.5 due to the non stocked"
					+ "(so non computed) 1 wich become 0");
			// end if_exp_eg_1
			
			BasicBlock bb_rebuild = GecosUserBlockFactory.BBlock();
			// (s, new_exp, new_mant, &out)
			Instruction[] args_rebuild = {GecosUserInstructionFactory.symbref(s_symbol),
			                       GecosUserInstructionFactory.symbref(new_exp_symbol),
			                       GecosUserInstructionFactory.symbref(new_mant_symbol),
			                       GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(out_symbol))};
			ProcedureSymbol rebuild = Float_fix.build_rebuild_float(ps);
			// rebuild_float(s, new_exp, new_mant, &out)
			Instruction rebuild_call = GecosUserInstructionFactory.call(rebuild, args_rebuild);
			bb_rebuild.addInstruction(rebuild_call);
			
			// return out;
			Instruction ret_out = GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(out_symbol));
			bb_rebuild.addInstruction(ret_out);
			

			mainblock.addChildren(bb_decompose);
			mainblock.addChildren(if_exp);
			mainblock.addChildren(if_mant);
			mainblock.addChildren(if_exp_eg_1);
			mainblock.addChildren(bb_rebuild);
			
			
			GecosUserCoreFactory.proc(ps, proc_symbol_float, mainblock);
			File_builder.add_operator(proc_symbol_float);
		}		
		
		return proc_symbol_float;
	}

	public static ProcedureSymbol build_double_div2(ProcedureSet ps)
	// This function provides a function which implement an optimized
	// operator for the division by 2 of a double
	// return the symbol of the function
	{
		if(proc_symbol_double == null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_double_div2 = new ArrayList<ParameterSymbol>();
			// double in
			param_double_div2.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.DOUBLE()));
			// double double_div2(double in)
			proc_symbol_double = GecosUserCoreFactory.procSymbol("double_div2", GecosUserTypeFactory.DOUBLE(), param_double_div2);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(proc_symbol_double, "double_div2 implements a division by two of the double in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			// add a comment which the algorithm of the function
			GecosUserAnnotationFactory.comment(mainblock, "This function is composed by three parts :\n"
					+ "1) Decompose the input double in its three parts (sign,exponent,mantissa) \n"
					+ "2) Compute the division by two by manipulating directly this three parts\n"
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
			// double out
			Symbol out_symbol = GecosUserCoreFactory.symbol("out", GecosUserTypeFactory.DOUBLE());
			
			mainblock.addSymbol(s_symbol);
			mainblock.addSymbol(exp_symbol);
			mainblock.addSymbol(mant_symbol);
			mainblock.addSymbol(new_exp_symbol);
			mainblock.addSymbol(new_mant_symbol);
			mainblock.addSymbol(out_symbol);
			
			BasicBlock bb_decompose = GecosUserBlockFactory.BBlock();
			// (in, &s, &exp, &mant)
			Instruction[] args_decomposition = {GecosUserInstructionFactory.symbref(param_double_div2.get(0)),
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
			Instruction exp_diff_2_pow_11_min_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                           GecosUserInstructionFactory.Int(Calcul.pow2(11)-1));
			Instruction exp_diff_0 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                         GecosUserInstructionFactory.Int(0));
			Instruction exp_diff_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                         GecosUserInstructionFactory.Int(1));
			Instruction mant_diff_2_pow_52_min_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(mant_symbol), 
			                                GecosUserInstructionFactory.Int(Calcul.pow2(52)-1));
			// exp != 2^11-1 & exp != 0 & (exp != 1 | mant != 2^52-1)
			Instruction cond_exp = GecosUserInstructionFactory.and(GecosUserInstructionFactory.and(exp_diff_2_pow_11_min_1, exp_diff_0), 
			                       GecosUserInstructionFactory.or(exp_diff_1, mant_diff_2_pow_52_min_1));
			// then block if_exp
			//new_exp = exp - 1;
			BasicBlock then_exp = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, 
			         GecosUserInstructionFactory.sub(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(1))));
			
			IfBlock if_exp = GecosUserBlockFactory.IfThen(cond_exp, then_exp);
			GecosUserAnnotationFactory.comment(if_exp, "In the general case the division by two is just a diminution by 1 of the exponent\n"
					+ "We need to exclude the infinite and NaN (exp==255) the subnormals (exp==0) and the exception (exp==1 & mant==2^23-1)");
			//fin if exp
			
			
			// begin if_mant
			// condition instruction
			Instruction exp_eg_0 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(0));
			Instruction exp_eg_1 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(1));
			// exp==0 | exp==1
			Instruction cond_mant = GecosUserInstructionFactory.or(exp_eg_0, exp_eg_1);
			
			// begin then block if_mant
			CompositeBlock then_mant = GecosUserBlockFactory.CompositeBlock();
			// new_mant = mant >> 1;
			Instruction mant_shr = GecosUserInstructionFactory.set(new_mant_symbol,
			                       GecosUserInstructionFactory.shr(GecosUserInstructionFactory.symbref(mant_symbol), 1));
			BasicBlock mant_shr_bb = GecosUserBlockFactory.BBlock(mant_shr);
			then_mant.addChildren(mant_shr_bb);
			
			//begin if_round
			// condition instruction
			Instruction mant0_eg_1 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.array(mant_symbol, GecosUserInstructionFactory.Int(0)), 
			                         GecosUserInstructionFactory.Int(1));
			Instruction mant1_eg_1 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.array(mant_symbol, GecosUserInstructionFactory.Int(1)), 
			                         GecosUserInstructionFactory.Int(1));
			// mant[0]==1 && mant[1]==1
			Instruction cond_round = GecosUserInstructionFactory.and(mant0_eg_1, mant1_eg_1);
			
			// then block if_round
			//new_mant++;
			BasicBlock then_round = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_mant_symbol, 
			                        GecosUserInstructionFactory.add(GecosUserInstructionFactory.symbref(new_mant_symbol), 
			                        GecosUserInstructionFactory.Int(1))));
			IfBlock if_round = GecosUserBlockFactory.IfThen(cond_round, then_round);
			GecosUserAnnotationFactory.comment(if_round, "We implement the half to even round (by dividing by 2 we can only have half)\n"
					+ "so if we have to round (mant[0]==1) and the result will be odd (mant[1]==1) we need to add 1 to the result");
			// end if_round
			
			then_mant.addChildren(if_round);
			// end then block if_mant
			
			
			IfBlock if_mant = GecosUserBlockFactory.IfThen(cond_mant, then_mant);
			GecosUserAnnotationFactory.comment(if_mant, "If the result will be sub-normal we need to divide the mantissa by 2");
			// end if_mant
			
			
			// end if_exp_eg_1
			// condition instruction : exp_eg_1.copy()
			
			// then block if_exp_eg_1
			// new_mant.invert(22);
			Instruction new_mant_invert_22 = GecosUserInstructionFactory.methodCallInstruction("invert", 
			                                 GecosUserInstructionFactory.symbref(new_mant_symbol), GecosUserInstructionFactory.Int(51));
			BasicBlock new_mant_invert_22_bb = GecosUserBlockFactory.BBlock(new_mant_invert_22);
			
			IfBlock if_exp_eg_1 = GecosUserBlockFactory.IfThen(exp_eg_1.copy(), new_mant_invert_22_bb);
			GecosUserAnnotationFactory.comment(if_exp_eg_1, "If the number becomes sub-normal we need to had the 0.5 due to the non stocked"
					+ "(so non computed) 1 wich become 0");
			//end if_exp_eg_1
			
			
			BasicBlock bb_rebuild = GecosUserBlockFactory.BBlock();
			// (s, new_exp, new_mant, &out)
			Instruction[] args_rebuild = {GecosUserInstructionFactory.symbref(s_symbol),
			                       GecosUserInstructionFactory.symbref(new_exp_symbol),
			                       GecosUserInstructionFactory.symbref(new_mant_symbol),
			                       GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(out_symbol))};
			ProcedureSymbol rebuild = Float_fix.build_rebuild_double(ps);
			// rebuild_double(s, new_exp, new_mant, &out)
			Instruction rebuild_call = GecosUserInstructionFactory.call(rebuild, args_rebuild);
			bb_rebuild.addInstruction(rebuild_call);
			
			// return out;
			Instruction return_out = GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(out_symbol));
			bb_rebuild.addInstruction(return_out);
			
			
			mainblock.addChildren(bb_decompose);
			mainblock.addChildren(if_exp);
			mainblock.addChildren(if_mant);
			mainblock.addChildren(if_exp_eg_1);
			mainblock.addChildren(bb_rebuild);
			
			GecosUserCoreFactory.proc(ps, proc_symbol_double, mainblock);
			File_builder.add_operator(proc_symbol_double);
		}		
		
		return proc_symbol_double;
	}

}



