package operator;

import java.util.ArrayList;
import java.util.Map;
import java.util.TreeMap;

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
import gecos.types.Type;
import util.Calcul;
import util.File_builder;
import util.Float_fix;

public class Mul {
	
	private static Map<Integer, ProcedureSymbol> builded_float_multiplier = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer, ProcedureSymbol> builded_double_multiplier = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer, ProcedureSymbol> builded_lut_chunk_multiplier = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer,Map<Integer,ProcedureSymbol>> builded_arbitary_sized_int_multiplier = new TreeMap<Integer,Map<Integer,ProcedureSymbol>>();
	private static Map<Integer,Map<Integer,ProcedureSymbol>> builded_int_divider_by_small_odd_constant = new TreeMap<Integer,Map<Integer,ProcedureSymbol>>();
	private static Map<Integer, ProcedureSymbol> builded_int_multiplier = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer, ProcedureSymbol> builded_long_multiplier = new TreeMap<Integer,ProcedureSymbol>();
	
	private static final int[] known_multiplier = {2, 9, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	
	public static ProcedureSymbol build_float_mul_by_constant(ProcedureSet ps, int mul, boolean is_double)
	// This function provides a function which implement an optimized
	// operator for the division by 3 of a float
	// return the symbol of the function
	{
		if((!builded_float_multiplier.containsKey(mul) & !is_double) | (!builded_double_multiplier.containsKey(mul) & is_double)) 
		{
			ProcedureSymbol proc_symbol;
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
				name = "operator_double_mul"+mul;
			}
			else
			{
				size_exp = 8;
				size_mant = 23;
				type_in_out = GecosUserTypeFactory.FLOAT();	
				name = "operator_float_mul"+mul;
			}

			int size_xf = size_mant+2+Calcul.log2(mul);
			
			
			// Parameter definition
			ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
			// float in
			parameters.add(GecosUserCoreFactory.paramSymbol("in", type_in_out));
			// float float_div3(float in)
			proc_symbol = GecosUserCoreFactory.procSymbol(name, type_in_out, parameters);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope()); 
			
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
			Symbol clz_symbol = GecosUserCoreFactory.symbol("clz", GecosUserTypeFactory.ACINT(Calcul.log2(size_xf)+1, false));
			// ap_uint<8> new_exp
			Symbol mul_exp_symbol = GecosUserCoreFactory.symbol("div_exp", GecosUserTypeFactory.ACINT(size_exp, false));
			
			mainblock.addSymbol(s_symbol);
			mainblock.addSymbol(exp_symbol);
			mainblock.addSymbol(mant_symbol);
			mainblock.addSymbol(new_exp_symbol);
			mainblock.addSymbol(new_mant_symbol);
			mainblock.addSymbol(xf_symbol);
			mainblock.addSymbol(out_symbol);
			mainblock.addSymbol(clz_symbol);
			mainblock.addSymbol(mul_exp_symbol);
			
			BasicBlock bb_decompose = GecosUserBlockFactory.BBlock();
			
			// (in, &s, &exp, &mant)
			Instruction[] args_decomposition = {GecosUserInstructionFactory.symbref(parameters.get(0)),
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
			Instruction shift_set_0 = GecosUserInstructionFactory.set(clz_symbol, GecosUserInstructionFactory.Int(0));
			bb_decompose.addInstruction(shift_set_0);
			
			// div_exp = log2(div)
			Instruction div_exp_set_log2_div = GecosUserInstructionFactory.set(mul_exp_symbol, GecosUserInstructionFactory.Int(Calcul.log2(mul)));
			bb_decompose.addInstruction(div_exp_set_log2_div);
			
			// xf = mant
			Instruction xf_set_mant = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.symbref(mant_symbol));
			bb_decompose.addInstruction(xf_set_mant);
			
			// begin if
			// condition :
			// div_mant is the mantissa of the float writing of the integer div
			long overflow_mant_min;// (int) (Float.floatToIntBits(div)%Calcul.pow2(23));
			if(is_double)
			{
				overflow_mant_min = (long) (Calcul.pow2(53+Calcul.log2(mul)))/mul-Calcul.pow2(23);
			}
			else
			{
				overflow_mant_min = (long) (Calcul.pow2(24+Calcul.log2(mul)))/mul-Calcul.pow2(23);
			}
			// mant < div_mant
			Instruction mant_gt_ovf_mant_min = GecosUserInstructionFactory.gt(GecosUserInstructionFactory.symbref(mant_symbol), GecosUserInstructionFactory.Int(overflow_mant_min));
			
			// begin then
			// div_exp = log2(div)+1
			Instruction div_exp_set_log2_div_plus_1 = GecosUserInstructionFactory.set(mul_exp_symbol, GecosUserInstructionFactory.Int(Calcul.log2(mul)+1));
			BasicBlock then_mant_lt_div_mant = GecosUserBlockFactory.BBlock(div_exp_set_log2_div_plus_1);
			// end then
			
			IfBlock if_mant_lt_div_mant = GecosUserBlockFactory.IfThen(mant_gt_ovf_mant_min, then_mant_lt_div_mant);
			// end if
			
			Instruction exp_eq_0 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(0));
			CompositeBlock subnorm_compute = GecosUserBlockFactory.CompositeBlock();
			
