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


public class Div {
	
	// This array contains the ProcedureSymbols of the already builded lut_chunk functions
	// It permits to avoid multiple definitions
	private static ProcedureSymbol[] proc_symbol_lut_chunk = new ProcedureSymbol[64];

	public static ProcedureSymbol build_lut_div_chunk(ProcedureSet ps, int div)
	/* This function build a group of functions which compute the division of a chunk
	 * of the dividend with only 6 LUTs
	 * it returns the quotient and the remainders on 6 bits so the width of the chunk depends
	 * on the size of the remainder (i.e. the value of the divider)
	 */
	{
		// We build the function only if it hasn't been builded yet
		if(proc_symbol_lut_chunk[div] == null)
		{
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
			proc_symbol_lut_chunk[div] = GecosUserCoreFactory.procSymbol(name, GecosUserTypeFactory.VOID(), parameters);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			BasicBlock block = GecosUserBlockFactory.BBlock();
			
			for (int i = 0; i < width_r; i++) 
			{
				//(d,r_in)
				Instruction[] args_lut = {GecosUserInstructionFactory.symbref(parameters.get(0)), GecosUserInstructionFactory.symbref(parameters.get(1))};
				// lut_div<div>_r<i>
				ProcedureSymbol lut_proc_symbol = build_single_lut(ps, div, i, true);
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
				ProcedureSymbol lut_proc_symbol = build_single_lut(ps, div, i, false);
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
			GecosUserCoreFactory.proc(ps, proc_symbol_lut_chunk[div], mainblock);
		}
		
		return proc_symbol_lut_chunk[div];
	}
	
	private static ProcedureSymbol build_single_lut(ProcedureSet ps, int div, int n, boolean isRemainder)
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
