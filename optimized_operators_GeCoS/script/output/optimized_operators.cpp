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
/* operator_int_55_div1 implements a division by 1 of the integer 55 bits in, optimized for Vivado HLS */
ap_uint<55> operator_int_55_div1(ap_uint<55> in);
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
void rebuild_double(ap_uint<1> s, ap_uint<11> exp, ap_uint<52> mant, double * out);
double operator_double_div2(double in);
double operator_double_mul7(double in);
void lut_div5_chunk(ap_uint<3> d, ap_uint<3> r_in, ap_uint<3> (* q), ap_uint<3> (* r_out));
/* int_57_div5 implements a division by 5 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> int_57_div5(ap_uint<57> in);
/* operator_int_57_div5 implements a division by 5 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> operator_int_57_div5(ap_uint<57> in);
double operator_double_div10(double in);


void decompose_double(double in, ap_uint<1> (* s), ap_uint<11> (* exp), ap_uint<52> (* mant)) {
	fix_to_double conv;
	ap_uint<64> in_bits;
	
	conv.d = in;
	in_bits = conv.l;
	*s = in_bits[63];
	*exp = in_bits.range(62, 52);
	*mant = in_bits.range(51, 0);
}

ap_uint<55> operator_int_55_div1(ap_uint<55> in) {
	return in;
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

double operator_double_div2(double in) {
	ap_uint<1> s;
	ap_uint<11> exp;
	ap_uint<52> mant;
	ap_uint<11> new_exp;
	ap_uint<52> new_mant;
	ap_uint<55> xf;
	double out;
	ap_uint<11> shift;
	ap_uint<11> div_exp;
	
	decompose_double(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	shift = 0;
	div_exp = 1;
	xf = mant;
	if (mant < 0)
		div_exp = 2;
	if (div_exp > exp)
		new_exp = 0;
	else
		new_exp = exp - div_exp;
	if (exp == 0)
		shift = 1;
	else
		if (div_exp >= exp)
			if (2 >= exp)
				shift = 2 - exp;
			else
				shift = exp - 2;
		else
			shift = div_exp - 1;
	if (2 >= exp)
		xf = xf >> shift;
	else
		xf = xf << shift;
	if (exp != 0)
		xf.set(52);
	xf = xf + 0;
	new_mant = operator_int_55_div1(xf);
	if (exp == 2047) {
		new_mant = mant;
		new_exp = exp;
	}
	rebuild_double(s, new_exp, new_mant, &out);
	return out;
}

double operator_double_mul7(double in) {
	ap_uint<1> s;
	ap_uint<11> exp;
	ap_uint<52> mant;
	ap_uint<11> new_exp;
	ap_uint<52> new_mant;
	ap_uint<56> xf;
	double out;
	ap_uint<6> clz;
	ap_uint<11> div_exp;
	
	decompose_double(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	clz = 0;
	div_exp = 2;
	xf = mant;
	if (mant > 5146970994320530)
		div_exp = 3;
	if (exp == 0) {
		xf = xf = mant*7;
		clz = xf.countLeadingZeros();
		if (clz < 4) {
			new_exp = 4 - clz;
			new_mant = xf >> 3 - clz;
		} else
			new_mant = xf;
	} else {
		if (exp != 255)
			if (exp >= 255 - div_exp)
				new_mant = 0;
			else {
				xf.set(52);
				xf = xf = mant*7;
				new_mant = xf >> div_exp;
			}
		if (exp != 255)
			if (exp >= 255 - div_exp)
				new_exp = 255;
			else
				new_exp = exp + div_exp;
	}
	rebuild_double(s, new_exp, new_mant, &out);
	return out;
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

ap_uint<57> int_57_div5(ap_uint<57> in) {
	ap_uint<57> d;
	ap_uint<57> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(56, 54);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(56, 54) = q_chunk;
	d_chunk = d.range(53, 51);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(53, 51) = q_chunk;
	d_chunk = d.range(50, 48);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(50, 48) = q_chunk;
	d_chunk = d.range(47, 45);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(47, 45) = q_chunk;
	d_chunk = d.range(44, 42);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(44, 42) = q_chunk;
	d_chunk = d.range(41, 39);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(41, 39) = q_chunk;
	d_chunk = d.range(38, 36);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(38, 36) = q_chunk;
	d_chunk = d.range(35, 33);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(35, 33) = q_chunk;
	d_chunk = d.range(32, 30);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(32, 30) = q_chunk;
	d_chunk = d.range(29, 27);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(29, 27) = q_chunk;
	d_chunk = d.range(26, 24);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(26, 24) = q_chunk;
	d_chunk = d.range(23, 21);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(23, 21) = q_chunk;
	d_chunk = d.range(20, 18);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(20, 18) = q_chunk;
	d_chunk = d.range(17, 15);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(17, 15) = q_chunk;
	d_chunk = d.range(14, 12);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(14, 12) = q_chunk;
	d_chunk = d.range(11, 9);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(11, 9) = q_chunk;
	d_chunk = d.range(8, 6);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(8, 6) = q_chunk;
	d_chunk = d.range(5, 3);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(5, 3) = q_chunk;
	d_chunk = d.range(2, 0);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(2, 0) = q_chunk;
	return q;
}

ap_uint<57> operator_int_57_div5(ap_uint<57> in) {
	return int_57_div5(in);
}

double operator_double_div10(double in) {
	ap_uint<1> s;
	ap_uint<11> exp;
	ap_uint<52> mant;
	ap_uint<11> new_exp;
	ap_uint<52> new_mant;
	ap_uint<57> xf;
	double out;
	ap_uint<11> shift;
	ap_uint<11> div_exp;
	
	decompose_double(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	shift = 0;
	div_exp = 3;
	xf = mant;
	if (mant < 1125899906842624)
		div_exp = 4;
	if (div_exp > exp)
		new_exp = 0;
	else
		new_exp = exp - div_exp;
	if (exp == 0)
		shift = 1;
	else
		if (div_exp >= exp)
			if (2 >= exp)
				shift = 2 - exp;
			else
				shift = exp - 2;
		else
			shift = div_exp - 1;
	if (2 >= exp)
		xf = xf >> shift;
	else
		xf = xf << shift;
	if (exp != 0)
		xf.set(52);
	xf = xf + 2;
	new_mant = operator_int_57_div5(xf);
	if (exp == 2047) {
		new_mant = mant;
		new_exp = exp;
	}
	rebuild_double(s, new_exp, new_mant, &out);
	return out;
}

