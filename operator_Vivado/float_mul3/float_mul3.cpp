#include <ap_int.h>

union fix_to_float {
	float f;
	unsigned int i;
};
typedef union fix_to_float fix_to_float;
void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant));
ap_uint<9> lut_mul5_chunk(ap_uint<6> d);
ap_uint<28> int_28_mul5(ap_uint<28> in);
ap_uint<28> operator_int_28_mul10(ap_uint<28> in);
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
float operator_float_mul10(float in);


void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant)) {
	fix_to_float conv;
	ap_uint<32> in_bits;
	
	conv.f = in;
	in_bits = conv.i;
	*s = in_bits[31];
	*exp = in_bits.range(30, 23);
	*mant = in_bits.range(22, 0);
}

ap_uint<9> lut_mul5_chunk(ap_uint<6> d) {
	ap_uint<9> out;
	ap_uint<1> q0[64] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
	ap_uint<1> q1[64] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1};
	ap_uint<1> q2[64] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0};
	ap_uint<1> q3[64] = {0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1};
	ap_uint<1> q4[64] = {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1};
	ap_uint<1> q5[64] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
	ap_uint<1> q6[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	ap_uint<1> q7[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	ap_uint<1> q8[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	
	out[0] = q0[d];
	out[1] = q1[d];
	out[2] = q2[d];
	out[3] = q3[d];
	out[4] = q4[d];
	out[5] = q5[d];
	out[6] = q6[d];
	out[7] = q7[d];
	out[8] = q8[d];
	return out;
}

ap_uint<28> int_28_mul5(ap_uint<28> in) {
	ap_uint<9> chunk_0_5;
	ap_uint<9> chunk_6_11;
	ap_uint<9> chunk_12_17;
	ap_uint<9> chunk_18_23;
	ap_uint<9> chunk_24_27;
	
	chunk_0_5 = lut_mul5_chunk(in.range(5, 0));
	chunk_6_11 = lut_mul5_chunk(in.range(11, 6));
	chunk_12_17 = lut_mul5_chunk(in.range(17, 12));
	chunk_18_23 = lut_mul5_chunk(in.range(23, 18));
	chunk_24_27 = lut_mul5_chunk(in.range(24, 27));
	return 0 + ((ap_uint<28>)chunk_0_5 << 0) + ((ap_uint<28>)chunk_6_11 << 6) + ((ap_uint<28>)chunk_12_17 << 12) + ((ap_uint<28>)chunk_18_23 << 18) + ((ap_uint<28>)chunk_24_27 << 24);
}

ap_uint<28> operator_int_28_mul10(ap_uint<28> in) {
	return int_28_mul5(in) << 1;
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

float operator_float_mul10(float in) {
	ap_uint<1> s;
	ap_uint<8> exp;
	ap_uint<23> mant;
	ap_uint<8> new_exp;
	ap_uint<23> new_mant;
	ap_uint<28> xf;
	float out;
	ap_uint<5> clz;
	ap_uint<8> div_exp;
	
	decompose_float(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	clz = 0;
	div_exp = 3;
	xf = mant;
	if (mant > 5033164)
		div_exp = 4;
	if (exp == 0) {
		xf = operator_int_28_mul10(xf);
		clz = xf.countLeadingZeros();
		if (clz < 5) {
			new_exp = 5 - clz;
			new_mant = xf >> 4 - clz;
		} else
			new_mant = xf;
	} else {
		if (exp != 255)
			if (exp >= 255 - div_exp)
				new_mant = 0;
			else {
				xf.set(23);
				xf = operator_int_28_mul10(xf);
				new_mant = xf >> div_exp;
			}
		if (exp != 255)
			if (exp >= 255 - div_exp)
				new_exp = 255;
			else
				new_exp = exp + div_exp;
	}
	rebuild_float(s, new_exp, new_mant, &out);
	return out;
}