			Instruction xf_times_mul;
			//if(arbitrary_sized_int_mul_by_constant(ps,mul,size_xf) != null) 
			//{
			//	xf_times_mul = GecosUserInstructionFactory.call(arbitrary_sized_int_mul_by_constant(ps,mul,size_xf), GecosUserInstructionFactory.symbref(xf_symbol));
			//}
			//else
			//{
				xf_times_mul = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.mul(
						GecosUserInstructionFactory.symbref(mant_symbol), GecosUserInstructionFactory.Int(mul)));
			//}
			Instruction xf_set_xf_times_mul = GecosUserInstructionFactory.set(xf_symbol, xf_times_mul);
			BasicBlock subnorm_bb = GecosUserBlockFactory.BBlock(xf_set_xf_times_mul);
			
			Instruction clz_set_xf_clz = GecosUserInstructionFactory.set(clz_symbol,GecosUserInstructionFactory.methodCallInstruction(
					"countLeadingZeros", GecosUserInstructionFactory.symbref(xf_symbol), new ArrayList<Instruction>()));
			subnorm_bb.addInstruction(clz_set_xf_clz);
			
			Instruction clz_lt_sizexf_sub_sizemant = GecosUserInstructionFactory.lt(GecosUserInstructionFactory.symbref(clz_symbol), 
					GecosUserInstructionFactory.Int(size_xf-size_mant));
			subnorm_compute.addBlock(subnorm_bb);
			
			BasicBlock then_exp_subnorm_compute = GecosUserBlockFactory.BBlock();
			Instruction new_exp_set_diff_size_sub_clz = GecosUserInstructionFactory.set(new_exp_symbol, GecosUserInstructionFactory.sub(
					GecosUserInstructionFactory.Int(size_xf-size_mant), GecosUserInstructionFactory.symbref(clz_symbol)));
			then_exp_subnorm_compute.addInstruction(new_exp_set_diff_size_sub_clz);
			
			Instruction xf_shift = GecosUserInstructionFactory.shr(GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.sub(
					GecosUserInstructionFactory.Int(size_xf-size_mant-1), GecosUserInstructionFactory.symbref(clz_symbol)));
			Instruction new_mant_set_xf_shift = GecosUserInstructionFactory.set(new_mant_symbol, xf_shift);
			then_exp_subnorm_compute.addInstruction(new_mant_set_xf_shift);
			
			Instruction new_mant_set_xf = GecosUserInstructionFactory.set(new_mant_symbol, GecosUserInstructionFactory.symbref(xf_symbol));
			BasicBlock else_exp_subnorm_compute = GecosUserBlockFactory.BBlock(new_mant_set_xf);
			
			IfBlock if_exp_subnorm_compute = GecosUserBlockFactory.IfThenElse(clz_lt_sizexf_sub_sizemant, then_exp_subnorm_compute, else_exp_subnorm_compute);
			subnorm_compute.addBlock(if_exp_subnorm_compute);
			
			CompositeBlock norm_compute = GecosUserBlockFactory.CompositeBlock();
			Instruction exp_ne_255 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(255));
			
			Instruction exp_ge_255_sub_mul_exp = GecosUserInstructionFactory.ge(GecosUserInstructionFactory.symbref(exp_symbol), 
					GecosUserInstructionFactory.sub(GecosUserInstructionFactory.Int(255), GecosUserInstructionFactory.symbref(mul_exp_symbol)));
			
			BasicBlock mant_set_0 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_mant_symbol, GecosUserInstructionFactory.Int(0)));
			
			BasicBlock mant_compute = GecosUserBlockFactory.BBlock();
			Instruction xf_set_size_mant = GecosUserInstructionFactory.methodCallInstruction("set", 
					GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(size_mant));
			mant_compute.addInstruction(xf_set_size_mant);
			
			//Instruction xf_set_xf_times_mul = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.mul(
			//		GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(mul)));
			mant_compute.addInstruction(xf_set_xf_times_mul.copy());
			
			Instruction mant_set_xf_shr_mul_exp = GecosUserInstructionFactory.set(new_mant_symbol, GecosUserInstructionFactory.shr(
					GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.symbref(mul_exp_symbol)));
			mant_compute.addInstruction(mant_set_xf_shr_mul_exp);
			
			IfBlock if_mant_compute = GecosUserBlockFactory.IfThenElse(exp_ge_255_sub_mul_exp, mant_set_0, mant_compute);
			
			IfBlock if_exp_ne_255_mant_compute = GecosUserBlockFactory.IfThen(exp_ne_255, if_mant_compute);
			norm_compute.addBlock(if_exp_ne_255_mant_compute);
			
			BasicBlock exp_set_255 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, GecosUserInstructionFactory.Int(255)));
			BasicBlock exp_set_exp_add_mul_exp = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, GecosUserInstructionFactory.add(
					GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.symbref(mul_exp_symbol))));
			
			IfBlock if_exp_compute = GecosUserBlockFactory.IfThenElse(exp_ge_255_sub_mul_exp.copy(), exp_set_255, exp_set_exp_add_mul_exp);
			
			IfBlock if_exp_ne_255_exp_compute = GecosUserBlockFactory.IfThen(exp_ne_255.copy(), if_exp_compute);
			norm_compute.addBlock(if_exp_ne_255_exp_compute);
			
			IfBlock if_computing = GecosUserBlockFactory.IfThenElse(exp_eq_0, subnorm_compute, norm_compute);
			
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
			mainblock.addBlock(bb_decompose);
			mainblock.addBlock(if_mant_lt_div_mant);
			mainblock.addBlock(if_computing);
			mainblock.addBlock(bb_rebuild);
			

			GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
			File_builder.add_operator(proc_symbol);	
						
			if(is_double)
			{
				builded_double_multiplier.put(mul, proc_symbol);
			}
			else
			{
				builded_float_multiplier.put(mul, proc_symbol);
			}
		}
		if(is_double)
		{
			return builded_double_multiplier.get(mul);
		}
		else
		{
			return builded_float_multiplier.get(mul);
		}
	}
	
	public static ProcedureSymbol build_int_mul_by_constant(ProcedureSet ps, int mul, boolean is_long)
	{
		if((!builded_int_multiplier.containsKey(mul) & !is_long) | (!builded_long_multiplier.containsKey(mul) & is_long)) 
		{
			Type type_in_out;
			String name;
			int size;
			GecosUserTypeFactory.setScope(ps.getScope());
			if(is_long)
			{
				type_in_out = GecosUserTypeFactory.LONG();
				name = "operator_long_mul"+mul;
				size = 64;
			}
			else
			{
				type_in_out = GecosUserTypeFactory.INT();
				name = "operator_int_mul"+mul;
				size = 32;
			}
			
			ProcedureSymbol proc_symbol;
			if(can_optimize(mul))
			{
				
				ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
				// int in
				parameters.add(GecosUserCoreFactory.paramSymbol("in", type_in_out));
				// ap_uint<size> int_<size>_div<div>(ap_uint<size> in)
				proc_symbol = GecosUserCoreFactory.procSymbol(name, type_in_out, parameters);
				
				CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
				GecosUserTypeFactory.setScope(mainblock.getScope());
				
				Instruction compute_div = mul_builder_eratosthene(ps, GecosUserInstructionFactory.symbref(parameters.get(0)), mul, size);
				Instruction ret = GecosUserInstructionFactory.ret(compute_div);
				
				BasicBlock block = GecosUserBlockFactory.BBlock(ret);
				mainblock.addBlock(block);
				
				//GecosUserAnnotationFactory.pragma(ret_bb, "HLS latency max=1");
				mainblock.addBlock(block);
				
				GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
				File_builder.add_operator(proc_symbol);
			}
			else
			{
				proc_symbol = null;
			}
			if(is_long)
			{
				builded_long_multiplier.put(mul, proc_symbol);
			}
			else
			{
				builded_int_multiplier.put(mul, proc_symbol);
			}
			
		}
		if(is_long)
		{
			return builded_long_multiplier.get(mul);
		}
		else
		{
			return builded_int_multiplier.get(mul);
		}
	}
		
	public static ProcedureSymbol arbitrary_sized_int_mul_by_constant(ProcedureSet ps, int mul, int size)
	/* this function provides operators for division by integer constants optimized for FPGA
	 * return the ProccedureSymbol of the operator or null if the division cannot be optimized
	 */
	{
		// to avoid multiple definitions we use map that stock the already builded operators
		// and we build it only if it hasn't been build before
		boolean builded = false;
		if(builded_arbitary_sized_int_multiplier.containsKey(mul))
		{
			if(builded_arbitary_sized_int_multiplier.get(mul).containsKey(size))
			{
				builded = true;
			}
		}
		
		
		if(!builded) 
		{
			ProcedureSymbol proc_symbol;

			if(can_optimize(mul)) // we verify if we are able to optimize this division
			{
				GecosUserTypeFactory.setScope(ps.getScope());
				
				// Parameter definition
				ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
				// int in
				parameters.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.ACINT(size, false)));
				// ap_uint<size> int_<size>_div<div>(ap_uint<size> in)
				proc_symbol = GecosUserCoreFactory.procSymbol("operator_int_"+size+"_mul"+mul, GecosUserTypeFactory.ACINT(size, false), parameters);
				
				CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
				GecosUserTypeFactory.setScope(mainblock.getScope());
				
				// this returns the optimized computation of the division
				Instruction compute_div = mul_builder_eratosthene(ps, GecosUserInstructionFactory.symbref(parameters.get(0)), mul, size);
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
			if(builded_arbitary_sized_int_multiplier.containsKey(mul))
			{
				builded_arbitary_sized_int_multiplier.get(mul).put(size, proc_symbol);
			}
			else
			{
				Map<Integer,ProcedureSymbol> pair = new TreeMap<Integer,ProcedureSymbol>();
				pair.put(size, proc_symbol);
				builded_arbitary_sized_int_multiplier.put(mul, pair);
			}
		}
		return builded_arbitary_sized_int_multiplier.get(mul).get(size);
	}

	private static boolean can_optimize(int div)
	// This function determines if we are able to optimize this division or not
	{
		/* Our optimization is based on sieve of Eratosthène
		 * We are able to optimize the division by all integers with inly the known_divider's elements
		 * in their factorization
		 */
		for (int i = 0; i < known_multiplier.length; i++) {
			if(div%known_multiplier[i]==0)
			{
				return can_optimize(div/known_multiplier[i]);
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
	
	private static Instruction mul_builder_eratosthene(ProcedureSet ps, Instruction instr_to_multiply, int mul, int size)
	/* To optimize the division we use a succession of optimized division by the prime numbers of the integer factorization
	 * of the divider
	 */
	{
		if(mul%2 == 0)
		// The case of 2 is particular because we don't use the same optimization
		{
			int pow_2 = Calcul.pow_2_integer_factorization(mul);
			int new_constant = (int) (mul/Calcul.pow2(pow_2));
			Instruction odd_multiplier = mul_builder_eratosthene(ps, instr_to_multiply, new_constant, size);
			return GecosUserInstructionFactory.shl(odd_multiplier, GecosUserInstructionFactory.Int(pow_2));
		}
		for (int i = 0; i < known_multiplier.length; i++) {
			if(mul%known_multiplier[i]==0)
			{
				// we use the optimized division by knwon_divider[i]
				ProcedureSymbol ps_div = int_mul_by_small_odd_constant(ps, known_multiplier[i], size);
				Instruction intstr_div = GecosUserInstructionFactory.call(ps_div, instr_to_multiply);
				return mul_builder_eratosthene(ps, intstr_div, mul/known_multiplier[i], size);
			}
		}
		
		if(mul == 1)
		// end of recursivity
		{
			return instr_to_multiply;
		}
		else
		{
			return null;
		}
	}
	
	private static ProcedureSymbol int_mul_by_small_odd_constant(ProcedureSet ps, int mul, int size)
	// This function provides a function which implement optimized operators
	// for the division by a small odd integer constant of any arbitrary sized integer
	// return the symbol of the function
	{
		boolean builded = false;
		if(builded_int_divider_by_small_odd_constant.containsKey(mul))
		{
			if(builded_int_divider_by_small_odd_constant.get(mul).containsKey(size))
			{
				builded = true;
			}
		}

		if(!builded) // We need to define the function if it isn't yet
		{
			ProcedureSymbol proc_symbol;

			int width_chunk = 6+Calcul.log2(mul)+1;
			int nb_chunk = size/6;

			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
			// int in
			parameters.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.ACINT(size, false)));
			// ap_uint<size> int_<size>_div<div>(ap_uint<size> in)
			proc_symbol = GecosUserCoreFactory.procSymbol("int_"+size+"_mul"+mul, GecosUserTypeFactory.ACINT(size, false), parameters);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());

			ArrayList<Symbol> chunk_symbols = new ArrayList<>();
			for(int i=0; i<nb_chunk; i++)
			{
				Symbol chunk = GecosUserCoreFactory.symbol("chunk_"+i*6+"_"+(i*6+5), GecosUserTypeFactory.ACINT(width_chunk, false));
				chunk_symbols.add(chunk);
				mainblock.addSymbol(chunk);
			}
			if(size%6!=0)
			{
				Symbol chunk = GecosUserCoreFactory.symbol("chunk_"+(nb_chunk*6)+"_"+(size-1), GecosUserTypeFactory.ACINT(width_chunk, false));
				chunk_symbols.add(chunk);
				mainblock.addSymbol(chunk);
			}
			
			BasicBlock basic_block = GecosUserBlockFactory.BBlock();
			Instruction sum_out = GecosUserInstructionFactory.Int(0);
			for(int i=0; i<nb_chunk; i++)
			{
				Instruction args_range[] = {GecosUserInstructionFactory.Int(i*6+5),GecosUserInstructionFactory.Int(i*6)};
				Instruction in_range = GecosUserInstructionFactory.methodCallInstruction("range", GecosUserInstructionFactory.symbref(parameters.get(0)), args_range);
				Instruction call_lut = GecosUserInstructionFactory.call(lut_div_chunk(ps, mul), in_range);
				Instruction chunk_set_call_lut = GecosUserInstructionFactory.set(chunk_symbols.get(i), call_lut);
				sum_out = GecosUserInstructionFactory.add(sum_out, GecosUserInstructionFactory.shl(GecosUserInstructionFactory.cast(
						GecosUserTypeFactory.ACINT(size, false), GecosUserInstructionFactory.symbref(chunk_symbols.get(i))), GecosUserInstructionFactory.Int(6*i)));
				basic_block.addInstruction(chunk_set_call_lut);
			}
			if(size%6!=0)
			{
				Instruction args_range[] = {GecosUserInstructionFactory.Int(nb_chunk*6),GecosUserInstructionFactory.Int(size-1)};
				Instruction in_range = GecosUserInstructionFactory.methodCallInstruction("range", GecosUserInstructionFactory.symbref(parameters.get(0)), args_range);
				Instruction call_lut = GecosUserInstructionFactory.call(lut_div_chunk(ps, mul), in_range);
				Instruction chunk_set_call_lut = GecosUserInstructionFactory.set(chunk_symbols.get(nb_chunk), call_lut);
				sum_out = GecosUserInstructionFactory.add(sum_out, GecosUserInstructionFactory.shl(GecosUserInstructionFactory.cast(
						GecosUserTypeFactory.ACINT(size, false), GecosUserInstructionFactory.symbref(chunk_symbols.get(nb_chunk))), GecosUserInstructionFactory.Int(6*nb_chunk)));
				basic_block.addInstruction(chunk_set_call_lut);
			}
			
			Instruction ret_sum_out = GecosUserInstructionFactory.ret(sum_out);
			basic_block.addInstruction(ret_sum_out);
			
			mainblock.addBlock(basic_block);
			GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
			
			if(builded_int_divider_by_small_odd_constant.containsKey(mul))
			{
				builded_int_divider_by_small_odd_constant.get(mul).put(size, proc_symbol);
			}
			else
			{
				Map<Integer,ProcedureSymbol> pair = new TreeMap<Integer,ProcedureSymbol>();
				pair.put(size, proc_symbol);
				builded_int_divider_by_small_odd_constant.put(mul, pair);
			}
		}
		return builded_int_divider_by_small_odd_constant.get(mul).get(size);
	}
	
	private static ProcedureSymbol lut_div_chunk(ProcedureSet ps, int mul)
	/* This function build a group of functions which compute the division of a chunk
	 * of the dividend with only 6 LUTs
	 * it returns the quotient and the remainders on 6 bits so the width of the chunk depends
	 * on the size of the remainder (i.e. the value of the divider)
	 */
	{
		// We build the function only if it hasn't been builded yet
		if(!builded_lut_chunk_multiplier.containsKey(mul))
		{
			ProcedureSymbol proc_symbol;
			String name = "lut_mul"+mul+"_chunk";
			
			// We compute the width of the remainder
			int width_LUT_output = 6+Calcul.log2(mul)+1;
			
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
			// ap_uint<6-width_r> d
			parameters.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(6, false)));
			
			proc_symbol = GecosUserCoreFactory.procSymbol(name, GecosUserTypeFactory.ACINT(width_LUT_output, false), parameters);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			Symbol out_symbol = GecosUserCoreFactory.symbol("out", GecosUserTypeFactory.ACINT(width_LUT_output, false));
			mainblock.addSymbol(out_symbol);
			
			BasicBlock basic_block = GecosUserBlockFactory.BBlock();
			
			
			for (int i = 0; i < width_LUT_output; i++) 
			{
				Symbol res_i = single_lut(mul, i);
				mainblock.addSymbol(res_i);
				
				Instruction select_out = GecosUserInstructionFactory.array(GecosUserInstructionFactory.symbref(out_symbol), GecosUserInstructionFactory.Int(i));
				Instruction select_res_i = GecosUserInstructionFactory.array(res_i, GecosUserInstructionFactory.symbref(parameters.get(0)));
				Instruction set_rout_res_i = GecosUserInstructionFactory.set(select_out, select_res_i);
				basic_block.addInstruction(set_rout_res_i);
			}
			
			Instruction ret_out = GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(out_symbol));
			basic_block.addInstruction(ret_out);
			
			mainblock.addChildren(basic_block);
			GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
			
			builded_lut_chunk_multiplier.put(mul, proc_symbol);
		}
		
		return builded_lut_chunk_multiplier.get(mul);
	}
	
	private static Symbol single_lut(int mul, int n)
	/* This function build functions which computes one of the bit of the remainder or the quotient of
	 * the division by <div>
	 * 
	 * This computation takes only one LUT of the FPGA
	 */
	{		
		Symbol array_symbol = GecosUserCoreFactory.symbol("q"+n, GecosUserTypeFactory.ARRAY(GecosUserTypeFactory.ACINT(1, false), 64));
		
		Instruction[] cases = new Instruction[64];
		for(int i=0; i<64; i++)
		{
			int res = i*mul;
			res = (res >> n) % 2;
			cases[i] = GecosUserInstructionFactory.Int(res);
		}
		Instruction array_value = GecosUserInstructionFactory.arrayValue(cases);
		
		array_symbol.setValue(array_value);
		
		return array_symbol;
	}
}


