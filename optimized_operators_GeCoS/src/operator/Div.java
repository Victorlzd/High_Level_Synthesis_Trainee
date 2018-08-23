package operator;

import java.util.ArrayList;

import fr.irisa.cairn.gecos.model.factory.GecosUserAnnotationFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserBlockFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserCoreFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserInstructionFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserTypeFactory;
import gecos.core.ParameterSymbol;
import gecos.core.ProcedureSet;
import gecos.core.ProcedureSymbol;
import gecos.core.Symbol;
import gecos.instrs.ArrayValueInstruction;
import gecos.instrs.Instruction;
import gecos.instrs.SetInstruction;
import gecos.types.Type;
import util.Calcul;
import util.File_builder;
import util.Float_fix;
import gecos.blocks.*;
import java.util.Map;
import java.util.TreeMap;



public class Div {
	
	// This maps contains the ProcedureSymbols of the already builded functions
	// It permits to avoid multiple definitions
	private static Map<Integer, ProcedureSymbol> builded_lut_chunk_divider = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer,Map<Integer,ProcedureSymbol>> builded_int_divider_by_small_odd_constant = new TreeMap<Integer,Map<Integer,ProcedureSymbol>>();
	private static Map<Integer,Map<Integer,ProcedureSymbol>> builded_arbitary_sized_int_divider = new TreeMap<Integer,Map<Integer,ProcedureSymbol>>();
	private static Map<Integer, ProcedureSymbol> builded_float_divider = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer, ProcedureSymbol> builded_double_divider = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer, ProcedureSymbol> builded_int_divider = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer, ProcedureSymbol> builded_long_divider = new TreeMap<Integer,ProcedureSymbol>();
	
	private static final int[] known_divider = {2, 9, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	
	public static ProcedureSymbol build_float_div_by_constant(ProcedureSet ps, int div, boolean is_double)
	// This function provides a function which implement an optimized
	// operator for the division by 3 of a float
	// return the symbol of the function
	{
		if((!builded_float_divider.containsKey(div) & !is_double) | (!builded_double_divider.containsKey(div) & is_double)) 
		{
			ProcedureSymbol proc_symbol;
			if(can_optimize(div))
			{
				GecosUserTypeFactory.setScope(ps.getScope());
				
				int size_exp;
				int size_mant;
				Type type_in_out;
				String name;
				
				if(is_double)
				{
					size_exp = 11;
					size_mant = 52;
					type_in_out = GecosUserTypeFactory.DOUBLE();
					name = "operator_double_div"+div;
				}
				else
				{
					size_exp = 8;
					size_mant = 23;
					type_in_out = GecosUserTypeFactory.FLOAT();	
					name = "operator_float_div"+div;
				}
	
				int size_xf = size_mant+2+Calcul.log2(div);
				int pow2_in_div_fact = Calcul.pow_2_integer_factorization(div);
				
				
				// Parameter definition
				ArrayList<ParameterSymbol> param_float_div3 = new ArrayList<ParameterSymbol>();
				// float in
				param_float_div3.add(GecosUserCoreFactory.paramSymbol("in", type_in_out));
				// float float_div3(float in)
				proc_symbol = GecosUserCoreFactory.procSymbol(name, type_in_out, param_float_div3);
				
				CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
				CompositeBlock mainblock2 = GecosUserBlockFactory.CompositeBlock();
				GecosUserTypeFactory.setScope(mainblock2.getScope()); 
				
				// Variable definition
				// ap_uint<1> s
				Symbol s_symbol = GecosUserCoreFactory.symbol("s", GecosUserTypeFactory.ACINT(1, false));
				// ap_uint<8> exp
				Symbol exp_symbol = GecosUserCoreFactory.symbol("exp", GecosUserTypeFactory.ACINT(size_exp, false));
				// ap_uint<23> mant
				Symbol mant_symbol = GecosUserCoreFactory.symbol("mant", GecosUserTypeFactory.ACINT(size_mant, false));
				// ap_uint<8> new_exp
				Symbol new_exp_symbol = GecosUserCoreFactory.symbol("new_exp", GecosUserTypeFactory.ACINT(size_exp, false));
				// ap_uint<23> new_mant
				Symbol new_mant_symbol = GecosUserCoreFactory.symbol("new_mant", GecosUserTypeFactory.ACINT(size_mant, false));
				// ap_uint<32> xf
				Symbol xf_symbol = GecosUserCoreFactory.symbol("xf", GecosUserTypeFactory.ACINT(size_xf, false));
				// float out
				Symbol out_symbol = GecosUserCoreFactory.symbol("out", type_in_out);
				// ap_uint<8> new_exp
				Symbol shift_symbol = GecosUserCoreFactory.symbol("shift", GecosUserTypeFactory.ACINT(size_exp, false));
				// ap_uint<8> new_exp
				Symbol div_exp_symbol = GecosUserCoreFactory.symbol("div_exp", GecosUserTypeFactory.ACINT(size_exp, false));
				
				mainblock2.addSymbol(s_symbol);
				mainblock2.addSymbol(exp_symbol);
				mainblock2.addSymbol(mant_symbol);
				mainblock2.addSymbol(new_exp_symbol);
				mainblock2.addSymbol(new_mant_symbol);
				mainblock2.addSymbol(xf_symbol);
				mainblock2.addSymbol(out_symbol);
				mainblock2.addSymbol(shift_symbol);
				mainblock2.addSymbol(div_exp_symbol);
				
				BasicBlock bb_decompose = GecosUserBlockFactory.BBlock();
				
				// (in, &s, &exp, &mant)
				Instruction[] args_decomposition = {GecosUserInstructionFactory.symbref(param_float_div3.get(0)),
				        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(s_symbol)),
				        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(exp_symbol)),
				        GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(mant_symbol))};
				ProcedureSymbol decompose;
				if(is_double)
				{
					decompose = Float_fix.build_decompose_double(ps);
				}
				else
				{
					decompose = Float_fix.build_decompose_float(ps);
				}
				// decompose_float(in, &s, &exp, &mant)
				Instruction decompose_call = GecosUserInstructionFactory.call(decompose, args_decomposition);
				bb_decompose.addInstruction(decompose_call);
				
				// new_exp = exp;
				SetInstruction new_exp_exp = GecosUserInstructionFactory.set(new_exp_symbol, GecosUserInstructionFactory.symbref(exp_symbol));
				bb_decompose.addInstruction(new_exp_exp);
				
				// new_mant = mant;
				SetInstruction new_mant_mant = GecosUserInstructionFactory.set(new_mant_symbol, GecosUserInstructionFactory.symbref(mant_symbol));
				bb_decompose.addInstruction(new_mant_mant);
				
				// shift = 0;
				Instruction shift_set_0 = GecosUserInstructionFactory.set(shift_symbol, GecosUserInstructionFactory.Int(0));
				bb_decompose.addInstruction(shift_set_0);
				
				// div_exp = log2(div)
				Instruction div_exp_set_log2_div = GecosUserInstructionFactory.set(div_exp_symbol, GecosUserInstructionFactory.Int(Calcul.log2(div)));
				bb_decompose.addInstruction(div_exp_set_log2_div);
				
				// xf = mant
				Instruction xf_set_mant = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.symbref(mant_symbol));
				bb_decompose.addInstruction(xf_set_mant);
				
