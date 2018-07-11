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

public class Div3 {
	/* This class provides an optimized operator for computing 
	 * the division by 3 of an int, long, float or double
	 */
	
	private static ProcedureSymbol ps_lut_r1;
	private static ProcedureSymbol ps_lut_r2;
	private static ProcedureSymbol ps_lut_q1;
	private static ProcedureSymbol ps_lut_q2;
	private static ProcedureSymbol ps_lut_q3;
	private static ProcedureSymbol ps_lut_q4;
	private static ProcedureSymbol ps_lut_r;
	private static ProcedureSymbol ps_lut_q;
	private static ProcedureSymbol ps_lut_div3;
	private static ProcedureSymbol ps_int_div3;
	private static ProcedureSymbol ps_long_div3;
	private static ProcedureSymbol ps_float_div3;
	private static ProcedureSymbol ps_double_div3;
	
	private static ProcedureSymbol build_lut_r1(ProcedureSet ps)
	// This function provides a function which compute the first bit
	// of the remainder of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_r1==null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_lut_r1 = new ArrayList<ParameterSymbol>();
			// ap_uint<4> d
			param_lut_r1.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint<2> r_in
			param_lut_r1.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_uint<1> lut_r1(ap_uint<4> d, ap_uint<2> r)
			ps_lut_r1 = GecosUserCoreFactory.procSymbol("lut_r1", GecosUserTypeFactory.ACINT(1, false), param_lut_r1);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();// corps de la fonction
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<6> in
			Symbol in_symbol = GecosUserCoreFactory.symbol("in", GecosUserTypeFactory.ACINT(6, false));
			// ap_uint<1> ret_value
			Symbol ret_value_symbol = GecosUserCoreFactory.symbol("ret_value", GecosUserTypeFactory.ACINT(1, false));
			mainblock.addSymbol(ret_value_symbol);
			mainblock.addSymbol(in_symbol);
			
			
			// r_in.concat(d)
			Instruction r_in_concat_d = GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(param_lut_r1.get(1)),
					GecosUserInstructionFactory.symbref(param_lut_r1.get(0)));
			// in = r_in.concat(d);
			Instruction in_def = GecosUserInstructionFactory.set(in_symbol, r_in_concat_d);
			
			BasicBlock in_concat_bb = GecosUserBlockFactory.BBlock(in_def);
			
			// begin switch
			BasicBlock[] cases = new BasicBlock[48];
			for(int i=0; i<48; i++)
			{
				// case i
				int res = (i%3)%2; // compute ret_value
				// ret_value = (0 or 1)
				Instruction set_ret_value = GecosUserInstructionFactory.set(ret_value_symbol, GecosUserInstructionFactory.Int(res));
				cases[i] = GecosUserBlockFactory.BBlock(set_ret_value);
			}
			SwitchBlock switch_block = GecosUserBlockFactory.Switch(GecosUserInstructionFactory.symbref(in_symbol), cases);
			// end switch
			
			// return ret_value
			BasicBlock return_ret_value = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(
					GecosUserInstructionFactory.symbref(ret_value_symbol)));
			
			mainblock.addChildren(in_concat_bb);
			mainblock.addChildren(switch_block);
			mainblock.addChildren(return_ret_value);
			GecosUserCoreFactory.proc(ps, ps_lut_r1, mainblock);
		}
		
		return ps_lut_r1;
	}

	private static ProcedureSymbol build_lut_r2(ProcedureSet ps)
	// This function provides a function which compute the second bit
	// of the remainder of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_r2==null)
		{
			GecosUserTypeFactory.setScope(ps.getScope()); // We need to define the function if it isn't yet
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_lut_r2 = new ArrayList<ParameterSymbol>();
			// ap_uint<4> d
			param_lut_r2.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint<2> r_in
			param_lut_r2.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_uint<1> lut_r2(ap_uint<4> d, ap_uint<2> r_in)
			ps_lut_r2 = GecosUserCoreFactory.procSymbol("lut_r2", GecosUserTypeFactory.ACINT(1, false), param_lut_r2);
			
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
					GecosUserInstructionFactory.symbref(param_lut_r2.get(1)),
					GecosUserInstructionFactory.symbref(param_lut_r2.get(0)));
			// in = r_in.concat(d)
			Instruction in_def = GecosUserInstructionFactory.set(in_symbol, r_in_concat_d);
			
			BasicBlock in_concat_bb = GecosUserBlockFactory.BBlock(in_def);
			
			// begin switch
			BasicBlock[] cases = new BasicBlock[48];
			for(int i=0; i<48; i++)
			{
				// case i:
				int res = (i%3)/2; // compute ret_value
				// ret_value = (0 or 1)
				Instruction set_ret_value = GecosUserInstructionFactory.set(ret_value_symbol, GecosUserInstructionFactory.Int(res));
				cases[i] = GecosUserBlockFactory.BBlock(set_ret_value);
			}
			SwitchBlock switch_block = GecosUserBlockFactory.Switch(GecosUserInstructionFactory.symbref(in_symbol), cases);
			// end switch
			
			// return ret_value
			BasicBlock return_ret_value = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(
					GecosUserInstructionFactory.symbref(ret_value_symbol)));
			
			mainblock.addChildren(in_concat_bb);
			mainblock.addChildren(switch_block);
			mainblock.addChildren(return_ret_value);
			GecosUserCoreFactory.proc(ps, ps_lut_r2, mainblock);
		}
		
		return ps_lut_r2;
	}

	private static ProcedureSymbol build_lut_q1(ProcedureSet ps)
	// This function provides a function which compute the first bit
	// of the quotient of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_q1==null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_lut_q1 = new ArrayList<ParameterSymbol>();
			// ap_uint<4> d
			param_lut_q1.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint<2> r_in
			param_lut_q1.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_uint<1> lut_q1(ap_uint<4> d, ap_uint<2> r_in)
			ps_lut_q1 = GecosUserCoreFactory.procSymbol("lut_q1", GecosUserTypeFactory.ACINT(1, false), param_lut_q1);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<6> in
			Symbol in_symbol = GecosUserCoreFactory.symbol("in", GecosUserTypeFactory.ACINT(6, false));
			// ap_uint<1> ret_value
			Symbol ret_value_symbol = GecosUserCoreFactory.symbol("ret_value", GecosUserTypeFactory.ACINT(1, false));
			mainblock.addSymbol(ret_value_symbol);
			mainblock.addSymbol(in_symbol);
			
			// r_in.concat(d)
			Instruction r_in_concat_D = GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(param_lut_q1.get(1)),
					GecosUserInstructionFactory.symbref(param_lut_q1.get(0)));
			// in = r_in.concat(d)
			Instruction in_def = GecosUserInstructionFactory.set(in_symbol, r_in_concat_D);
			
			BasicBlock in_concat_bb = GecosUserBlockFactory.BBlock(in_def);
			
			// begin switch
			BasicBlock[] cases = new BasicBlock[48];
			for(int i=0; i<48; i++)
			{
				// case i:
				int res = (i/3)%2; // compute ret_value
				// ret_value = res
				Instruction set_ret_value = GecosUserInstructionFactory.set(ret_value_symbol, GecosUserInstructionFactory.Int(res));
				cases[i] = GecosUserBlockFactory.BBlock(set_ret_value);
			}
			SwitchBlock switch_block = GecosUserBlockFactory.Switch(GecosUserInstructionFactory.symbref(in_symbol), cases);
			// end switch
			
			// return ret_value
			BasicBlock return_ret_value = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(
					GecosUserInstructionFactory.symbref(ret_value_symbol)));
			
			mainblock.addChildren(in_concat_bb);
			mainblock.addChildren(switch_block);
			mainblock.addChildren(return_ret_value);
			GecosUserCoreFactory.proc(ps, ps_lut_q1, mainblock);
		}
		
		return ps_lut_q1;
	}

	public static ProcedureSymbol build_lut_q2(ProcedureSet ps)
	// This function provides a function which compute the second bit
	// of the quotient of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_q2 == null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_lut_q2 = new ArrayList<ParameterSymbol>();
			// ap_uint<4> d
			param_lut_q2.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint<2> r_in
			param_lut_q2.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_uint<1> lut_q2(ap_uint<4> d, ap_uint<2> r_in)
			ps_lut_q2 = GecosUserCoreFactory.procSymbol("lut_q2", GecosUserTypeFactory.ACINT(1, false), param_lut_q2);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<6> in
			Symbol in_symbol = GecosUserCoreFactory.symbol("in", GecosUserTypeFactory.ACINT(6, false));
			// ap_uint<1> ret_value
			Symbol ret_value_symbol = GecosUserCoreFactory.symbol("ret_value", GecosUserTypeFactory.ACINT(1, false));
			mainblock.addSymbol(ret_value_symbol);
			mainblock.addSymbol(in_symbol);
			
			// r_in.concat(D)
			Instruction r_in_concat_D = GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(param_lut_q2.get(1)),
					GecosUserInstructionFactory.symbref(param_lut_q2.get(0)));
			// in = r_in.concat(D)
			Instruction in_def = GecosUserInstructionFactory.set(in_symbol, r_in_concat_D);
			
			BasicBlock in_concat_bb = GecosUserBlockFactory.BBlock(in_def);
			
			// begin switch
			BasicBlock[] cases = new BasicBlock[48];
			for(int i=0; i<48; i++)
			{
				// case i:
				int res = ((i/3)%4)/2; // compute ret_value
				// ret_value = res
				Instruction set_ret_value = GecosUserInstructionFactory.set(ret_value_symbol, GecosUserInstructionFactory.Int(res));
				cases[i] = GecosUserBlockFactory.BBlock(set_ret_value);
			}
			SwitchBlock switch_block = GecosUserBlockFactory.Switch(GecosUserInstructionFactory.symbref(in_symbol), cases);
			// end switch
			
			// return ret_value
			BasicBlock return_ret_value = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(
					GecosUserInstructionFactory.symbref(ret_value_symbol)));
			
			mainblock.addChildren(in_concat_bb);
			mainblock.addChildren(switch_block);
			mainblock.addChildren(return_ret_value);
			GecosUserCoreFactory.proc(ps, ps_lut_q2, mainblock);
		}
		
		return ps_lut_q2;
	}

	private static ProcedureSymbol build_lut_q3(ProcedureSet ps)
	// This function provides a function which compute the third bit
	// of the quotient of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_q3 == null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_lut_q3 = new ArrayList<ParameterSymbol>();
			// ap_uint<4> d
			param_lut_q3.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint<2> r_in
			param_lut_q3.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_uint<1> lut_q3(ap_uint<4> d, ap_uint<2> r_in)
			ps_lut_q3 = GecosUserCoreFactory.procSymbol("lut_q3", GecosUserTypeFactory.ACINT(1, false), param_lut_q3);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();// corps de la fonction
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<6> in
			Symbol in_symbol = GecosUserCoreFactory.symbol("in", GecosUserTypeFactory.ACINT(6, false));
			// ap_uint<1> ret_value
			Symbol ret_value_symbol = GecosUserCoreFactory.symbol("ret_value", GecosUserTypeFactory.ACINT(1, false));
			mainblock.addSymbol(ret_value_symbol);
			mainblock.addSymbol(in_symbol);
			
			// r_in.concat(d)
			Instruction r_in_concat_D = GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(param_lut_q3.get(1)),
					GecosUserInstructionFactory.symbref(param_lut_q3.get(0)));
			// in = r_in.concat(d)
			Instruction in_def = GecosUserInstructionFactory.set(in_symbol, r_in_concat_D);
			BasicBlock in_concat_bb = GecosUserBlockFactory.BBlock(in_def);
			
			// begin switch
			BasicBlock[] cases = new BasicBlock[48];
			for(int i=0; i<48; i++)
			{
				// case i:
				int res = ((i/3)%8)/4; // compute ret_value
				// ret_value = res
				Instruction set_ret_value = GecosUserInstructionFactory.set(ret_value_symbol, GecosUserInstructionFactory.Int(res));
				cases[i] = GecosUserBlockFactory.BBlock(set_ret_value);
			}
			SwitchBlock switch_block = GecosUserBlockFactory.Switch(GecosUserInstructionFactory.symbref(in_symbol), cases);
			//end switch
			
			// return ret_value
			BasicBlock return_ret_value = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(
					GecosUserInstructionFactory.symbref(ret_value_symbol)));
			
			mainblock.addChildren(in_concat_bb);
			mainblock.addChildren(switch_block);
			mainblock.addChildren(return_ret_value);
			GecosUserCoreFactory.proc(ps, ps_lut_q3, mainblock);
		}
		
		return ps_lut_q3;
	}
	
	public static ProcedureSymbol build_lut_q4(ProcedureSet ps)
	// This function provides a function which compute the fourth bit
	// of the quotient of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_q4 == null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_lut_q4 = new ArrayList<ParameterSymbol>();
			// ap_uint<4> d
			param_lut_q4.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint<2> r_in
			param_lut_q4.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_uint<1> lut_q4(ap_uint<4> d, ap_uint<2> r_in)
			ps_lut_q4 = GecosUserCoreFactory.procSymbol("lut_q4", GecosUserTypeFactory.ACINT(1, false), param_lut_q4);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<6> in
			Symbol in_symbol = GecosUserCoreFactory.symbol("in", GecosUserTypeFactory.ACINT(6, false));
			// ap_uint<1> ret_value
			Symbol ret_value_symbol = GecosUserCoreFactory.symbol("ret_value", GecosUserTypeFactory.ACINT(1, false));
			mainblock.addSymbol(ret_value_symbol);
			mainblock.addSymbol(in_symbol);
			
			// r_in.concat(d)
			Instruction r_in_concat_D = GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(param_lut_q4.get(1)),
					GecosUserInstructionFactory.symbref(param_lut_q4.get(0)));
			// in = r_in.concat(d)
			Instruction in_def = GecosUserInstructionFactory.set(in_symbol, r_in_concat_D);
			BasicBlock in_concat_bb = GecosUserBlockFactory.BBlock(in_def);
			
			// begin switch
			BasicBlock[] cases = new BasicBlock[48];
			for(int i=0; i<48; i++)
			{
				// case i:
				int res = ((i/3)%16)/8; // compute return_value
				// return_value = res
				Instruction set_ret_value = GecosUserInstructionFactory.set(ret_value_symbol, GecosUserInstructionFactory.Int(res));
				cases[i] = GecosUserBlockFactory.BBlock(set_ret_value);
			}
			SwitchBlock switch_block = GecosUserBlockFactory.Switch(GecosUserInstructionFactory.symbref(in_symbol), cases);
			// end switch
			
			// return return_value
			BasicBlock return_ret_value = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(
					GecosUserInstructionFactory.symbref(ret_value_symbol)));
			
			mainblock.addChildren(in_concat_bb);
			mainblock.addChildren(switch_block);
			mainblock.addChildren(return_ret_value);
			GecosUserCoreFactory.proc(ps, ps_lut_q4, mainblock);
		}
		
		return ps_lut_q4;
	}
	
	private static ProcedureSymbol build_lut_r(ProcedureSet ps)
	// This function provides a function which compute the remainder
	// of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_r == null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> paramLut_r = new ArrayList<ParameterSymbol>();
			// ap_uint<4> d
			paramLut_r.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint<2> r_in
			paramLut_r.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_uint<1> lut_r(ap_uint<4> d, ap_uint<2> r_in)
			ps_lut_r = GecosUserCoreFactory.procSymbol("lut_r", GecosUserTypeFactory.ACINT(2, false), paramLut_r);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<1> r1
			Symbol r1_symbol = GecosUserCoreFactory.symbol("r1", GecosUserTypeFactory.ACINT(1, false));
			// ap_uint<1> r2
			Symbol r2_symbol = GecosUserCoreFactory.symbol("r2", GecosUserTypeFactory.ACINT(1, false));
			mainblock.addSymbol(r1_symbol);
			mainblock.addSymbol(r2_symbol);
			
			BasicBlock bb = GecosUserBlockFactory.BBlock();
			
			// (d,r_in)
			Instruction[] args_lut_r1 = {GecosUserInstructionFactory.symbref(paramLut_r.get(0)),
					GecosUserInstructionFactory.symbref(paramLut_r.get(1))};
			build_lut_r1(ps); // We need function lut_r1
			// r1 = lut_r1(d,r_in)
			Instruction def_r1 = GecosUserInstructionFactory.set(r1_symbol, GecosUserInstructionFactory.call(ps_lut_r1, args_lut_r1));
			
			// (d,r_in)
			Instruction[] args_lut_r2 = {GecosUserInstructionFactory.symbref(paramLut_r.get(0)),
					GecosUserInstructionFactory.symbref(paramLut_r.get(1))};
			build_lut_r2(ps); // We need function lut_r2
			// r2 = lut_r2(d,r_in)
			Instruction def_r2 = GecosUserInstructionFactory.set(r2_symbol, GecosUserInstructionFactory.call(ps_lut_r2, args_lut_r2));
			
			// r2.concat(r1)
			Instruction r2_concat_r1 = GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(r2_symbol),
					GecosUserInstructionFactory.symbref(r1_symbol));
			// return r2.concat(r1)
			Instruction ret = GecosUserInstructionFactory.ret(r2_concat_r1);
			
			bb.addInstruction(def_r1);
			bb.addInstruction(def_r2);
			bb.addInstruction(ret);
			
			
			
			mainblock.addChildren(bb);
			GecosUserCoreFactory.proc(ps, ps_lut_r, mainblock);
		}
		
		return ps_lut_r;
	}

	private static ProcedureSymbol build_lut_q(ProcedureSet ps)
	// This function provides a function which compute the quotient
	// of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_q == null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_lut_q = new ArrayList<ParameterSymbol>();
			// ap_uint<4> d
			param_lut_q.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint<2> r_in
			param_lut_q.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_int<4> lut_q(ap_uint<4> d, ap_uint<2> r_in)
			ps_lut_q = GecosUserCoreFactory.procSymbol("lut_q", GecosUserTypeFactory.ACINT(4, false), param_lut_q);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();// corps de la fonction
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<1> q1
			Symbol q1_symbol = GecosUserCoreFactory.symbol("q1", GecosUserTypeFactory.ACINT(1, false));
			// ap_uint<1> q2
			Symbol q2_symbol = GecosUserCoreFactory.symbol("q2", GecosUserTypeFactory.ACINT(1, false));
			// ap_uint<1> q3
			Symbol q3_symbol = GecosUserCoreFactory.symbol("q3", GecosUserTypeFactory.ACINT(1, false));
			// ap_uint<1> q4
			Symbol q4_symbol = GecosUserCoreFactory.symbol("q4", GecosUserTypeFactory.ACINT(1, false));
			// ap_uint<2> q21
			Symbol q21_symbol = GecosUserCoreFactory.symbol("q21", GecosUserTypeFactory.ACINT(2, false));
			// ap_uint<2> q43
			Symbol q43_symbol = GecosUserCoreFactory.symbol("q43", GecosUserTypeFactory.ACINT(2, false));
			mainblock.addSymbol(q1_symbol);
			mainblock.addSymbol(q2_symbol);
			mainblock.addSymbol(q3_symbol);
			mainblock.addSymbol(q4_symbol);
			mainblock.addSymbol(q21_symbol);
			mainblock.addSymbol(q43_symbol);
			
			BasicBlock bb = GecosUserBlockFactory.BBlock();
			
			// (d,r_in)
			Instruction[] args_lut_q1 = {GecosUserInstructionFactory.symbref(param_lut_q.get(0)),
					GecosUserInstructionFactory.symbref(param_lut_q.get(1))};
			build_lut_q1(ps); // We need function lut_q1
			// q1 = lut_q1(d,r_in)
			Instruction def_q1 = GecosUserInstructionFactory.set(q1_symbol, GecosUserInstructionFactory.call(ps_lut_q1, args_lut_q1));
			
			// (d,r_in)
			Instruction[] args_lut_q2 = {GecosUserInstructionFactory.symbref(param_lut_q.get(0)),
					GecosUserInstructionFactory.symbref(param_lut_q.get(1))};
			build_lut_q2(ps); // We need function lut_q2
			// q2 = lut_q2(d,r_in)
			Instruction def_q2 = GecosUserInstructionFactory.set(q2_symbol, GecosUserInstructionFactory.call(ps_lut_q2, args_lut_q2));
			
			// (d,r_in)
			Instruction[] args_lut_q3 = {GecosUserInstructionFactory.symbref(param_lut_q.get(0)),
					GecosUserInstructionFactory.symbref(param_lut_q.get(1))};
			build_lut_q3(ps); // We need function lut_q3
			// q3 = lut_q3(d,r_in)
			Instruction def_q3 = GecosUserInstructionFactory.set(q3_symbol, GecosUserInstructionFactory.call(ps_lut_q1, args_lut_q3));
			
			// (d,r_in)
			Instruction[] args_lut_q4 = {GecosUserInstructionFactory.symbref(param_lut_q.get(0)),
					GecosUserInstructionFactory.symbref(param_lut_q.get(1))};
			build_lut_q4(ps); // We need function lut_q4
			// q4 = lut_q4(d,r_in)
			Instruction def_q4 = GecosUserInstructionFactory.set(q4_symbol, GecosUserInstructionFactory.call(ps_lut_q2, args_lut_q4));
			
			// q21 = q2.concat(q1)
			Instruction def_q21 = GecosUserInstructionFactory.set(q21_symbol, GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(q2_symbol), GecosUserInstructionFactory.symbref(q1_symbol)));
			// q43 = q4.concat(q3)
			Instruction def_q43 = GecosUserInstructionFactory.set(q21_symbol, GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(q4_symbol), GecosUserInstructionFactory.symbref(q3_symbol)));
			// return q43.concat(q21)
			Instruction ret = GecosUserInstructionFactory.ret(GecosUserInstructionFactory.methodCallInstruction("concat", 
					GecosUserInstructionFactory.symbref(q43_symbol), GecosUserInstructionFactory.symbref(q21_symbol)));
			
			bb.addInstruction(def_q1);
			bb.addInstruction(def_q2);
			bb.addInstruction(def_q3);
			bb.addInstruction(def_q4);
			bb.addInstruction(def_q21);
			bb.addInstruction(def_q43);
			bb.addInstruction(ret);
			
			
			
			mainblock.addChildren(bb);
			GecosUserCoreFactory.proc(ps, ps_lut_q, mainblock);
		}
		
		return ps_lut_q;
	}

	private static ProcedureSymbol build_lut_div3(ProcedureSet ps)
	// This function provides a function which compute the quotient
	// and remainder of the division by 3 of the input
	// return the symbol of the function
	// This function is used only in this class
	{
		if(ps_lut_div3 == null)
		{
			GecosUserTypeFactory.setScope(ps.getScope()); // We need to define the function if it isn't yet
			
			ArrayList<ParameterSymbol> param_lut_div3 = new ArrayList<ParameterSymbol>();
			// ap_uint <4> d
			param_lut_div3.add(GecosUserCoreFactory.paramSymbol("d", GecosUserTypeFactory.ACINT(4, false)));
			// ap_uint <2> r_in
			param_lut_div3.add(GecosUserCoreFactory.paramSymbol("r_in", GecosUserTypeFactory.ACINT(2, false)));
			// ap_uint <4> * q
			param_lut_div3.add(GecosUserCoreFactory.paramSymbol("q", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(4, false))));
			// ap_uint <2> * r_out
			param_lut_div3.add(GecosUserCoreFactory.paramSymbol("r_out", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(2, false))));
			// void lut_div3(ap_uint <4> d, ap_uint <2> r_in, ap_uint <4> * q, ap_uint <2> * r_out)
			ps_lut_div3 = GecosUserCoreFactory.procSymbol("lut_div3", GecosUserTypeFactory.VOID(), param_lut_div3);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			BasicBlock bb = GecosUserBlockFactory.BBlock();
			
			// (d,r_in)
			Instruction[] args_lut_r = {GecosUserInstructionFactory.symbref(param_lut_div3.get(0)),
					GecosUserInstructionFactory.symbref(param_lut_div3.get(1))};
			build_lut_r(ps); // We need function lut_r
			// *r_out = lut_r(d,r_in)
			Instruction calcul_r_out = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(
			      GecosUserInstructionFactory.symbref(param_lut_div3.get(3))), GecosUserInstructionFactory.call(ps_lut_r, args_lut_r));
			
			// (d,r_in)
			Instruction[] args2 = {GecosUserInstructionFactory.symbref(param_lut_div3.get(0)),
					GecosUserInstructionFactory.symbref(param_lut_div3.get(1))};
			build_lut_q(ps); // We need function lut_q
			// *q = lut_q(D,r_in)
			Instruction calcul_q = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(
				      GecosUserInstructionFactory.symbref(param_lut_div3.get(2))), GecosUserInstructionFactory.call(ps_lut_q, args2));
			
			bb.addInstruction(calcul_q);
			bb.addInstruction(calcul_r_out);			
			
			mainblock.addChildren(bb);
			GecosUserCoreFactory.proc(ps, ps_lut_div3, mainblock);
		}
		
		return ps_lut_div3;
	}

	public static ProcedureSymbol build_int_div3(ProcedureSet ps)
	// This function provides a function which implement an optimized
	// operator for the division by 3 of an int
	// return the symbol of the function
	{
		if(ps_int_div3 == null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_int_div3 = new ArrayList<ParameterSymbol>();
			// int in
			param_int_div3.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.INT()));
			// int int_div3(int in)
			ps_int_div3 = GecosUserCoreFactory.procSymbol("int_div3", GecosUserTypeFactory.INT(), param_int_div3);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(ps_int_div3, "int_div3 implements a division by three of the int in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<4> d_chunk
			Symbol d_chunk_symbol = GecosUserCoreFactory.symbol("d_chunk", GecosUserTypeFactory.ACINT(4, false));
			// ap_uint<4> q_chunk
			Symbol q_chunk_symbol = GecosUserCoreFactory.symbol("q_chunk", GecosUserTypeFactory.ACINT(4, false));
			// ap_uint<2> r
			Symbol r_symbol = GecosUserCoreFactory.symbol("r", GecosUserTypeFactory.ACINT(2, false));
			// ap_uint<32> d
			Symbol d_symbol = GecosUserCoreFactory.symbol("d", GecosUserTypeFactory.ACINT(32, false));
			// ap_uint<32> q
			Symbol q_symbol = GecosUserCoreFactory.symbol("q", GecosUserTypeFactory.ACINT(32, false));
			// int i
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
			Instruction d_in = GecosUserInstructionFactory.set(d_symbol, GecosUserInstructionFactory.symbref(param_int_div3.get(0)));
			bb_init.addInstruction(d_in);
			
			
			// begin for
			// Initialization : i=7
			Instruction i_7 = GecosUserInstructionFactory.set(i_symbol, GecosUserInstructionFactory.Int(7));
			// Condition : i>=0
			Instruction i_ge_0 = GecosUserInstructionFactory.ge(GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(0));
			// Step : i = i-1;
			Instruction i_sub_1 = GecosUserInstructionFactory.set(i_symbol, GecosUserInstructionFactory.sub(
					GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(1)));
			
			BasicBlock for_body_bb = GecosUserBlockFactory.BBlock();
			// #pragma HLS unroll
			GecosUserAnnotationFactory.pragma(for_body_bb, "HLS unroll");
			// i*4
			Instruction i_mult_4 = GecosUserInstructionFactory.mul(GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(4));
			// (i*4+3,i*4)
			Instruction[] args_d_range = {GecosUserInstructionFactory.add(i_mult_4.copy(), GecosUserInstructionFactory.Int(3)), i_mult_4.copy()};
			// d.range(i*4+3,i*4)
			Instruction d_range = GecosUserInstructionFactory.methodCallInstruction("range", 
					GecosUserInstructionFactory.symbref(d_symbol), args_d_range);
			// d_chunk = d.range(i*4+3,i*4)
			Instruction d_chunk_d_range = GecosUserInstructionFactory.set(d_chunk_symbol, d_range);
			for_body_bb.addInstruction(d_chunk_d_range);
			
			// (d_chunk, r, &q_chunk, &r)
			Instruction[] args_lut_div3 = {GecosUserInstructionFactory.symbref(d_chunk_symbol), GecosUserInstructionFactory.symbref(r_symbol),
			              GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(q_chunk_symbol)),
			              GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(r_symbol))};
			build_lut_div3(ps); // on écrit la fonction lut_div3
			// lut_div3(d_chunk, r, &q_chunk, &r)
			Instruction call_lut_div3 = GecosUserInstructionFactory.call(ps_lut_div3, args_lut_div3);
			for_body_bb.addInstruction(call_lut_div3);
			
			// (i*4+3,i*4)
			Instruction[] args_q_range = {GecosUserInstructionFactory.add(i_mult_4.copy(), GecosUserInstructionFactory.Int(3)), i_mult_4.copy()};
			
			Instruction q_range = GecosUserInstructionFactory.methodCallInstruction("range", 
					GecosUserInstructionFactory.symbref(q_symbol), args_q_range);
			// q.range(i*4+3,i*4) = q_chunk
			Instruction q_range_q_chunk = GecosUserInstructionFactory.set(q_range, GecosUserInstructionFactory.symbref(q_chunk_symbol));
			for_body_bb.addInstruction(q_range_q_chunk);
			
			CompositeBlock for_body = GecosUserBlockFactory.CompositeBlock(for_body_bb);		
			ForBlock for_block = GecosUserBlockFactory.For(i_7, i_ge_0, i_sub_1, for_body);	
			// end for
			
			// return q
			BasicBlock return_q = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(q_symbol)));
			
			mainblock.addChildren(bb_init);
			mainblock.addChildren(for_block);
			mainblock.addChildren(return_q);
			GecosUserCoreFactory.proc(ps, ps_int_div3, mainblock);
			File_builder.add_operator(ps_int_div3);
		}
		
		return ps_int_div3;
	}
	
	public static ProcedureSymbol build_long_div3(ProcedureSet ps)
	// This function provides a function which implement an optimized
	// operator for the division by 3 of a long
	// return the symbol of the function
	{
		if(ps_long_div3==null) // We need to define the function if it isn't yet
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_long_div3 = new ArrayList<ParameterSymbol>();
			// long in
			param_long_div3.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.LONG()));
			// long long_div3(long in)
			ps_long_div3 = GecosUserCoreFactory.procSymbol("long_div3", GecosUserTypeFactory.LONG(), param_long_div3);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(ps_long_div3, "long_div3 implements a division by three of the long in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope());
			
			// ap_uint<4> d_chunk
			Symbol d_chunk_symbol = GecosUserCoreFactory.symbol("d_chunk", GecosUserTypeFactory.ACINT(4, false));
			// ap_uint<4> q_chunk
			Symbol q_chunk_symbol = GecosUserCoreFactory.symbol("q_chunk", GecosUserTypeFactory.ACINT(4, false));
			// ap_uint<2> r
			Symbol r_symbol = GecosUserCoreFactory.symbol("r", GecosUserTypeFactory.ACINT(2, false));
			// ap_uint<32> d
			Symbol d_symbol = GecosUserCoreFactory.symbol("d", GecosUserTypeFactory.ACINT(64, false));
			// ap_uint<32> q
			Symbol q_symbol = GecosUserCoreFactory.symbol("q", GecosUserTypeFactory.ACINT(64, false));
			// int i
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
			//d = in
			Instruction d_in = GecosUserInstructionFactory.set(d_symbol, GecosUserInstructionFactory.symbref(param_long_div3.get(0)));
			bb_init.addInstruction(r_0);
			bb_init.addInstruction(d_in);
			
			// begin for
			// Initialization : i=15
			Instruction i_7 = GecosUserInstructionFactory.set(i_symbol, GecosUserInstructionFactory.Int(15));
			// Condition : i>=0
			Instruction i_ge_0 = GecosUserInstructionFactory.ge(GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(0));
			// Step : i = i-1;
			Instruction i_sub_1 = GecosUserInstructionFactory.set(i_symbol, GecosUserInstructionFactory.sub(
					GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(1)));
			
			BasicBlock for_body_bb = GecosUserBlockFactory.BBlock();
			// #pragma HLS unroll
			GecosUserAnnotationFactory.pragma(for_body_bb, "HLS unroll");
			
			// i*4
			Instruction i_mult_4 = GecosUserInstructionFactory.mul(GecosUserInstructionFactory.symbref(i_symbol), GecosUserInstructionFactory.Int(4));
			// (i*4+3,i*4)
			Instruction[] args_d_range = {GecosUserInstructionFactory.add(i_mult_4.copy(), GecosUserInstructionFactory.Int(3)), i_mult_4.copy()};
			// d.range(i*4+3,i*4)
			Instruction d_range = GecosUserInstructionFactory.methodCallInstruction("range", 
					GecosUserInstructionFactory.symbref(d_symbol), args_d_range);
			// d_chunk = d.range(i*4+3,i*4)
			Instruction d_chunk_d_range = GecosUserInstructionFactory.set(d_chunk_symbol, d_range);
			for_body_bb.addInstruction(d_chunk_d_range);
			
			// (d_chunk, r, &q_chunk, &r)
			Instruction[] args_lut_div3 = {GecosUserInstructionFactory.symbref(d_chunk_symbol), GecosUserInstructionFactory.symbref(r_symbol),
			              GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(q_chunk_symbol)),
			              GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(r_symbol))};
			build_lut_div3(ps); // on écrit la fonction lut_div3
			// lut_div3(d_chunk, r, &q_chunk, &r)
			Instruction call_lut_div3 = GecosUserInstructionFactory.call(ps_lut_div3, args_lut_div3);
			for_body_bb.addInstruction(call_lut_div3);
			
			// (i*4+3,i*4)
			Instruction[] args_q_range = {GecosUserInstructionFactory.add(i_mult_4.copy(), GecosUserInstructionFactory.Int(3)), i_mult_4.copy()};
			
			Instruction q_range = GecosUserInstructionFactory.methodCallInstruction("range", 
					GecosUserInstructionFactory.symbref(q_symbol), args_q_range);
			// q.range(i*4+3,i*4) = q_chunk
			Instruction q_range_q_chunk = GecosUserInstructionFactory.set(q_range, GecosUserInstructionFactory.symbref(q_chunk_symbol));
			for_body_bb.addInstruction(q_range_q_chunk);
			
			CompositeBlock for_body = GecosUserBlockFactory.CompositeBlock(for_body_bb);		
			ForBlock for_block = GecosUserBlockFactory.For(i_7, i_ge_0, i_sub_1, for_body);	
			// end for
			
			// return q;
			BasicBlock return_q = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(q_symbol)));
			
			mainblock.addChildren(bb_init);
			mainblock.addChildren(for_block);
			mainblock.addChildren(return_q);
			GecosUserCoreFactory.proc(ps, ps_long_div3, mainblock);
			File_builder.add_operator(ps_long_div3);
		}
		
		return ps_long_div3;
	}

	public static ProcedureSymbol build_float_div3(ProcedureSet ps)
	// This function provides a function which implement an optimized
	// operator for the division by 3 of a float
	// return the symbol of the function
	{
		if(ps_float_div3 == null) { // We need to define the function if it isn't yet
			
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_float_div3 = new ArrayList<ParameterSymbol>();
			// float in
			param_float_div3.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.FLOAT()));
			// float float_div3(float in)
			ps_float_div3 = GecosUserCoreFactory.procSymbol("float_div3", GecosUserTypeFactory.FLOAT(), param_float_div3);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(ps_float_div3, "float_div3 implements a division by three of the float in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope()); 
			
			// Variable definition
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
			// ap_uint<32> xf
			Symbol xf_symbol = GecosUserCoreFactory.symbol("xf", GecosUserTypeFactory.ACINT(32, false));
			// float out
			Symbol out_symbol = GecosUserCoreFactory.symbol("out", GecosUserTypeFactory.FLOAT());
			
			mainblock.addSymbol(s_symbol);
			mainblock.addSymbol(exp_symbol);
			mainblock.addSymbol(mant_symbol);
			mainblock.addSymbol(new_exp_symbol);
			mainblock.addSymbol(new_mant_symbol);
			mainblock.addSymbol(xf_symbol);
			mainblock.addSymbol(out_symbol);
			
			BasicBlock bb_decompose = GecosUserBlockFactory.BBlock();
			
			// (in, &s, &exp, &mant)
			Instruction[] args_decomposition = {GecosUserInstructionFactory.symbref(param_float_div3.get(0)),
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
			// exp != 255
			Instruction exp_diff_255 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(255));
			// exp != 0
			Instruction exp_diff_0 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(0));
			// exp != 255 & exp != 0
			Instruction cond_if_exp = GecosUserInstructionFactory.and(exp_diff_255, exp_diff_0);
			
			// begin then if_exp
			// begin if_exp_intern
			// mant[22]
			Instruction mant_22 = GecosUserInstructionFactory.array(mant_symbol, GecosUserInstructionFactory.Int(22));
			// exp == 1
			Instruction exp_eq_1 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(1));
			// mant[22] | exp==1
			Instruction cond_if_exp_intern = GecosUserInstructionFactory.or(mant_22, exp_eq_1);
			
			// then if_exp_intern
			// new_exp = exp-1;
			BasicBlock then_exp_sub_1 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, 
			         GecosUserInstructionFactory.sub(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(1))));
			
			// else if_exp_intern
			// new_exp = exp-2
			BasicBlock else_exp_sub_2 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, 
			         GecosUserInstructionFactory.sub(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(2))));
			IfBlock if_exp_intern = GecosUserBlockFactory.IfThenElse(cond_if_exp_intern, then_exp_sub_1, else_exp_sub_2);
			// end if_exp_intern
			// end then if_exp
			
			IfBlock if_exp = GecosUserBlockFactory.IfThen(cond_if_exp, if_exp_intern);
			// end if_exp
			
			
			// begin if_mant
			// condition instruction : exp != 255
			// exp_diff_255.copy()
			
			// begin then block if_mant
			
			// begin if_xf_set_23
			// condition instruction : exp != 0
			// exp_diff_0.copy()
			// then if_xf_set_23
			// xf.set(23);
			BasicBlock xf_set_23 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.methodCallInstruction("set",
			                       GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(23)));
			// if(exp!=0) xf.set(23)
			IfBlock if_xf_set_23 = GecosUserBlockFactory.IfThen(exp_diff_0.copy(), xf_set_23);
			// end if_xf_set_23
			
			// begin if_else_shift
			// condition instruction :
			// exp != 1
			Instruction exp_diff_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(1));
			// exp == 1
			Instruction exp_eg_2 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(2));
			// (mant[22] || exp==2) && exp != 0 && exp!=1
			Instruction cond_if_else_shift = GecosUserInstructionFactory.and(GecosUserInstructionFactory.and(
			                        GecosUserInstructionFactory.or(mant_22.copy(), exp_eg_2),exp_diff_0.copy()), exp_diff_1);
			// then if_else_shift
			// xf = xf << 1
			BasicBlock xf_shift_1 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.shl(
			                      GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(1))));
			
			// begin else if_else_shift
			// begin if_shift_2
			// condition instruction :
			// exp!=0 && exp!=1
			Instruction cond_shift_2 = GecosUserInstructionFactory.and(exp_diff_0.copy(), exp_diff_1.copy());
			
			// then if_shift_2
			// xf = xf << 2
			BasicBlock xf_shift_2 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.shl(
                    GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(2))));
			// if(exp!=0 && exp!=1) xf = xf << 2;
			IfBlock if_shift_2 = GecosUserBlockFactory.IfThen(cond_shift_2, xf_shift_2);
			// end if_shift_2
			
			// if((mant[22] || exp==2) && exp != 0 && exp!=1) xf = xf << 1;
			// else if(exp!=0 && exp!=1) xf = xf << 2;
			IfBlock if_else_shift = GecosUserBlockFactory.IfThenElse(cond_if_else_shift, xf_shift_1, if_shift_2);
			// end if_else_shift
			
			BasicBlock xf_add_1_div_3 = GecosUserBlockFactory.BBlock();
			// xf = xf + 1
			Instruction xf_add_1 = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.add(
			                       GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(1)));
			xf_add_1_div_3.addInstruction(xf_add_1);
			
			// (xf)
			Instruction[] args_int_div3 = {GecosUserInstructionFactory.symbref(xf_symbol)};
			// int_div3(xf,&xf)
			build_int_div3(ps);
			Instruction xf_div3 = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.call(ps_int_div3, args_int_div3));
			xf_add_1_div_3.addInstruction(xf_div3);
			
			// (23,0)
			Instruction[] args_xf_range = {GecosUserInstructionFactory.Int(22), GecosUserInstructionFactory.Int(0)};
			// new_mant = xf.range(23,0);
			Instruction new_mant_xf_range = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(new_mant_symbol), 
			           GecosUserInstructionFactory.methodCallInstruction("range", GecosUserInstructionFactory.symbref(xf_symbol), args_xf_range));
			xf_add_1_div_3.addInstruction(new_mant_xf_range);
			// end then if_mant
			
			CompositeBlock body_if_mant = GecosUserBlockFactory.CompositeBlock();
			body_if_mant.addChildren(if_xf_set_23);
			body_if_mant.addChildren(if_else_shift);
			body_if_mant.addChildren(xf_add_1_div_3);
			
			IfBlock if_mant = GecosUserBlockFactory.IfThen(exp_diff_255.copy(), body_if_mant);
			// end if_mant
			

			BasicBlock bb_rebuild = GecosUserBlockFactory.BBlock();
			// (s, exp, mant, &out)
			Instruction[] args_recomposition = {GecosUserInstructionFactory.symbref(s_symbol),
			                       GecosUserInstructionFactory.symbref(new_exp_symbol),
			                       GecosUserInstructionFactory.symbref(new_mant_symbol),
			                       GecosUserInstructionFactory.address(GecosUserInstructionFactory.symbref(out_symbol))};
			ProcedureSymbol rebuild = Float_fix.build_rebuild_float(ps);
			// rebuild_float(s, exp, mant, &out)
			Instruction rebuild_call = GecosUserInstructionFactory.call(rebuild, args_recomposition);
			bb_rebuild.addInstruction(rebuild_call);
			
			// return out;
			Instruction ret_out = GecosUserInstructionFactory.ret(GecosUserInstructionFactory.symbref(out_symbol));
			bb_rebuild.addInstruction(ret_out);
			

			mainblock.addChildren(bb_decompose);
			mainblock.addChildren(if_exp);
			mainblock.addChildren(if_mant);
			mainblock.addChildren(bb_rebuild);
			

			GecosUserCoreFactory.proc(ps, ps_float_div3, mainblock);
			File_builder.add_operator(ps_float_div3);
		}		
		
		return ps_float_div3;
	}

	public static ProcedureSymbol build_double_div3(ProcedureSet ps)
	// This function provides a function which implement an optimized
	// operator for the division by 3 of a float
	// return the symbol of the function
	{
		if(ps_double_div3 == null) {
			GecosUserTypeFactory.setScope(ps.getScope()); // We need to define the function if it isn't yet
			
			// Parameter definition
			ArrayList<ParameterSymbol> param_double_div3 = new ArrayList<ParameterSymbol>();
			// double in
			param_double_div3.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.DOUBLE()));
			// double double_div3(double in)
			ps_double_div3 = GecosUserCoreFactory.procSymbol("double_div3", GecosUserTypeFactory.DOUBLE(), param_double_div3);
			
			// add a comment which describes the function
			GecosUserAnnotationFactory.comment(ps_double_div3, "double_div3 implements a division by three of the double in, optimized for Vivado HLS");
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();
			GecosUserTypeFactory.setScope(mainblock.getScope()); 
			
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
			// ap_uint<32> xf
			Symbol xf_symbol = GecosUserCoreFactory.symbol("xf", GecosUserTypeFactory.ACINT(32, false));
			// double out
			Symbol out_symbol = GecosUserCoreFactory.symbol("out", GecosUserTypeFactory.DOUBLE());
			
			mainblock.addSymbol(s_symbol);
			mainblock.addSymbol(exp_symbol);
			mainblock.addSymbol(mant_symbol);
			mainblock.addSymbol(new_exp_symbol);
			mainblock.addSymbol(new_mant_symbol);
			mainblock.addSymbol(xf_symbol);
			mainblock.addSymbol(out_symbol);
			
			BasicBlock bb_decompose = GecosUserBlockFactory.BBlock();
			// (in, &s, &exp, &mant)
			Instruction[] args_decomposition = {GecosUserInstructionFactory.symbref(param_double_div3.get(0)),
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
			Instruction exp_diff_2_pow_11_min_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(Calcul.pow2(11)-1));
			// exp != 0
			Instruction exp_diff_0 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(0));
			// exp != 255 & exp != 0
			Instruction cond_if_exp = GecosUserInstructionFactory.and(exp_diff_2_pow_11_min_1, exp_diff_0);
			
			// begin then if_exp
			// begin if_exp_intern
			// condition instruction
			// mant[51]
			Instruction mant_51 = GecosUserInstructionFactory.array(mant_symbol, GecosUserInstructionFactory.Int(51));
			// exp == 1
			Instruction exp_eq_1 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(1));
			// mant[51] | exp==1
			Instruction cond_if_exp_intern = GecosUserInstructionFactory.or(mant_51, exp_eq_1);
			
			// then if_exp_intern
			// new_exp = exp-1;
			BasicBlock then_exp_sub_1 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, 
			         GecosUserInstructionFactory.sub(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(1))));
			
			// else if_exp_intern
			// new_exp = exp-2
			BasicBlock else_exp_sub_2 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(new_exp_symbol, 
			         GecosUserInstructionFactory.sub(GecosUserInstructionFactory.symbref(exp_symbol), GecosUserInstructionFactory.Int(2))));
			IfBlock if_exp_intern = GecosUserBlockFactory.IfThenElse(cond_if_exp_intern, then_exp_sub_1, else_exp_sub_2);
			// end if_exp_intern
			// end then if_exp
			IfBlock if_exp = GecosUserBlockFactory.IfThen(cond_if_exp, if_exp_intern);
			//end if_exp
			
			
			// begin if_mant
			// condition instruction : exp != 2^11-1
			// exp_diff_2_pow_11_min_1.copy()
			
			// begin then if_mant
			
			// begin if_xf_set_52
			// condition instruction : exp_diff_0
			// exp_diff_0.copy()
			// then if_xf_set_53
			// xf.set(52);
			BasicBlock xf_set_52 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.methodCallInstruction("set",
			                       GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(52)));
			// if(exp!=0) xf.set(53)
			IfBlock if_xf_set_52 = GecosUserBlockFactory.IfThen(exp_diff_0.copy(), xf_set_52);
			// end if_xf_set_52
			
			// begin if_else_shift
			// condition d'utilisation
			// exp != 1
			Instruction exp_diff_1 = GecosUserInstructionFactory.ne(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(1));
			// exp == 1
			Instruction exp_eg_2 = GecosUserInstructionFactory.eq(GecosUserInstructionFactory.symbref(exp_symbol), 
			                       GecosUserInstructionFactory.Int(2));
			// (mant[22] || exp==2) && exp != 0 && exp!=1
			Instruction cond_if_else_shift = GecosUserInstructionFactory.and(GecosUserInstructionFactory.and(
			                        GecosUserInstructionFactory.or(mant_51.copy(), exp_eg_2),exp_diff_0.copy()), exp_diff_1);
			// then if_else_shift
			// xf = xf << 1
			BasicBlock xf_shift_1 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.shl(
			                      GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(1))));
			// else if_else_shift
			// begin if_shift_2
			// conditions instruction :
			// exp!=0 && exp!=1
			Instruction cond_shift_2 = GecosUserInstructionFactory.and(exp_diff_0.copy(), exp_diff_1.copy());
			
			// then if_shift_2
			// xf = xf << 2
			BasicBlock xf_shift_2 = GecosUserBlockFactory.BBlock(GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.shl(
                    GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(2))));
			// if(exp!=0 && exp!=1) xf = xf << 2;
			IfBlock if_shift_2 = GecosUserBlockFactory.IfThen(cond_shift_2, xf_shift_2);
			// end if_shift_2
			
			// if((mant[22] || exp==2) && exp != 0 && exp!=1) xf = xf << 1;
			// else if(exp!=0 && exp!=1) xf = xf << 2;
			IfBlock if_else_shift = GecosUserBlockFactory.IfThenElse(cond_if_else_shift, xf_shift_1, if_shift_2);
			// end if_else_shift
			
			BasicBlock xf_add_1_div_3 = GecosUserBlockFactory.BBlock();
			// xf = xf + 1
			Instruction xf_add_1 = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.add(
			                       GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(1)));
			xf_add_1_div_3.addInstruction(xf_add_1);
			// (xf)
			Instruction[] args_long_div3 = {GecosUserInstructionFactory.symbref(xf_symbol)};
			// xf = long_div3(xf)
			build_long_div3(ps);
			Instruction xf_div3 = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.call(ps_long_div3, args_long_div3));
			xf_add_1_div_3.addInstruction(xf_div3);
			
			// new_mant = xf.range(51,0);
			Instruction[] args_xf_range = {GecosUserInstructionFactory.Int(51), GecosUserInstructionFactory.Int(0)};
			Instruction new_mant_xf_range = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(new_mant_symbol), 
			           GecosUserInstructionFactory.methodCallInstruction("range", GecosUserInstructionFactory.symbref(xf_symbol), args_xf_range));
			xf_add_1_div_3.addInstruction(new_mant_xf_range);
			
			CompositeBlock body_if_mant = GecosUserBlockFactory.CompositeBlock();
			body_if_mant.addChildren(if_xf_set_52);
			body_if_mant.addChildren(if_else_shift);
			body_if_mant.addChildren(xf_add_1_div_3);
			
			IfBlock if_mant = GecosUserBlockFactory.IfThen(exp_diff_2_pow_11_min_1.copy(), body_if_mant);
			// end if_mant
			
			
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
			mainblock.addChildren(bb_rebuild);
			

			GecosUserCoreFactory.proc(ps, ps_double_div3, mainblock);
			File_builder.add_operator(ps_double_div3);
		}		
		
		return ps_double_div3;
	}

}
