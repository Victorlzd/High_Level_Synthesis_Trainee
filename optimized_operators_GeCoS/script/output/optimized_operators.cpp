#include <ap_int.h>

union fix_to_double {
	double d;
	unsigned long l;
};
typedef union fix_to_double fix_to_double;
union fix_to_float {
	float f;
	unsigned int i;
};
typedef union fix_to_float fix_to_float;
void decompose_double(double in, ap_uint<1> (* s), ap_uint<11> (* exp), ap_uint<52> (* mant));
void lut_div5_chunk(ap_uint<3> d, ap_uint<3> r_in, ap_uint<3> (* q), ap_uint<3> (* r_out));
/* int_56_div5 implements a division by 5 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> int_56_div5(ap_uint<56> in);
/* operator_int_56_div5 implements a division by 5 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> operator_int_56_div5(ap_uint<56> in);
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
void rebuild_double(ap_uint<1> s, ap_uint<11> exp, ap_uint<52> mant, double * out);
double operator_double_div5(double in);


void decompose_double(double in, ap_uint<1> (* s), ap_uint<11> (* exp), ap_uint<52> (* mant)) {
	fix_to_double conv;
	ap_uint<64> in_bits;
	
	conv.d = in;
	in_bits = conv.l;
	*s = in_bits[63];
	*exp = in_bits.range(62, 52);
	*mant = in_bits.range(51, 0);
}

void lut_div5_chunk(ap_uint<3> d, ap_uint<3> r_in, ap_uint<3> (* q), ap_uint<3> (* r_out)) {
	ap_uint<6> in;
	ap_uint<1> r0[64] = {0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1};
	ap_uint<1> r1[64] = {0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1};
	ap_uint<1> r2[64] = {0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0};
	ap_uint<1> q0[64] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0};
	ap_uint<1> q1[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
	ap_uint<1> q2[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
	
	in = r_in.concat(d);
	(*r_out)[0] = r0[in];
	(*r_out)[1] = r1[in];
	(*r_out)[2] = r2[in];
	(*q)[0] = q0[in];
	(*q)[1] = q1[in];
	(*q)[2] = q2[in];
}

ap_uint<56> int_56_div5(ap_uint<56> in) {
	ap_uint<56> d;
	ap_uint<56> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(55, 54);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(55, 54) = q_chunk.range(1, 0);
	for(i = 17; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div5_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<56> operator_int_56_div5(ap_uint<56> in) {
	return int_56_div5(in);
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

void rebuild_double(ap_uint<1> s, ap_uint<11> exp, ap_uint<52> mant, double * out) {
	fix_to_double conv;
	ap_uint<63> exp_plus_mant;
	ap_uint<64> res;
	
	exp_plus_mant = exp.concat(mant);
	res = s.concat(exp_plus_mant);
	conv.l = res;
	*out = conv.d;
}

double operator_double_div5(double in) {
	{
		ap_uint<1> s;
		ap_uint<11> exp;
		ap_uint<52> mant;
		ap_uint<11> new_exp;
		ap_uint<52> new_mant;
		ap_uint<56> xf;
		double out;
		ap_uint<11> shift;
		ap_uint<11> div_exp;
		
		decompose_double(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 2;
		xf = mant;
		if (mant < 1125899906842624)
			div_exp = 3;
		if (exp != 2047)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 2047) {
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
			if (exp != 0)
				xf.set(52);
			if (1 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 2;
			new_mant = operator_int_56_div5(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}