				// begin if
				// condition :
				// div_mant is the mantissa of the float writing of the integer div
				long div_mant;// (int) (Float.floatToIntBits(div)%Calcul.pow2(23));
				if(is_double)
				{
					div_mant = (long) (Double.doubleToLongBits(div)%Calcul.pow2(52));
				}
				else
				{
					div_mant = (long) (Float.floatToIntBits(div)%Calcul.pow2(23));
				}
				// mant < div_mant
				Instruction mant_lt_div_mant = GecosUserInstructionFactory.lt(GecosUserInstructionFactory.symbref(mant_symbol), GecosUserInstructionFactory.Int(div_mant));
				
				// begin then
				// div_exp = log2(div)+1
				Instruction div_exp_set_log2_div_plus_1 = GecosUserInstructionFactory.set(div_exp_symbol, GecosUserInstructionFactory.Int(Calcul.log2(div)+1));
				BasicBlock then_mant_lt_div_mant = GecosUserBlockFactory.BBlock(div_exp_set_log2_div_plus_1);
				// end then
				
				IfBlock if_mant_lt_div_mant = GecosUserBlockFactory.IfThen(mant_lt_div_mant, then_mant_lt_div_mant);
				// end if
				
				// begin if exp_compute
				// condition :
				// exp != 255
				Instruction is_not_inf_or_nan = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(Calcul.pow2(size_exp)-1));
				
				// begin if div_exp > exp
				// div_exp > exp
				Instruction div_exp_gt_exp = GecosUserInstructionFactory.gt(GecosUserInstructionFactory.symbref(div_exp_symbol), 
						                      GecosUserInstructionFactory.symbref(exp_symbol));
				// begin then div_exp > exp
				BasicBlock then_div_exp_gt_exp = GecosUserBlockFactory.BBlock();
				// new_exp = 0
				Instruction new_exp_set_0 = GecosUserInstructionFactory.set(new_exp_symbol, GecosUserInstructionFactory.Int(0));
				then_div_exp_gt_exp.addInstruction(new_exp_set_0);
				// end then
				
				// begin else div_exp > exp
				BasicBlock else_div_exp_gt_exp = GecosUserBlockFactory.BBlock();
				// new_exp = exp-div_exp;
				Instruction new_exp_set_exp_sub_div_exp = GecosUserInstructionFactory.set(new_exp_symbol, GecosUserInstructionFactory.sub(
						GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.symbref(div_exp_symbol)));
				else_div_exp_gt_exp.addInstruction(new_exp_set_exp_sub_div_exp);
				// enf else
				
				IfBlock if_div_exp_gt_exp = GecosUserBlockFactory.IfThenElse(div_exp_gt_exp.copy(), then_div_exp_gt_exp, else_div_exp_gt_exp);
				// end if div_exp > exp
				
				IfBlock if_exp_compute = GecosUserBlockFactory.IfThen(is_not_inf_or_nan.copy(), if_div_exp_gt_exp);
				// end if exp_compute
				
				// begin if mant_compute
				// Condition exp != 255
				// is_not_inf_or_nan.copy()
				
				// begin then mant_compute
				CompositeBlock mant_compute = GecosUserBlockFactory.CompositeBlock();
				
				// begin if_shift
				// condition exp==0
				Instruction exp_eq_0 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(0));
				
				// begin then if_shift
				// shift = pow2_in_div_fact
				Instruction shift_set_pow2_in_div_fact = GecosUserInstructionFactory.set(shift_symbol, GecosUserInstructionFactory.Int(pow2_in_div_fact));
				BasicBlock then_shift = GecosUserBlockFactory.BBlock(shift_set_pow2_in_div_fact);
				// end then if_shift
				
				// begin else if_shift
				// begin if became_subnorm
				// condition : div_exp >= exp
				Instruction div_exp_ge_exp = GecosUserInstructionFactory.ge(GecosUserInstructionFactory.symbref(div_exp_symbol), 
	                    GecosUserInstructionFactory.symbref(exp_symbol));
				// begin then became_subnorm
				// begin if divide_xf
				// condition : pow2_in_div_fact+1 >= exp
				Instruction pow2_in_div_fact_plus_1_ge_exp = GecosUserInstructionFactory.ge(GecosUserInstructionFactory.Int(pow2_in_div_fact+1), 
						GecosUserInstructionFactory.symbref(exp_symbol)); 
				// begin then divide_xf
				Instruction shift_set_pow2_div_fact_plus_1_sub_exp = GecosUserInstructionFactory.set(shift_symbol, GecosUserInstructionFactory.sub(
						GecosUserInstructionFactory.Int(pow2_in_div_fact+1), GecosUserInstructionFactory.symbref(exp_symbol)));
				BasicBlock shift_set_pow2_div_fact_sub_exp_bb = GecosUserBlockFactory.BBlock(shift_set_pow2_div_fact_plus_1_sub_exp);
				// end then
				
				// begin else divide_xf
				Instruction shift_set_exp_sub_pow2_div_fact = GecosUserInstructionFactory.set(shift_symbol, GecosUserInstructionFactory.sub(
						GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(pow2_in_div_fact+1)));
				BasicBlock shift_set_exp_sub_pow2_div_fact_bb = GecosUserBlockFactory.BBlock(shift_set_exp_sub_pow2_div_fact);
				// end else
	
				IfBlock if_divide_xf = GecosUserBlockFactory.IfThenElse(pow2_in_div_fact_plus_1_ge_exp, shift_set_pow2_div_fact_sub_exp_bb, shift_set_exp_sub_pow2_div_fact_bb);
				// end if divide_xf
				
				// begin else became_subnorm
				Instruction shift_set_div_exp = GecosUserInstructionFactory.set(shift_symbol, GecosUserInstructionFactory.sub(
						GecosUserInstructionFactory.symbref(div_exp_symbol), GecosUserInstructionFactory.Int(pow2_in_div_fact)));
				BasicBlock else_became_subnorm = GecosUserBlockFactory.BBlock(shift_set_div_exp);
				// end else
				
				IfBlock if_became_subnorm = GecosUserBlockFactory.IfThenElse(div_exp_ge_exp, if_divide_xf, else_became_subnorm);
				// end if became_subnorm
				
				IfBlock if_shift = GecosUserBlockFactory.IfThenElse(exp_eq_0, then_shift, if_became_subnorm);
				mant_compute.addBlock(if_shift);
				// end if_shift
				
				// begin if not_subnorm
				// condition : exp != 0
				Instruction exp_ne_0 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(0));
				
				// begin then not_subnorm
				// xf.set(23)
				Instruction xf_set_size_mant = GecosUserInstructionFactory.methodCallInstruction("set", GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(size_mant));
				BasicBlock xf_set_size_mant_bb = GecosUserBlockFactory.BBlock(xf_set_size_mant);
				// end then
				
				IfBlock if_not_subnorm = GecosUserBlockFactory.IfThen(exp_ne_0, xf_set_size_mant_bb);
				mant_compute.addBlock(if_not_subnorm);
				// end if not_subnorm
				
				// begin if shift_xf
				// condition : pow2_in_div_fact+1 >= exp
				// pow2_in_div_fact_plus_1_ge_exp.copy()
				
				// begin then shift_xf
				// xf = xf >> shift
				Instruction xf_shr_shift = GecosUserInstructionFactory.shr(GecosUserInstructionFactory.symbref(xf_symbol),GecosUserInstructionFactory.symbref(shift_symbol));
				Instruction xf_set_shr_shift = GecosUserInstructionFactory.set(xf_symbol, xf_shr_shift);
				BasicBlock then_shift_xf = GecosUserBlockFactory.BBlock(xf_set_shr_shift);
				// end then
				
				// begin else shift_xf
				// xf = xf << shift
				Instruction xf_shl_shift = GecosUserInstructionFactory.shl(GecosUserInstructionFactory.symbref(xf_symbol),GecosUserInstructionFactory.symbref(shift_symbol));
				Instruction xf_set_shl_shift = GecosUserInstructionFactory.set(xf_symbol, xf_shl_shift);
				BasicBlock else_shift_xf = GecosUserBlockFactory.BBlock(xf_set_shl_shift);
				// end else
				
				IfBlock if_shift_xf = GecosUserBlockFactory.IfThenElse(pow2_in_div_fact_plus_1_ge_exp.copy(), then_shift_xf, else_shift_xf);
				mant_compute.addBlock(if_shift_xf);
				// end if shift_xf
				
				BasicBlock mant_compute_bb = GecosUserBlockFactory.BBlock();
				// we add the half of the divider to transform the rounding in a truncature
				// xf = xf + div/2
				Instruction xf_set_xf_plus_half_div = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.add(
						GecosUserInstructionFactory.symbref(xf_symbol),GecosUserInstructionFactory.Int((int) (div/Calcul.pow2(pow2_in_div_fact))/2)));
				mant_compute_bb.addInstruction(xf_set_xf_plus_half_div);
				
				// new_mant = operator_int_div(xf);
				Instruction int_div_xf = GecosUserInstructionFactory.call(arbitrary_sized_int_div_by_constant(ps, (int) (div/Calcul.pow2(pow2_in_div_fact)), size_xf), GecosUserInstructionFactory.symbref(xf_symbol));
				Instruction new_mant_set_xf_div = GecosUserInstructionFactory.set(new_mant_symbol, int_div_xf);
				mant_compute_bb.addInstruction(new_mant_set_xf_div);
				mant_compute.addBlock(mant_compute_bb);
				// end then mant_compute
				
				IfBlock if_mant_compute = GecosUserBlockFactory.IfThen(is_not_inf_or_nan, mant_compute);
				// end if mant_compute
				
				BasicBlock bb_rebuild = GecosUserBlockFactory.BBlock();
				// (s, exp, mant, &out)
				Instruction[] args_recomposition = {GecosUserInstructionFactory.symbref(s_symbol),
				                       GecosUserInstructionFactory.symbref(new_exp_symbol),
				                       GecosUserInstructionFactory.symbref(new_mant_symbol),
				                       GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(out_symbol))};
				ProcedureSymbol rebuild = Float_fix.build_rebuild_float(ps);
				if(is_double)
				{
					rebuild = Float_fix.build_rebuild_double(ps);
				}
				else
				{
					rebuild = Float_fix.build_rebuild_float(ps);
				}
				// rebuild_float(s, exp, mant, &out)
				Instruction rebuild_call = GecosUserInstructionFactory.call(rebuild, args_recomposition);
				bb_rebuild.addInstruction(rebuild_call);
				
				// return out;
				Instruction ret_out = GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(out_symbol));
				bb_rebuild.addInstruction(ret_out);
				
				//GecosUserAnnotationFactory.pragma(mainblock2, "HLS latency max=1");
				mainblock2.addBlock(bb_decompose);
				mainblock2.addBlock(if_mant_lt_div_mant);
				mainblock2.addBlock(if_exp_compute);
				mainblock2.addBlock(if_mant_compute);
				mainblock2.addBlock(bb_rebuild);
				
				mainblock.addBlock(mainblock2);
	
				GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
				File_builder.add_operator(proc_symbol);	
			}
			else
			{
				proc_symbol = null;
			}
			
			if(is_double)
			{
				builded_double_divider.put(div, proc_symbol);
			}
			else
			{
				builded_float_divider.put(div, proc_symbol);
			}
		}
		if(is_double)
		{
			return builded_double_divider.get(div);
		}
		else
		{
			return builded_float_divider.get(div);
		}
	}

	public static ProcedureSymbol build_int_div_by_constant(ProcedureSet ps, int div, boolean is_long)
	{
		if((!builded_int_divider.containsKey(div) & !is_long) | (!builded_long_divider.containsKey(div) & is_long)) 
		{
			Type type_in_out;
			String name;
			int size;
			GecosUserTypeFactory.setScope(ps.getScope());
			if(is_long)
			{
				type_in_out = GecosUserTypeFactory.LONG();
				name = "operator_long_div"+div;
				size = 64;
			}
			else
			{
				type_in_out = GecosUserTypeFactory.INT();
				name = "operator_int_div"+div;
				size = 32;
			}
			
			ProcedureSymbol proc_symbol;
			if(can_optimize(div))
			{
				
				ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
				// int in
				parameters.add(GecosUserCoreFactory.paramSymbol("in", type_in_out));
				// ap_uint<size> int_<size>_div<div>(ap_uint<size> in)
				proc_symbol = GecosUserCoreFactory.procSymbol(name, type_in_out, parameters);
				
				CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
				GecosUserTypeFactory.setScope(mainblock.getScope());
				
				ProcedureSymbol operator = arbitrary_sized_int_div_by_constant(ps, div, size);
				Instruction operator_call = GecosUserInstructionFactory.call(operator, GecosUserInstructionFactory.symbref(parameters.get(0)));
				Instruction ret = GecosUserInstructionFactory.ret(operator_call);
				BasicBlock ret_bb = GecosUserBlockFactory.BBlock(ret);
				
				//GecosUserAnnotationFactory.pragma(ret_bb, "HLS latency max=1");
				mainblock.addBlock(ret_bb);
				
				GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
				File_builder.add_operator(proc_symbol);
			}
			else
			{
				proc_symbol = null;
			}
			if(is_long)
			{
				builded_long_divider.put(div, proc_symbol);
			}
			else
			{
				builded_int_divider.put(div, proc_symbol);
			}
			
		}
		if(is_long)
		{
			return builded_double_divider.get(div);
		}
		else
		{
			return builded_float_divider.get(div);
		}
	}
	
	public static ProcedureSymbol arbitrary_sized_int_div_by_constant(ProcedureSet ps, int div, int size)
	/* this function provides operators for division by integer constants optimized for FPGA
	 * return the ProccedureSymbol of the operator or null if the division cannot be optimized
	 */
	{
		// to avoid multiple definitions we use map that stock the already builded operators
		// and we build it only if it hasn't been build before
		boolean builded = false;
		if(builded_arbitary_sized_int_divider.containsKey(div))
		{
			if(builded_arbitary_sized_int_divider.get(div).containsKey(size))
			{
				builded = true;
			}
		}
		
		
		if(!builded) 
		{
			ProcedureSymbol proc_symbol;

			if(can_optimize(div)) // we verify if we are able to optimize this division
			{
				GecosUserTypeFactory.setScope(ps.getScope());
				
				// Parameter definition
				ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
				// int in
				parameters.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.ACINT(size, false)));
				// ap_uint<size> int_<size>_div<div>(ap_uint<size> in)
				proc_symbol = GecosUserCoreFactory.procSymbol("operator_int_"+size+"_div"+div, GecosUserTypeFactory.ACINT(size, false), parameters);
				
				// add a comment which describes the function
				GecosUserAnnotationFactory.comment(proc_symbol, "operator_int_"+size+"_div"+div+" implements a division by "+div+" of the integer "+size+" bits in, optimized for Vivado HLS");
				
				CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
				GecosUserTypeFactory.setScope(mainblock.getScope());
				
				// this returns the optimized computation of the division
				Instruction compute_div = div_builder_eratosthene(ps, GecosUserInstructionFactory.symbref(parameters.get(0)), div, size);
				Instruction ret = GecosUserInstructionFactory.ret(compute_div);
				
				BasicBlock block = GecosUserBlockFactory.BBlock(ret);
				mainblock.addBlock(block);
				
				GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
			}
			else
			{
				// if we cannot optimize this division return and stock null
				proc_symbol = null;
			}
			
			// stock the ProcedureSymbol in the map
			if(builded_arbitary_sized_int_divider.containsKey(div))
			{
				builded_arbitary_sized_int_divider.get(div).put(size, proc_symbol);
			}
			else
			{
				Map<Integer,ProcedureSymbol> pair = new TreeMap<Integer,ProcedureSymbol>();
				pair.put(size, proc_symbol);
				builded_arbitary_sized_int_divider.put(div, pair);
			}
		}
		return builded_arbitary_sized_int_divider.get(div).get(size);
	}

	private static boolean can_optimize(int div)
	// This function determines if we are able to optimize this division or not
	{
		/* Our optimization is based on sieve of Eratosthène
		 * We are able to optimize the division by all integers with inly the known_divider's elements
		 * in their factorization
		 */
		for (int i = 0; i < known_divider.length; i++) {
			if(div%known_divider[i]==0)
			{
				return can_optimize(div/known_divider[i]);
			}
		}
		// if we come to div==1 it means that the integer factorization of the original divider
		// is composed only by known_divider's element
		if(div == 1)
		{
			return true;
		}
		// if div!=1 and had no divider in known_divider it means that there is another prime number
		// in its factorization and we will not be able to optimize the division
		else
		{
			return false;
		}
	}
		
	private static Instruction div_builder_eratosthene(ProcedureSet ps, Instruction instr_to_divide, int div, int size)
	/* To optimize the division we use a succession of optimized division by the prime numbers of the integer factorization
	 * of the divider
	 */
	{
		if(div%2 == 0)
		// The case of 2 is particular because we don't use the same optimization
		{
			int pow_2 = Calcul.pow_2_integer_factorization(div);
			int new_div = (int) (div/Calcul.pow2(pow_2));
			Instruction shr_in = GecosUserInstructionFactory.shr(instr_to_divide, GecosUserInstructionFactory.Int(pow_2));
			return div_builder_eratosthene(ps, shr_in, new_div, size-pow_2);
		}
		for (int i = 0; i < known_divider.length; i++) {
			if(div%known_divider[i]==0)
			{
				// we use the optimized division by knwon_divider[i]
				ProcedureSymbol ps_div = int_div_by_small_odd_constant(ps, known_divider[i], size);
				Instruction intstr_div = GecosUserInstructionFactory.call(ps_div, instr_to_divide);
				return div_builder_eratosthene(ps, intstr_div, div/known_divider[i], size);
			}
		}
		
		if(div == 1)
		// end of recursivity
		{
			return instr_to_divide;
		}
		else
		{
			return null;
		}
	}
	
	private static ProcedureSymbol int_div_by_small_odd_constant(ProcedureSet ps, int div, int size)
	// This function provides a function which implement optimized operators
	// for the division by a small odd integer constant of any arbitrary sized integer
	// return the symbol of the function
	{
		boolean builded = false;
		if(builded_int_divider_by_small_odd_constant.containsKey(div))
		{
			if(builded_int_divider_by_small_odd_constant.get(div).containsKey(size))
			{
				builded = true;
			}
		}

		if(!builded) // We need to define the function if it isn't yet
		{
			ProcedureSymbol proc_symbol;
			int width_r = Calcul.log2(div-1)+1;
			int width_chunk = 6-width_r;

			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
			// int in
			parameters.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.ACINT(size, false)));
			// ap_uint<size> int_<size>_div<div>(ap_uint<size> in)
			proc_symbol = GecosUserCoreFactory.procSymbol("int_"+size+"_div"+div, GecosUserTypeFactory.ACINT(size, false), parameters);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(proc_symbol, "int_"+size+"_div"+div+" implements a division by "+div+" of the integer "+size+" bits in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			

			Symbol d_chunk_symbol = GecosUserCoreFactory.symbol("d_chunk", GecosUserTypeFactory.ACINT(width_chunk, false));
			Symbol q_chunk_symbol = GecosUserCoreFactory.symbol("q_chunk", GecosUserTypeFactory.ACINT(width_chunk, false));
			Symbol r_symbol = GecosUserCoreFactory.symbol("r", GecosUserTypeFactory.ACINT(width_r, false));
			Symbol d_symbol = GecosUserCoreFactory.symbol("d", GecosUserTypeFactory.ACINT(size, false));
			Symbol q_symbol = GecosUserCoreFactory.symbol("q", GecosUserTypeFactory.ACINT(size, false));
			Symbol i_symbol = GecosUserCoreFactory.symbol("i", GecosUserTypeFactory.INT());
			mainblock.addSymbol(d_symbol);
			mainblock.addSymbol(q_symbol);
			mainblock.addSymbol(d_chunk_symbol);
			mainblock.addSymbol(q_chunk_symbol);
			mainblock.addSymbol(r_symbol);
			mainblock.addSymbol(i_symbol);
			
			BasicBlock bb_init = GecosUserBlockFactory.BBlock();
			//r=0
			Instruction r_0 = GecosUserInstructionFactory.set(r_symbol, GecosUserInstructionFactory.Int(0));
			bb_init.addInstruction(r_0);
			//d = in
			Instruction d_in = GecosUserInstructionFactory.set(d_symbol, GecosUserInstructionFactory.symbref(parameters.get(0)));
			bb_init.addInstruction(d_in);
			
			// We compute the number of needed iterations
			int it_number = size/width_chunk;

			BasicBlock adjust_block = GecosUserBlockFactory.BBlock();
			if(size%width_chunk != 0) // if the result isn't round we need to do one uncomplete step before the loop
			{
				Instruction[] args_d_range = {GecosUserInstructionFactory.Int(size-1), GecosUserInstructionFactory.Int(it_number*width_chunk)};
				// d.range(size-1, it_number*width_chunk)
				Instruction d_range = GecosUserInstructionFactory.methodCallInstruction("range", 
						GecosUserInstructionFactory.symbref(d_symbol), args_d_range);
				// d_chunk = d.range(size-1, it_number*width_chunk)
				Instruction d_chunk_d_range = GecosUserInstructionFactory.set(d_chunk_symbol, d_range);
				adjust_block.addInstruction(d_chunk_d_range);

				// (d_chunk, r, &q_chunk, &r)
				Instruction[] args_lut_div = {GecosUserInstructionFactory.symbref(d_chunk_symbol), GecosUserInstructionFactory.symbref(r_symbol),
				              GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(q_chunk_symbol)),
				              GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(r_symbol))};
				
				// lut_div<div>(d_chunk, r, &q_chunk, &r)
				Instruction call_lut_div = GecosUserInstructionFactory.call(lut_div_chunk(ps, div), args_lut_div);
				adjust_block.addInstruction(call_lut_div);
				
				// (size-1, it_number*width_chunk)
				Instruction[] args_q_range = {GecosUserInstructionFactory.Int(size-1), GecosUserInstructionFactory.Int(it_number*width_chunk)};
				// q.range(31, it_number*width_chunk)
				Instruction q_range = GecosUserInstructionFactory.methodCallInstruction("range", 
						GecosUserInstructionFactory.symbref(q_symbol), args_q_range);
				// (size-1-it_number*width_chunk, 0)
				Instruction[] args_q_chunk_range = {GecosUserInstructionFactory.Int(size-1-it_number*width_chunk), GecosUserInstructionFactory.Int(0)};
				// range(size-1-it_number*width_chunk, 0)
				Instruction q_chunk_range = GecosUserInstructionFactory.methodCallInstruction("range", 
						GecosUserInstructionFactory.symbref(q_chunk_symbol), args_q_chunk_range);
				// q.range(i*4+3,i*4) = q_chunk.range(size-1-it_number*width_chunk, 0)
				Instruction q_range_q_chunk = GecosUserInstructionFactory.set(q_range, q_chunk_range);
				adjust_block.addInstruction(q_range_q_chunk);
			}
			

			// begin for
			// Initialization :
			Instruction loop_init = GecosUserInstructionFactory.set(i_symbol, GecosUserInstructionFactory.Int(it_number-1));
			// Condition : i>=0
			Instruction i_ge_0 = GecosUserInstructionFactory.ge(GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(0));
			// Step : i = i-1;
			Instruction i_sub_1 = GecosUserInstructionFactory.set(i_symbol, GecosUserInstructionFactory.sub(
					GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(1)));
			
			BasicBlock for_body_bb = GecosUserBlockFactory.BBlock();
			// #pragma HLS unroll
			GecosUserAnnotationFactory.pragma(for_body_bb, "HLS unroll");
			// i*width_chunk
			Instruction i_mul_width_chunk = GecosUserInstructionFactory.mul(GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(width_chunk));
			// (i*width_chunk+width_chunk-1,i*width_chunk)
			Instruction[] args_d_range = {GecosUserInstructionFactory.add(i_mul_width_chunk.copy(), GecosUserInstructionFactory.Int(width_chunk-1)), i_mul_width_chunk.copy()};
			// d.range(i*width_chunk+width_chunk-1,i*width_chunk)
			Instruction d_range = GecosUserInstructionFactory.methodCallInstruction("range", 
					GecosUserInstructionFactory.symbref(d_symbol), args_d_range);
			// d_chunk = d.range(i*width_chunk+width_chunk-1,i*width_chunk)
			Instruction d_chunk_d_range = GecosUserInstructionFactory.set(d_chunk_symbol, d_range);
			for_body_bb.addInstruction(d_chunk_d_range);

			// (d_chunk, r, &q_chunk, &r)
			Instruction[] args_lut_div = {GecosUserInstructionFactory.symbref(d_chunk_symbol), GecosUserInstructionFactory.symbref(r_symbol),
			              GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(q_chunk_symbol)),
			              GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(r_symbol))};
			// lut_div3(d_chunk, r, &q_chunk, &r)
			Instruction call_lut_div = GecosUserInstructionFactory.call(lut_div_chunk(ps, div), args_lut_div);
			for_body_bb.addInstruction(call_lut_div);
			
			// (i*width_chunk+width_chunk-1,i*width_chunk)
			Instruction[] args_q_range = {GecosUserInstructionFactory.add(i_mul_width_chunk.copy(), GecosUserInstructionFactory.Int(width_chunk-1)), i_mul_width_chunk.copy()};
			
			Instruction q_range = GecosUserInstructionFactory.methodCallInstruction("range", 
					GecosUserInstructionFactory.symbref(q_symbol), args_q_range);
			// q.range(i*width_chunk+width_chunk-1,i*width_chunk) = q_chunk
			Instruction q_range_q_chunk = GecosUserInstructionFactory.set(q_range, GecosUserInstructionFactory.symbref(q_chunk_symbol));
			for_body_bb.addInstruction(q_range_q_chunk);

			CompositeBlock for_body = GecosUserBlockFactory.CompositeBlock(for_body_bb);		
			ForBlock for_block = GecosUserBlockFactory.For(loop_init, i_ge_0, i_sub_1, for_body);	
			// end for

			// return q
			BasicBlock return_q = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(q_symbol)));
			
			mainblock.addChildren(bb_init);
			mainblock.addChildren(adjust_block);
			mainblock.addChildren(for_block);
			mainblock.addChildren(return_q);
			GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
			
			if(builded_int_divider_by_small_odd_constant.containsKey(div))
			{
				builded_int_divider_by_small_odd_constant.get(div).put(size, proc_symbol);
			}
			else
			{
				Map<Integer,ProcedureSymbol> pair = new TreeMap<Integer,ProcedureSymbol>();
				pair.put(size, proc_symbol);
				builded_int_divider_by_small_odd_constant.put(div, pair);
			}
		}
		return builded_int_divider_by_small_odd_constant.get(div).get(size);
	}
	
	private static ProcedureSymbol lut_div_chunk(ProcedureSet ps, int div)
	/* This function build a group of functions which compute the division of a chunk
	 * of the dividend with only 6 LUTs
	 * it returns the quotient and the remainders on 6 bits so the width of the chunk depends
	 * on the size of the remainder (i.e. the value of the divider)
	 */
	{
		// We build the function only if it hasn't been builded yet
		if(!builded_lut_chunk_divider.containsKey(div))
		{
			ProcedureSymbol proc_symbol;
			String name = "lut_div"+div+"_chunk";
			
			// We compute the width of the remainder
			int width_r = Calcul.log2(div-1)+1;
			
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
			// ap_uint<6-width_r> d
			parameters.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(6-width_r, false)));
			// ap_uint<width_r> r_in
			parameters.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(width_r, false)));
			// ap_uint<6-width_r> d
			parameters.add(GecosUserCoreFactory.paramSymbol("q", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(6-width_r, false))));
			// ap_uint<width_r> r_in
			parameters.add(GecosUserCoreFactory.paramSymbol("r_out", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(width_r, false))));
			// void lut_r1(ap_uint<6-width_r> d, ap_uint<width_r> r, ap_uint<6-width_r> * d, ap_uint<width_r> * r)
			proc_symbol = GecosUserCoreFactory.procSymbol(name, GecosUserTypeFactory.VOID(), parameters);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			Symbol in_symbol = GecosUserCoreFactory.symbol("in", GecosUserTypeFactory.ACINT(6, false));
			mainblock.addSymbol(in_symbol);

			// r_in.concat(d)
			Instruction r_in_concat_d = GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(parameters.get(1)),
					GecosUserInstructionFactory.symbref(parameters.get(0)));
			// in = r_in.concat(d);
			Instruction in_def = GecosUserInstructionFactory.set(in_symbol, r_in_concat_d);
			
			BasicBlock basic_block = GecosUserBlockFactory.BBlock(in_def);
			
			
			for (int i = 0; i < width_r; i++) 
			{
				Symbol r_i = single_lut(div, i, true);
				mainblock.addSymbol(r_i);
				
				Instruction select_rout = GecosUserInstructionFactory.array(GecosUserInstructionFactory.indir(GecosUserInstructionFactory.symbref(parameters.get(3))), GecosUserInstructionFactory.Int(i));
				Instruction select_ri = GecosUserInstructionFactory.array(r_i, GecosUserInstructionFactory.symbref(in_symbol));
				Instruction set_rout_ri = GecosUserInstructionFactory.set(select_rout, select_ri);
				basic_block.addInstruction(set_rout_ri);
			}
			
			for (int i = 0; i < 6-width_r; i++) 
			{
				Symbol q_i = single_lut(div, i, false);
				mainblock.addSymbol(q_i);
				
				Instruction select_qout = GecosUserInstructionFactory.array(GecosUserInstructionFactory.indir(GecosUserInstructionFactory.symbref(parameters.get(2))), GecosUserInstructionFactory.Int(i));
				Instruction select_qi = GecosUserInstructionFactory.array(q_i, GecosUserInstructionFactory.symbref(in_symbol));
				Instruction set_qout_qi = GecosUserInstructionFactory.set(select_qout, select_qi);
				basic_block.addInstruction(set_qout_qi);
			}
			
			mainblock.addChildren(basic_block);
			GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
			
			builded_lut_chunk_divider.put(div, proc_symbol);
		}
		
		return builded_lut_chunk_divider.get(div);
	}
	
	private static Symbol single_lut(int div, int n, boolean isRemainder)
	/* This function build functions which computes one of the bit of the remainder or the quotient of
	 * the division by <div>
	 * 
	 * This computation takes only one LUT of the FPGA
	 */
	{
		ProcedureSymbol proc_symbol;
		
		String name = (isRemainder?"r":"q")+n;
		
		// we compute the width of the remainder
		int width_r = Calcul.log2(div-1)+1;
		
		Symbol array_symbol = GecosUserCoreFactory.symbol(name, GecosUserTypeFactory.ARRAY(GecosUserTypeFactory.ACINT(1, false), 64));
		
		

		Instruction[] cases = new Instruction[64];
		for(int i=0; i<64; i++)
		{
			int res = isRemainder ? i%div : i/div;
			res = (res >> n) % 2;
			cases[i] = GecosUserInstructionFactory.Int(res);
		}
		Instruction array_value = GecosUserInstructionFactory.arrayValue(cases);
		
		array_symbol.setValue(array_value);
		
		return array_symbol;
	}

}
