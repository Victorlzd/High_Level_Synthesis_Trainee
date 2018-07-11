package util;

import java.util.ArrayList;

import fr.irisa.cairn.gecos.model.factory.GecosUserBlockFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserCoreFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserInstructionFactory;
import fr.irisa.cairn.gecos.model.factory.GecosUserTypeFactory;
import gecos.blocks.BasicBlock;
import gecos.blocks.CompositeBlock;
import gecos.core.ParameterSymbol;
import gecos.core.ProcedureSet;
import gecos.core.ProcedureSymbol;
import gecos.core.Symbol;
import gecos.instrs.Instruction;
import gecos.instrs.SetInstruction;
import gecos.types.Field;
import gecos.types.RecordType;
import gecos.types.Type;

public class Float_fix {
	/* This class provides functions which permit conversions between
	 * floating point types (float,double) and their representation in
	 * arbitrary size types with the three parts (sign, exponent, mantissa)
	 */
	
	private static ProcedureSymbol ps_decompose_float = null;
	private static ProcedureSymbol ps_rebuild_float = null;
	private static ProcedureSymbol ps_decompose_double = null;
	private static ProcedureSymbol ps_rebuild_double = null;
	
	// the type fix_to_float is a union of float and unsigned int
	// it is needed for the conversion between float and arbitrary
	// size type
	private static Type fix_to_float = null;
	private static Field[] fields_fix_to_float = new Field[2];
	
	// the type fix_to_double is a union of double and unsigned long
	// it is needed for the conversion between double and arbitrary
	// size type
	private static Type fix_to_double = null;
	private static Field[] fields_fix_to_double = new Field[2];
	
