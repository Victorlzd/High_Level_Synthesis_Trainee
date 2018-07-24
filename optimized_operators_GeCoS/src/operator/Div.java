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
import gecos.instrs.Instruction;
import gecos.instrs.SetInstruction;
import util.Calcul;
import util.File_builder;
import util.Float_fix;
import gecos.blocks.*;
import java.util.Map;
import java.util.TreeMap;



public class Div {
	
	// This arrays contains the ProcedureSymbols of the already builded functions
	// It permits to avoid multiple definitions
	private static Map<Integer, ProcedureSymbol> builded_lut_chunk_divider = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer,Map<Integer,ProcedureSymbol>> builded_int_divider_by_small_odd_constant = new TreeMap<Integer,Map<Integer,ProcedureSymbol>>();
	private static Map<Integer,Map<Integer,ProcedureSymbol>> builded_int_divider = new TreeMap<Integer,Map<Integer,ProcedureSymbol>>();
	private static final int[] known_divider = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	
	
	public static ProcedureSymbol int_div(ProcedureSet ps, int div, int size)
	{
		boolean builded = false;
		if(builded_int_divider.containsKey(div))
		{
			if(builded_int_divider.get(div).containsKey(size))
			{
				builded = true;
			}
		}

		if(!builded) // We need to define the function if it isn't yet
		{
			ProcedureSymbol proc_symbol;

			if(can_optimize(div))
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
				
				Instruction compute_div = div_builder_eratosthene(ps, GecosUserInstructionFactory.symbref(parameters.get(0)), div, size);
				if (compute_div == null)
				{
					compute_div = GecosUserInstructionFactory.div(GecosUserInstructionFactory.symbref(parameters.get(0)), GecosUserInstructionFactory.Int(div));
				}
				Instruction ret = GecosUserInstructionFactory.ret(compute_div);
				
				BasicBlock block = GecosUserBlockFactory.BBlock(ret);
				mainblock.addBlock(block);
				
				GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
				File_builder.add_operator(proc_symbol);
			}
			else
			{
				proc_symbol = null;
			}
			
			if(builded_int_divider.containsKey(div))
			{
				builded_int_divider.get(div).put(size, proc_symbol);
			}
			else
			{
				Map<Integer,ProcedureSymbol> pair = new TreeMap<Integer,ProcedureSymbol>();
				pair.put(size, proc_symbol);
				builded_int_divider.put(div, pair);
			}
		}
		return builded_int_divider.get(div).get(size);
	}

	private static boolean can_optimize(int div)
	{
		for (int i = 0; i < known_divider.length; i++) {
			if(div%known_divider[i]==0)
			{
				return can_optimize(div/known_divider[i]);
			}
		}
		if(div == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
		
	private static Instruction div_builder_eratosthene(ProcedureSet ps, Instruction instr_to_divide, int div, int size)
	{
		if(div%2 == 0)
		{
			int pow_2 = Calcul.pow_2_integer_factorization(div);
			int new_div = (int) (div/Calcul.pow2(pow_2));
			Instruction shr_in = GecosUserInstructionFactory.shr(instr_to_divide, GecosUserInstructionFactory.Int(pow_2));
			return div_builder_eratosthene(ps, shr_in, new_div, size-pow_2);
		}
		for (int i = 0; i < known_divider.length; i++) {
			if(div%known_divider[i]==0)
			{
				ProcedureSymbol ps_div = int_div_by_small_odd_constant(ps, known_divider[i], size);
				Instruction intstr_div = GecosUserInstructionFactory.call(ps_div, instr_to_divide);
				return div_builder_eratosthene(ps, intstr_div, div/known_divider[i], size);
			}
		}
		/*else if(div%7 == 0)
		{
			ProcedureSymbol ps_div7 = int_div_by_small_odd_constant(ps, 7, size);
			Instruction intstr_div7 = GecosUserInstructionFactory.call(ps_div7, instr_to_divide);
			return div_builder_eratosthene(ps, intstr_div7, div/7, size);
		}
		else if(div%5 == 0)
		{
			ProcedureSymbol ps_div5 = int_div_by_small_odd_constant(ps, 5, size);
			Instruction intstr_div5 = GecosUserInstructionFactory.call(ps_div5, instr_to_divide);
			return div_builder_eratosthene(ps, intstr_div5, div/5, size);
		}
		else if(div%3 == 0)
		{
			ProcedureSymbol ps_div3 = int_div_by_small_odd_constant(ps, 3, size);
			Instruction intstr_div3 = GecosUserInstructionFactory.call(ps_div3, instr_to_divide);
			return div_builder_eratosthene(ps, intstr_div3, div/3, size);
		}*/
		if(div == 1)
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
			Symbol d_symbol = GecosUserCoreFactory.symbol("d", GecosUserTypeFactory.ACINT(32, false));
			Symbol q_symbol = GecosUserCoreFactory.symbol("q", GecosUserTypeFactory.ACINT(32, false));
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
			File_builder.add_operator(proc_symbol);
			
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
			
			BasicBlock block = GecosUserBlockFactory.BBlock();
			
			for (int i = 0; i < width_r; i++) 
			{
				//(d,r_in)
				Instruction[] args_lut = {GecosUserInstructionFactory.symbref(parameters.get(0)), GecosUserInstructionFactory.symbref(parameters.get(1))};
				// lut_div<div>_r<i>
				ProcedureSymbol lut_proc_symbol = single_lut(ps, div, i, true);
				// (*r_out)[i]
				Instruction instr_r_select_i = GecosUserInstructionFactory.array(GecosUserInstructionFactory.indir(
						GecosUserInstructionFactory.symbref(parameters.get(3))), GecosUserInstructionFactory.Int(i));
				// lut_div<div>_r<i>(d,r_in)
				Instruction lut_function_call = GecosUserInstructionFactory.call(lut_proc_symbol, args_lut);
				// (*r_out)[i] = lut_div<div>_r<i>(d,r_in)
				Instruction set_instr = GecosUserInstructionFactory.set(instr_r_select_i, lut_function_call);
				block.addInstruction(set_instr);
			}
			
			for (int i = 0; i < 6-width_r; i++) 
			{
				//(d,r_in)
				Instruction[] args_lut = {GecosUserInstructionFactory.symbref(parameters.get(0)), GecosUserInstructionFactory.symbref(parameters.get(1))};
				// lut_div<div>_q<i>
				ProcedureSymbol lut_proc_symbol = single_lut(ps, div, i, false);
				// (*q)[i]
				Instruction instr_r_select_i = GecosUserInstructionFactory.array(GecosUserInstructionFactory.indir(
						GecosUserInstructionFactory.symbref(parameters.get(2))), GecosUserInstructionFactory.Int(i));
				// lut_div<div>_q<i>(d,r_in)
				Instruction lut_function_call = GecosUserInstructionFactory.call(lut_proc_symbol, args_lut);
				// (*q)[i] = lut_div<div>_r<i>(d,r_in)
				Instruction set_instr = GecosUserInstructionFactory.set(instr_r_select_i, lut_function_call);
				block.addInstruction(set_instr);
			}
			
			mainblock.addChildren(block);
			GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
			
			builded_lut_chunk_divider.put(div, proc_symbol);
		}
		
		return builded_lut_chunk_divider.get(div);
	}
	
	private static ProcedureSymbol single_lut(ProcedureSet ps, int div, int n, boolean isRemainder)
	/* This function build functions which computes one of the bit of the remainder or the quotient of
	 * the division by <div>
	 * 
	 * This computation takes only one LUT of the FPGA
	 */
	{
		ProcedureSymbol proc_symbol;
		
		String name = "lut_"+(isRemainder?"r":"q")+n+"_div"+div;
		
		// we compute the width of the remainder
		int width_r = Calcul.log2(div-1)+1;
		
		GecosUserTypeFactory.setScope(ps.getScope());
		
		// Parameter definition
		ArrayList<ParameterSymbol> parameters = new ArrayList<ParameterSymbol>();
		// ap_uint<6-width_r> d
		parameters.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(6-width_r, false)));
		// ap_uint<width_r> r_in
		parameters.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(width_r, false)));
		// ap_uint<1> lut_r1(ap_uint<6-width_r> d, ap_uint<width_r> r)
		proc_symbol = GecosUserCoreFactory.procSymbol(name, GecosUserTypeFactory.ACINT(1, false), parameters);
		
		CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
		GecosUserTypeFactory.setScope(mainblock.getScope());
		
		// ap_uint<6> in
		Symbol in_symbol = GecosUserCoreFactory.symbol("in", GecosUserTypeFactory.ACINT(6, false));
		// ap_uint<1> ret_value
		Symbol ret_value_symbol = GecosUserCoreFactory.symbol("ret_value", GecosUserTypeFactory.ACINT(1, false));
		mainblock.addSymbol(ret_value_symbol);
		mainblock.addSymbol(in_symbol);
		
		
		// r_in.concat(d)
		Instruction r_in_concat_d = GecosUserInstructionFactory.methodCallInstruction("concat", 
				GecosUserInstructionFactory.symbref(parameters.get(1)),
				GecosUserInstructionFactory.symbref(parameters.get(0)));
		// in = r_in.concat(d);
		Instruction in_def = GecosUserInstructionFactory.set(in_symbol, r_in_concat_d);
		
		BasicBlock in_concat_bb = GecosUserBlockFactory.BBlock(in_def);
		
		// begin switch
		BasicBlock[] cases = new BasicBlock[48];
		for(int i=0; i<48; i++)
		{
			// case i
			int res = isRemainder ? i%div : i/div;
			res = (res >> n) % 2;
			// ret_value = (0 or 1)
			Instruction set_ret_value = GecosUserInstructionFactory.set(ret_value_symbol, GecosUserInstructionFactory.Int(res));
			// break;
			Instruction break_instr = GecosUserInstructionFactory.breakInst();
			
			cases[i] = GecosUserBlockFactory.BBlock(set_ret_value);
			cases[i].addInstruction(break_instr);
		}
		SwitchBlock switch_block = GecosUserBlockFactory.Switch(GecosUserInstructionFactory.symbref(in_symbol), cases);
		// end switch
		
		// return ret_value
		BasicBlock return_ret_value = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(
				GecosUserInstructionFactory.symbref(ret_value_symbol)));
		
		mainblock.addChildren(in_concat_bb);
		mainblock.addChildren(switch_block);
		mainblock.addChildren(return_ret_value);
		GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
		
		return proc_symbol;
	}
}
