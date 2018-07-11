#include <ap_int.h>

union fix_to_float {
	float f;
	unsigned int i;
};
typedef union fix_to_float fix_to_float;
void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant));
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
float float_div2(float in);


void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant)) {
	fix_to_float conv;
	ap_uint<32> in_bits;
	
	conv.f = in;
	in_bits = conv.i;
	*s = in_bits[31];
	*exp = in_bits.range(30, 23);
	*mant = in_bits.range(22, 0);
}

void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out) {
	fix_to_float conv;
	ap_uint<31> exp_plus_mant;
	ap_uint<32> res;
	
	exp_plus_mant = exp.concat(mant);
	res = s.concat(exp_plus_mant);
	conv.i = res;
	*out = conv.f;
}

float float_div2(float in) {
	ap_uint<1> s;
	ap_uint<8> exp;
	ap_uint<23> mant;
	ap_uint<8> new_exp;
	ap_uint<23> new_mant;
	float out;
	
	decompose_float(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
if ((exp != 255) & (exp != 0) & ((exp != 1) | (mant != 8388607)))
		new_exp = exp - 1;
	if ((exp == 0) | (exp == 1)) {
		new_mant = mant >> 1;
		if ((mant[0] == 1) & (mant[1] == 1))
			new_mant = new_mant + 1;
	}
	if (exp == 1)
		new_mant.invert(22);
	rebuild_float(s, new_exp, new_mant, &out);
	return out;
}