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
	
	private static Map<Integer, ProcedureSymbol> builded_float_divider = new TreeMap<Integer,ProcedureSymbol>();
	private static Map<Integer, ProcedureSymbol> builded_double_divider = new TreeMap<Integer,ProcedureSymbol>();
	
	
	public static ProcedureSymbol build_float_mul_by_constant(ProcedureSet ps, int mul, boolean is_double)
	// This function provides a function which implement an optimized
	// operator for the division by 3 of a float
	// return the symbol of the function
	{
		if((!builded_float_divider.containsKey(mul) & !is_double) | (!builded_double_divider.containsKey(mul) & is_double)) 
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
			Symbol clz_symbol = GecosUserCoreFactory.symbol("clz", GecosUserTypeFactory.ACINT(Calcul.log2(size_xf)+1, false));
			// ap_uint<8> new_exp
			Symbol mul_exp_symbol = GecosUserCoreFactory.symbol("div_exp", GecosUserTypeFactory.ACINT(size_exp, false));
			
			mainblock2.addSymbol(s_symbol);
			mainblock2.addSymbol(exp_symbol);
			mainblock2.addSymbol(mant_symbol);
			mainblock2.addSymbol(new_exp_symbol);
			mainblock2.addSymbol(new_mant_symbol);
			mainblock2.addSymbol(xf_symbol);
			mainblock2.addSymbol(out_symbol);
			mainblock2.addSymbol(clz_symbol);
			mainblock2.addSymbol(mul_exp_symbol);
			
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
			
			Instruction xf_mant_times_mul = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.mul(
					GecosUserInstructionFactory.symbref(mant_symbol), GecosUserInstructionFactory.Int(mul)));
			BasicBlock subnorm_bb = GecosUserBlockFactory.BBlock(xf_mant_times_mul);
			
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
			
			Instruction xf_set_xf_times_mul = GecosUserInstructionFactory.set(xf_symbol, GecosUserInstructionFactory.mul(
					GecosUserInstructionFactory.symbref(xf_symbol), GecosUserInstructionFactory.Int(mul)));
			mant_compute.addInstruction(xf_set_xf_times_mul);
			
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
			mainblock2.addBlock(bb_decompose);
			mainblock2.addBlock(if_mant_lt_div_mant);
			mainblock2.addBlock(if_computing);
			mainblock2.addBlock(bb_rebuild);
			
			mainblock.addBlock(mainblock2);

			GecosUserCoreFactory.proc(ps, proc_symbol, mainblock);
			File_builder.add_operator(proc_symbol);	
						
			if(is_double)
			{
				builded_double_divider.put(mul, proc_symbol);
			}
			else
			{
				builded_float_divider.put(mul, proc_symbol);
			}
		}
		if(is_double)
		{
			return builded_double_divider.get(mul);
		}
		else
		{
			return builded_float_divider.get(mul);
		}
	}
	
	
}


