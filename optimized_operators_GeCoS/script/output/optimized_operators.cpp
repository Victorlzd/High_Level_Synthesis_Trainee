#include <ap_int.h>

union fix_to_float {
	float f;
	unsigned int i;
};
typedef union fix_to_float fix_to_float;
void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant));
void lut_div3_chunk(ap_uint<4> d, ap_uint<2> r_in, ap_uint<4> (* q), ap_uint<2> (* r_out));
/* int_26_div3 implements a division by 3 of the integer 26 bits in, optimized for Vivado HLS */
ap_uint<26> int_26_div3(ap_uint<26> in);
/* operator_int_26_div3 implements a division by 3 of the integer 26 bits in, optimized for Vivado HLS */
ap_uint<26> operator_int_26_div3(ap_uint<26> in);
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
float operator_float_div3(float in);


void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant)) {
	fix_to_float conv;
	ap_uint<32> in_bits;
	
	conv.f = in;
	in_bits = conv.i;
	*s = in_bits[31];
	*exp = in_bits.range(30, 23);
	*mant = in_bits.range(22, 0);
}

void lut_div3_chunk(ap_uint<4> d, ap_uint<2> r_in, ap_uint<4> (* q), ap_uint<2> (* r_out)) {
	ap_uint<6> in;
	ap_uint<1> r0[64] = {0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};
	ap_uint<1> r1[64] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0};
	ap_uint<1> q0[64] = {0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1};
	ap_uint<1> q1[64] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
	ap_uint<1> q2[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
	ap_uint<1> q3[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	in = r_in.concat(d);
	(*r_out)[0] = r0[in];
	(*r_out)[1] = r1[in];
	(*q)[0] = q0[in];
	(*q)[1] = q1[in];
	(*q)[2] = q2[in];
	(*q)[3] = q3[in];
}

ap_uint<26> int_26_div3(ap_uint<26> in) {
	ap_uint<26> d;
	ap_uint<26> q;
	ap_uint<4> d_chunk;
	ap_uint<4> q_chunk;
	ap_uint<2> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(25, 24);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(25, 24) = q_chunk.range(1, 0);
	for(i = 5; i >= 0; i = i - 1) {
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
	}
	return q;
}

ap_uint<26> operator_int_26_div3(ap_uint<26> in) {
	return int_26_div3(in);
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

float operator_float_div3(float in) {
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<26> xf;
		float out;
		ap_uint<8> shift;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 1;
		xf = mant;
		if (mant < 4194304)
			div_exp = 2;
		if (div_exp > exp)
			new_exp = 0;
		else
			new_exp = exp - div_exp;
		if (exp == 0)
			shift = 0;
		else
			if (div_exp >= exp)
				if (1 >= exp)
					shift = 1 - exp;
				else
					shift = exp - 1;
			else
				shift = div_exp - 0;
		if (1 >= exp)
			xf = xf >> shift;
		else
			xf = xf << shift;
		if (exp != 0)
			xf.set(23);
		xf = xf + 1;
		new_mant = operator_int_26_div3(xf);
		if (exp == 255) {
			new_mant = mant;
			new_exp = exp;
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