	private static void build_fix_to_float(ProcedureSet ps)
	// This function defines the type fix_to_float
	// The type fix_to_float is used only by this class that's why
	// this function is private
	{
		if(fix_to_float == null) 
		// We need to build it only if it hasn't been builded before
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// field float f
			fields_fix_to_float[0] = GecosUserTypeFactory.FIELD("f", GecosUserTypeFactory.FLOAT());
			// field unsigned int i
			fields_fix_to_float[1] = GecosUserTypeFactory.FIELD("i", GecosUserTypeFactory.UINT()); 
			
			// union fix_to_float {float f; unsigned int i;}
			RecordType fix_to_float_first = GecosUserTypeFactory.UNION("fix_to_float", fields_fix_to_float); 

			// typedef union fix_to_float fix_to_float
			fix_to_float = GecosUserTypeFactory.ALIAS(fix_to_float_first, "fix_to_float");
		}
	}
	
	public static ProcedureSymbol build_decompose_float(ProcedureSet ps)
	// This function defines a function which decompose a float in its three parts
	// (sign, exponent, mantissa) stocked in arbitrary sized types
	// return the symbol of the procedure
	{
		if(ps_decompose_float == null)
		// We need to build it only if it hasn't been builded before
		{
			build_fix_to_float(ps); // we need the type fix_to_float

			// parameter definition
			ArrayList<ParameterSymbol> param_decompose_float = new ArrayList<ParameterSymbol>();
			// float in
			param_decompose_float.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.FLOAT()));
			// ap_uint<1> *s
			param_decompose_float.add(GecosUserCoreFactory.paramSymbol("s", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(1, false))));
			// ap_uint<8> *exp
			param_decompose_float.add(GecosUserCoreFactory.paramSymbol("exp", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(8, false))));
			// ap_uint<23> *mant
			param_decompose_float.add(GecosUserCoreFactory.paramSymbol("mant", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(23, false))));
			// void decompose_float(float in, ap_uint<1> *s, ap_uint<8> *exp, ap_uint<23> *mant)
			ps_decompose_float = GecosUserCoreFactory.procSymbol("decompose_float", GecosUserTypeFactory.VOID(), param_decompose_float);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();// body of the function
			GecosUserTypeFactory.setScope(mainblock.getScope()); // Changing scope
			
			// variable definition
			// fix_to_float conv;
			Symbol conv_symbol = GecosUserCoreFactory.symbol("conv", fix_to_float);
			// ap_uint<32> in_bits;
			Symbol in_bits_symbol = GecosUserCoreFactory.symbol("in_bits", GecosUserTypeFactory.ACINT(32, false));
			mainblock.addSymbol(conv_symbol);
			mainblock.addSymbol(in_bits_symbol);
			
			// Instruction conv.f = in;
			SetInstruction conv_f_in = GecosUserInstructionFactory.set(
			                           GecosUserInstructionFactory.field(GecosUserInstructionFactory.symbref(conv_symbol),fields_fix_to_float[0]),
			                           GecosUserInstructionFactory.symbref(param_decompose_float.get(0)));
			BasicBlock bb = GecosUserBlockFactory.BBlock(conv_f_in);
			
			// Instruction in_bits = conv.i;
			SetInstruction in_bits_conv_i = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(in_bits_symbol),
			                                GecosUserInstructionFactory.field(GecosUserInstructionFactory.symbref(conv_symbol),fields_fix_to_float[1]));
			bb.addInstruction(in_bits_conv_i);
			
			// Instruction *s = in_bits[31];
			SetInstruction s_in_bits = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(GecosUserInstructionFactory.symbref(
			             param_decompose_float.get(1))), GecosUserInstructionFactory.array(in_bits_symbol, GecosUserInstructionFactory.Int(31)));
			bb.addInstruction(s_in_bits);
			
			//Instruction *exp = in_bits.range(30,23);
			Instruction[] args_range_exp = {GecosUserInstructionFactory.Int(30),GecosUserInstructionFactory.Int(23)};
			SetInstruction exp_in_bits = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(GecosUserInstructionFactory.symbref(
			                             param_decompose_float.get(2))), GecosUserInstructionFactory.methodCallInstruction("range",
			                             GecosUserInstructionFactory.symbref(in_bits_symbol), args_range_exp));
			bb.addInstruction(exp_in_bits);
			
			//Instruction *mant = in_bits.range(22,0);
			Instruction[] args_range_mant = {GecosUserInstructionFactory.Int(22),GecosUserInstructionFactory.Int(0)};
			SetInstruction mant_in_bits = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(GecosUserInstructionFactory.symbref(
			                              param_decompose_float.get(3))), GecosUserInstructionFactory.methodCallInstruction("range",
			                              GecosUserInstructionFactory.symbref(in_bits_symbol), args_range_mant));
			bb.addInstruction(mant_in_bits);
			
			
			mainblock.addChildren(bb);
			GecosUserCoreFactory.proc(ps, ps_decompose_float, mainblock);
		}
		
		return ps_decompose_float;
	}
	
	public static ProcedureSymbol build_rebuild_float(ProcedureSet ps)
	// This function defines a function which rebuild a float from its three parts
	// (sign, exponent, mantissa) stocked in arbitrary sized types
	// return the symbol of the procedure
	{
		if(ps_rebuild_float == null)
		// We need to build it only if it hasn't been builded before
		{
			build_fix_to_float(ps); // We need type fix_to_float
			
			// parameter definition
			ArrayList<ParameterSymbol> param_rebuild_float = new ArrayList<ParameterSymbol>();
			// ap_uint<1> s
			param_rebuild_float.add(GecosUserCoreFactory.paramSymbol("s", GecosUserTypeFactory.ACINT(1, false)));
			// ap_uint<8> exp
			param_rebuild_float.add(GecosUserCoreFactory.paramSymbol("exp", GecosUserTypeFactory.ACINT(8, false)));
			// ap_uint<23> mant
			param_rebuild_float.add(GecosUserCoreFactory.paramSymbol("mant", GecosUserTypeFactory.ACINT(23, false)));
			// float * out
			param_rebuild_float.add(GecosUserCoreFactory.paramSymbol("out", GecosUserTypeFactory.PTR(GecosUserTypeFactory.FLOAT())));
			// void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out)
			ps_rebuild_float = GecosUserCoreFactory.procSymbol("rebuild_float", GecosUserTypeFactory.VOID(), param_rebuild_float);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();// body of the function
			GecosUserTypeFactory.setScope(mainblock.getScope()); // Changing scope
			
			// variables definition
			// fix_to_float conv
			Symbol conv_symbol = GecosUserCoreFactory.symbol("conv", fix_to_float);
			// ap_uint<31> exp_plus_mant
			Symbol exp_plus_mant_symbol = GecosUserCoreFactory.symbol("exp_plus_mant", GecosUserTypeFactory.ACINT(31, false));
			// ap_uint<32> res
			Symbol res_symbol = GecosUserCoreFactory.symbol("res", GecosUserTypeFactory.ACINT(32, false));
			mainblock.addSymbol(conv_symbol);
			mainblock.addSymbol(exp_plus_mant_symbol);
			mainblock.addSymbol(res_symbol);
			
			
			BasicBlock bb = GecosUserBlockFactory.BBlock();
			//Instruction exp_plus_mant = exp.concat(mant);
			Instruction[] args_concat_exp_mant = {GecosUserInstructionFactory.symbref(param_rebuild_float.get(2))};
			SetInstruction concat_exp_mant = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(exp_plus_mant_symbol), GecosUserInstructionFactory.methodCallInstruction("concat",
			                         GecosUserInstructionFactory.symbref(param_rebuild_float.get(1)), args_concat_exp_mant));
			bb.addInstruction(concat_exp_mant);
			
			//Instruction res = s.concat(exp_plus_mant);
			Instruction[] args_concat_s_exp_plus_mant = {GecosUserInstructionFactory.symbref(exp_plus_mant_symbol)};
			SetInstruction concat_s_exp_plus_mant = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(res_symbol), GecosUserInstructionFactory.methodCallInstruction("concat",
		 	               GecosUserInstructionFactory.symbref(param_rebuild_float.get(0)), args_concat_s_exp_plus_mant));
			bb.addInstruction(concat_s_exp_plus_mant);
			
			// Instruction conv.i = res;
			SetInstruction conv_i_res = GecosUserInstructionFactory.set(
			        GecosUserInstructionFactory.field(GecosUserInstructionFactory.symbref(conv_symbol),fields_fix_to_float[1]),
			        GecosUserInstructionFactory.symbref(res_symbol));
			bb.addInstruction(conv_i_res);
			
			// Instruction *out = conv.f;
			SetInstruction out_conv_f = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(
			        GecosUserInstructionFactory.symbref(param_rebuild_float.get(3))),
			        GecosUserInstructionFactory.field(GecosUserInstructionFactory.symbref(conv_symbol),fields_fix_to_float[0]));
			bb.addInstruction(out_conv_f);
			
			mainblock.addChildren(bb);
			GecosUserCoreFactory.proc(ps, ps_rebuild_float, mainblock);
		}
		return ps_rebuild_float;
	}
		
	private static void build_fix_to_double(ProcedureSet ps)
	// This function defines the type fix_to_double
	// The type fix_to_double is used only by this class that's why
	// this function is private
	{
		if(fix_to_double == null)
		// We need to build it only if it hasn't been builded before
		{
			GecosUserTypeFactory.setScope(ps.getScope());
			
			// field double d;
			fields_fix_to_double[0] = GecosUserTypeFactory.FIELD("d", GecosUserTypeFactory.DOUBLE());
			// field unsigned long l;
			fields_fix_to_double[1] = GecosUserTypeFactory.FIELD("l", GecosUserTypeFactory.ULONG());
			
			// union fix_to_double {double d; unsigned long l;}
			RecordType union_fix_to_double = GecosUserTypeFactory.UNION("fix_to_double", fields_fix_to_double); 
			// typedef union fix_to_double fix_to_double
			fix_to_double = GecosUserTypeFactory.ALIAS(union_fix_to_double, "fix_to_double");
		}
	}
	
	public static ProcedureSymbol build_decompose_double(ProcedureSet ps)
	// This function defines a function which decompose a double in its three parts
	// (sign, exponent, mantissa) stocked in arbitrary sized types
	// return the symbol of the procedure
	{
		if(ps_decompose_double==null)
		// We need to build it only if it hasn't been builded before
		{
			build_fix_to_double(ps); // We need fix_to_double type

			// parameter definition
			ArrayList<ParameterSymbol> param_decompose_double = new ArrayList<ParameterSymbol>();
			// double in
			param_decompose_double.add(GecosUserCoreFactory.paramSymbol("in", GecosUserTypeFactory.DOUBLE()));
			// ap_uint * s<1>
			param_decompose_double.add(GecosUserCoreFactory.paramSymbol("s", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(1, false))));
			// ap_uint * exp<11>
			param_decompose_double.add(GecosUserCoreFactory.paramSymbol("exp", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(11, false))));
			// ap_uint * mant<52>
			param_decompose_double.add(GecosUserCoreFactory.paramSymbol("mant", GecosUserTypeFactory.PTR(GecosUserTypeFactory.ACINT(52, false))));
			// void decompose_double(double in, ap_uint * s<1>, ap_uint * exp<11>, ap_uint * mant<52>)
			ps_decompose_double = GecosUserCoreFactory.procSymbol("decompose_double", GecosUserTypeFactory.VOID(), param_decompose_double);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();// body of the function
			GecosUserTypeFactory.setScope(mainblock.getScope()); // Changing scope
			
			// Variables definition
			// fix_to_double conv
			Symbol conv_symbol = GecosUserCoreFactory.symbol("conv", fix_to_double);
			// ap_uint<64> in_bits
			Symbol in_bits_symbol = GecosUserCoreFactory.symbol("in_bits", GecosUserTypeFactory.ACINT(64, false));
			
			mainblock.addSymbol(conv_symbol);
			mainblock.addSymbol(in_bits_symbol);
			
			// Instruction conv.f = in;
			SetInstruction conv_f_in = GecosUserInstructionFactory.set(
			                           GecosUserInstructionFactory.field(GecosUserInstructionFactory.symbref(conv_symbol),fields_fix_to_double[0]),
			                           GecosUserInstructionFactory.symbref(param_decompose_double.get(0)));
			BasicBlock bb = GecosUserBlockFactory.BBlock(conv_f_in);
			
			// Instruction in_bits = conv.i;
			SetInstruction in_bits_conv_i = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(in_bits_symbol),
			                                GecosUserInstructionFactory.field(GecosUserInstructionFactory.symbref(conv_symbol),fields_fix_to_double[1]));
			bb.addInstruction(in_bits_conv_i);
			
			// Instruction *s = in_bits[63];
			SetInstruction s_in_bits = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(GecosUserInstructionFactory.symbref(
			             param_decompose_double.get(1))), GecosUserInstructionFactory.array(in_bits_symbol, GecosUserInstructionFactory.Int(63)));
			bb.addInstruction(s_in_bits);
			//Instruction *exp = in_bits.range(62,52);
			Instruction[] args_range_exp = {GecosUserInstructionFactory.Int(62),GecosUserInstructionFactory.Int(52)};
			SetInstruction exp_in_bits = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(GecosUserInstructionFactory.symbref(
			                             param_decompose_double.get(2))), GecosUserInstructionFactory.methodCallInstruction("range",
			                             GecosUserInstructionFactory.symbref(in_bits_symbol), args_range_exp));
			bb.addInstruction(exp_in_bits);
			
			//Instruction *mant = in_bits.range(51,0);
			Instruction[] args_range_mant = {GecosUserInstructionFactory.Int(51),GecosUserInstructionFactory.Int(0)};
			SetInstruction mant_in_bits = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(GecosUserInstructionFactory.symbref(
			                              param_decompose_double.get(3))), GecosUserInstructionFactory.methodCallInstruction("range",
			                              GecosUserInstructionFactory.symbref(in_bits_symbol), args_range_mant));
			bb.addInstruction(mant_in_bits);
			
			
			mainblock.addChildren(bb);
			GecosUserCoreFactory.proc(ps, ps_decompose_double, mainblock);
		}
		return ps_decompose_double;
	}
	
	public static ProcedureSymbol build_rebuild_double(ProcedureSet ps)
	// This function defines a function which rebuild a double from its three parts
	// (sign, exponent, mantissa) stocked in arbitrary sized types
	// return the symbol of the procedure
	{
		if(ps_rebuild_double == null)
		// We need to build it only if it hasn't been builded before
		{
			build_fix_to_double(ps);

			// Creation de la procédure decompose_double
			// définition des paramètres
			ArrayList<ParameterSymbol> param_rebuild_double = new ArrayList<ParameterSymbol>();
			// ap_uint<1> s
			param_rebuild_double.add(GecosUserCoreFactory.paramSymbol("s", GecosUserTypeFactory.ACINT(1, false)));
			// ap_uint<11> exp
			param_rebuild_double.add(GecosUserCoreFactory.paramSymbol("exp", GecosUserTypeFactory.ACINT(11, false)));
			// ap_uint<52> mant
			param_rebuild_double.add(GecosUserCoreFactory.paramSymbol("mant", GecosUserTypeFactory.ACINT(52, false)));
			// double * out
			param_rebuild_double.add(GecosUserCoreFactory.paramSymbol("out", GecosUserTypeFactory.PTR(GecosUserTypeFactory.DOUBLE())));
			// void rebuild_double(ap_uint<1> s, ap_uint<11> exp, ap_uint<52> mant, double * out)
			ps_rebuild_double = GecosUserCoreFactory.procSymbol("rebuild_double", GecosUserTypeFactory.VOID(), param_rebuild_double);
			
			CompositeBlock mainblock = GecosUserBlockFactory.CompositeBlock();// body of the function
			GecosUserTypeFactory.setScope(mainblock.getScope()); // Changing scope
			
			// Variables definition
			// fix_to_double conv;
			Symbol conv_symbol = GecosUserCoreFactory.symbol("conv", fix_to_double);
			// ap_uint<63> exp_plus_mant;
			Symbol exp_plus_mant_symbol = GecosUserCoreFactory.symbol("exp_plus_mant", GecosUserTypeFactory.ACINT(63, false));
			// ap_uint<64> res;
			Symbol res_symbol = GecosUserCoreFactory.symbol("res", GecosUserTypeFactory.ACINT(64, false));
			
			mainblock.addSymbol(conv_symbol);
			mainblock.addSymbol(exp_plus_mant_symbol);
			mainblock.addSymbol(res_symbol);
			
			
			BasicBlock bb = GecosUserBlockFactory.BBlock();
			
			
			//Instruction exp_plus_mant = exp.concat(mant);
			Instruction[] args_concat_exp_mant = {GecosUserInstructionFactory.symbref(param_rebuild_double.get(2))};
			SetInstruction concat_exp_mant = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(exp_plus_mant_symbol), GecosUserInstructionFactory.methodCallInstruction("concat",
			                         GecosUserInstructionFactory.symbref(param_rebuild_double.get(1)), args_concat_exp_mant));
			bb.addInstruction(concat_exp_mant);
			
			//Instruction res = s.concat(exp_plus_mant);
			Instruction[] args_concat_s_exp_plus_mant = {GecosUserInstructionFactory.symbref(exp_plus_mant_symbol)};
			SetInstruction concat_s_exp_plus_mant = GecosUserInstructionFactory.set(GecosUserInstructionFactory.symbref(res_symbol), GecosUserInstructionFactory.methodCallInstruction("concat",
		 	               GecosUserInstructionFactory.symbref(param_rebuild_double.get(0)), args_concat_s_exp_plus_mant));
			bb.addInstruction(concat_s_exp_plus_mant);
			
			// Instruction conv.i = res;
			SetInstruction conv_i_res = GecosUserInstructionFactory.set(
			        GecosUserInstructionFactory.field(GecosUserInstructionFactory.symbref(conv_symbol),fields_fix_to_double[1]),
			        GecosUserInstructionFactory.symbref(res_symbol));
			bb.addInstruction(conv_i_res);
			
			// Instruction *out = conv.f;
			SetInstruction out_conv_f = GecosUserInstructionFactory.set(GecosUserInstructionFactory.indir(
			        GecosUserInstructionFactory.symbref(param_rebuild_double.get(3))),
			        GecosUserInstructionFactory.field(GecosUserInstructionFactory.symbref(conv_symbol),fields_fix_to_double[0]));
			bb.addInstruction(out_conv_f);
			
			mainblock.addChildren(bb);
			GecosUserCoreFactory.proc(ps, ps_rebuild_double, mainblock);
		}
		return ps_rebuild_double;
	}
	
}
