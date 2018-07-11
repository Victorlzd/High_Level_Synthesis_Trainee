#include <ap_int.h>

union fix_to_float {
	float f;
	unsigned int i;
};
typedef union fix_to_float fix_to_float;
union fix_to_double {
	double d;
	unsigned long l;
};
typedef union fix_to_double fix_to_double;
void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant));
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
/* float_div2 implements a division by two of the float in, optimized for Vivado HLS */
float float_div2(float in);
void decompose_double(double in, ap_uint<1> (* s), ap_uint<11> (* exp), ap_uint<52> (* mant));
void rebuild_double(ap_uint<1> s, ap_uint<11> exp, ap_uint<52> mant, double * out);
/* double_div2 implements a division by two of the double in, optimized for Vivado HLS */
double double_div2(double in);
ap_uint<1> lut_r1(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_r2(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<2> lut_r(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q1(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q2(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q4(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<4> lut_q(ap_uint<4> d, ap_uint<2> r_in);
void lut_div3(ap_uint<4> d, ap_uint<2> r_in, ap_uint<4> (* q), ap_uint<2> (* r_out));
/* long_div3 implements a division by three of the long in, optimized for Vivado HLS */
long long_div3(long in);
/* double_div3 implements a division by three of the double in, optimized for Vivado HLS */
double double_div3(double in);
/* int_div3 implements a division by three of the int in, optimized for Vivado HLS */
int int_div3(int in);
/* float_div3 implements a division by three of the float in, optimized for Vivado HLS */
float float_div3(float in);
/* double_mul2 implements a multiplication by two of the double in, optimized for Vivado HLS */
double double_mul2(double in);
/* float_mul2 implements a multiplication by two of the float in, optimized for Vivado HLS */
float float_mul2(float in);


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

float float_div2(float in) /* This function is composed by three parts :
1) Decompose the input float in its three parts (sign,exponent,mantissa) 
2) Compute the division by two by manipulating directly this three parts
3) Rebuild a float with the three modified parts and return it */
{
	ap_uint<1> s;
	ap_uint<8> exp;
	ap_uint<23> mant;
	ap_uint<8> new_exp;
	ap_uint<23> new_mant;
	float out;
	
	decompose_float(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	/* In the general case the division by two is just a diminution by 1 of the exponent
	We need to exclude the infinite and NaN (exp==255) the subnormals (exp==0) and the exception (exp==1 & mant==2^23-1) */
	if (exp != 255 & exp != 0 & (exp != 1 | mant != 8388607))
		new_exp = exp - 1;
	/* If the result will be sub-normal we need to divide the mantissa by 2 */
	if (exp == 0 | exp == 1) {
		new_mant = mant >> 1;
		/* We implement the half to even round (by dividing by 2 we can only have half)
		so if we have to round (mant[0]==1) and the result will be odd (mant[1]==1) we need to add 1 to the result */
		if (mant[0] == 1 & mant[1] == 1)
			new_mant = new_mant + 1;
	}
	/* If the number becomes sub-normal we need to had the 0.5 due to the non stocked(so non computed) 1 wich become 0 */
	if (exp == 1)
		new_mant.set(22);
	rebuild_float(s, new_exp, new_mant, &out);
	return out;
}

void decompose_double(double in, ap_uint<1> (* s), ap_uint<11> (* exp), ap_uint<52> (* mant)) {
	fix_to_double conv;
	ap_uint<64> in_bits;
	
	conv.d = in;
	in_bits = conv.l;
	*s = in_bits[63];
	*exp = in_bits.range(62, 52);
	*mant = in_bits.range(51, 0);
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

double double_div2(double in) /* This function is composed by three parts :
1) Decompose the input double in its three parts (sign,exponent,mantissa) 
2) Compute the division by two by manipulating directly this three parts
3) Rebuild a double with the three modified parts and return it */
{
	ap_uint<1> s;
	ap_uint<11> exp;
	ap_uint<52> mant;
	ap_uint<11> new_exp;
	ap_uint<52> new_mant;
	double out;
	
	decompose_double(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	/* In the general case the division by two is just a diminution by 1 of the exponent
	We need to exclude the infinite and NaN (exp==255) the subnormals (exp==0) and the exception (exp==1 & mant==2^23-1) */
	if (exp != 2047 & exp != 0 & (exp != 1 | mant != 4503599627370495))
		new_exp = exp - 1;
	/* If the result will be sub-normal we need to divide the mantissa by 2 */
	if (exp == 0 | exp == 1) {
		new_mant = mant >> 1;
		/* We implement the half to even round (by dividing by 2 we can only have half)
		so if we have to round (mant[0]==1) and the result will be odd (mant[1]==1) we need to add 1 to the result */
		if (mant[0] == 1 & mant[1] == 1)
			new_mant = new_mant + 1;
	}
	/* If the number becomes sub-normal we need to had the 0.5 due to the non stocked(so non computed) 1 wich become 0 */
	if (exp == 1)
		new_mant.invert(51);
	rebuild_double(s, new_exp, new_mant, &out);
	return out;
}

ap_uint<1> lut_r1(ap_uint<4> d, ap_uint<2> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		case 1 :
		ret_value = 1;
		case 2 :
		ret_value = 0;
		case 3 :
		ret_value = 0;
		case 4 :
		ret_value = 1;
		case 5 :
		ret_value = 0;
		case 6 :
		ret_value = 0;
		case 7 :
		ret_value = 1;
		case 8 :
		ret_value = 0;
		case 9 :
		ret_value = 0;
		case 10 :
		ret_value = 1;
		case 11 :
		ret_value = 0;
		case 12 :
		ret_value = 0;
		case 13 :
		ret_value = 1;
		case 14 :
		ret_value = 0;
		case 15 :
		ret_value = 0;
		case 16 :
		ret_value = 1;
		case 17 :
		ret_value = 0;
		case 18 :
		ret_value = 0;
		case 19 :
		ret_value = 1;
		case 20 :
		ret_value = 0;
		case 21 :
		ret_value = 0;
		case 22 :
		ret_value = 1;
		case 23 :
		ret_value = 0;
		case 24 :
		ret_value = 0;
		case 25 :
		ret_value = 1;
		case 26 :
		ret_value = 0;
		case 27 :
		ret_value = 0;
		case 28 :
		ret_value = 1;
		case 29 :
		ret_value = 0;
		case 30 :
		ret_value = 0;
		case 31 :
		ret_value = 1;
		case 32 :
		ret_value = 0;
		case 33 :
		ret_value = 0;
		case 34 :
		ret_value = 1;
		case 35 :
		ret_value = 0;
		case 36 :
		ret_value = 0;
		case 37 :
		ret_value = 1;
		case 38 :
		ret_value = 0;
		case 39 :
		ret_value = 0;
		case 40 :
		ret_value = 1;
		case 41 :
		ret_value = 0;
		case 42 :
		ret_value = 0;
		case 43 :
		ret_value = 1;
		case 44 :
		ret_value = 0;
		case 45 :
		ret_value = 0;
		case 46 :
		ret_value = 1;
		case 47 :
		ret_value = 0;
	}
	return ret_value;
}

ap_uint<1> lut_r2(ap_uint<4> d, ap_uint<2> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		case 1 :
		ret_value = 0;
		case 2 :
		ret_value = 1;
		case 3 :
		ret_value = 0;
		case 4 :
		ret_value = 0;
		case 5 :
		ret_value = 1;
		case 6 :
		ret_value = 0;
		case 7 :
		ret_value = 0;
		case 8 :
		ret_value = 1;
		case 9 :
		ret_value = 0;
		case 10 :
		ret_value = 0;
		case 11 :
		ret_value = 1;
		case 12 :
		ret_value = 0;
		case 13 :
		ret_value = 0;
		case 14 :
		ret_value = 1;
		case 15 :
		ret_value = 0;
		case 16 :
		ret_value = 0;
		case 17 :
		ret_value = 1;
		case 18 :
		ret_value = 0;
		case 19 :
		ret_value = 0;
		case 20 :
		ret_value = 1;
		case 21 :
		ret_value = 0;
		case 22 :
		ret_value = 0;
		case 23 :
		ret_value = 1;
		case 24 :
		ret_value = 0;
		case 25 :
		ret_value = 0;
		case 26 :
		ret_value = 1;
		case 27 :
		ret_value = 0;
		case 28 :
		ret_value = 0;
		case 29 :
		ret_value = 1;
		case 30 :
		ret_value = 0;
		case 31 :
		ret_value = 0;
		case 32 :
		ret_value = 1;
		case 33 :
		ret_value = 0;
		case 34 :
		ret_value = 0;
		case 35 :
		ret_value = 1;
		case 36 :
		ret_value = 0;
		case 37 :
		ret_value = 0;
		case 38 :
		ret_value = 1;
		case 39 :
		ret_value = 0;
		case 40 :
		ret_value = 0;
		case 41 :
		ret_value = 1;
		case 42 :
		ret_value = 0;
		case 43 :
		ret_value = 0;
		case 44 :
		ret_value = 1;
		case 45 :
		ret_value = 0;
		case 46 :
		ret_value = 0;
		case 47 :
		ret_value = 1;
	}
	return ret_value;
}

ap_uint<2> lut_r(ap_uint<4> d, ap_uint<2> r_in) {
	ap_uint<1> r1;
	ap_uint<1> r2;
	
	r1 = lut_r1(d, r_in);
	r2 = lut_r2(d, r_in);
	return r2.concat(r1);
}

ap_uint<1> lut_q1(ap_uint<4> d, ap_uint<2> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		case 1 :
		ret_value = 0;
		case 2 :
		ret_value = 0;
		case 3 :
		ret_value = 1;
		case 4 :
		ret_value = 1;
		case 5 :
		ret_value = 1;
		case 6 :
		ret_value = 0;
		case 7 :
		ret_value = 0;
		case 8 :
		ret_value = 0;
		case 9 :
		ret_value = 1;
		case 10 :
		ret_value = 1;
		case 11 :
		ret_value = 1;
		case 12 :
		ret_value = 0;
		case 13 :
		ret_value = 0;
		case 14 :
		ret_value = 0;
		case 15 :
		ret_value = 1;
		case 16 :
		ret_value = 1;
		case 17 :
		ret_value = 1;
		case 18 :
		ret_value = 0;
		case 19 :
		ret_value = 0;
		case 20 :
		ret_value = 0;
		case 21 :
		ret_value = 1;
		case 22 :
		ret_value = 1;
		case 23 :
		ret_value = 1;
		case 24 :
		ret_value = 0;
		case 25 :
		ret_value = 0;
		case 26 :
		ret_value = 0;
		case 27 :
		ret_value = 1;
		case 28 :
		ret_value = 1;
		case 29 :
		ret_value = 1;
		case 30 :
		ret_value = 0;
		case 31 :
		ret_value = 0;
		case 32 :
		ret_value = 0;
		case 33 :
		ret_value = 1;
		case 34 :
		ret_value = 1;
		case 35 :
		ret_value = 1;
		case 36 :
		ret_value = 0;
		case 37 :
		ret_value = 0;
		case 38 :
		ret_value = 0;
		case 39 :
		ret_value = 1;
		case 40 :
		ret_value = 1;
		case 41 :
		ret_value = 1;
		case 42 :
		ret_value = 0;
		case 43 :
		ret_value = 0;
		case 44 :
		ret_value = 0;
		case 45 :
		ret_value = 1;
		case 46 :
		ret_value = 1;
		case 47 :
		ret_value = 1;
	}
	return ret_value;
}

ap_uint<1> lut_q2(ap_uint<4> d, ap_uint<2> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		case 1 :
		ret_value = 0;
		case 2 :
		ret_value = 0;
		case 3 :
		ret_value = 0;
		case 4 :
		ret_value = 0;
		case 5 :
		ret_value = 0;
		case 6 :
		ret_value = 1;
		case 7 :
		ret_value = 1;
		case 8 :
		ret_value = 1;
		case 9 :
		ret_value = 1;
		case 10 :
		ret_value = 1;
		case 11 :
		ret_value = 1;
		case 12 :
		ret_value = 0;
		case 13 :
		ret_value = 0;
		case 14 :
		ret_value = 0;
		case 15 :
		ret_value = 0;
		case 16 :
		ret_value = 0;
		case 17 :
		ret_value = 0;
		case 18 :
		ret_value = 1;
		case 19 :
		ret_value = 1;
		case 20 :
		ret_value = 1;
		case 21 :
		ret_value = 1;
		case 22 :
		ret_value = 1;
		case 23 :
		ret_value = 1;
		case 24 :
		ret_value = 0;
		case 25 :
		ret_value = 0;
		case 26 :
		ret_value = 0;
		case 27 :
		ret_value = 0;
		case 28 :
		ret_value = 0;
		case 29 :
		ret_value = 0;
		case 30 :
		ret_value = 1;
		case 31 :
		ret_value = 1;
		case 32 :
		ret_value = 1;
		case 33 :
		ret_value = 1;
		case 34 :
		ret_value = 1;
		case 35 :
		ret_value = 1;
		case 36 :
		ret_value = 0;
		case 37 :
		ret_value = 0;
		case 38 :
		ret_value = 0;
		case 39 :
		ret_value = 0;
		case 40 :
		ret_value = 0;
		case 41 :
		ret_value = 0;
		case 42 :
		ret_value = 1;
		case 43 :
		ret_value = 1;
		case 44 :
		ret_value = 1;
		case 45 :
		ret_value = 1;
		case 46 :
		ret_value = 1;
		case 47 :
		ret_value = 1;
	}
	return ret_value;
}

ap_uint<1> lut_q3(ap_uint<4> d, ap_uint<2> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		case 1 :
		ret_value = 0;
		case 2 :
		ret_value = 0;
		case 3 :
		ret_value = 0;
		case 4 :
		ret_value = 0;
		case 5 :
		ret_value = 0;
		case 6 :
		ret_value = 0;
		case 7 :
		ret_value = 0;
		case 8 :
		ret_value = 0;
		case 9 :
		ret_value = 0;
		case 10 :
		ret_value = 0;
		case 11 :
		ret_value = 0;
		case 12 :
		ret_value = 1;
		case 13 :
		ret_value = 1;
		case 14 :
		ret_value = 1;
		case 15 :
		ret_value = 1;
		case 16 :
		ret_value = 1;
		case 17 :
		ret_value = 1;
		case 18 :
		ret_value = 1;
		case 19 :
		ret_value = 1;
		case 20 :
		ret_value = 1;
		case 21 :
		ret_value = 1;
		case 22 :
		ret_value = 1;
		case 23 :
		ret_value = 1;
		case 24 :
		ret_value = 0;
		case 25 :
		ret_value = 0;
		case 26 :
		ret_value = 0;
		case 27 :
		ret_value = 0;
		case 28 :
		ret_value = 0;
		case 29 :
		ret_value = 0;
		case 30 :
		ret_value = 0;
		case 31 :
		ret_value = 0;
		case 32 :
		ret_value = 0;
		case 33 :
		ret_value = 0;
		case 34 :
		ret_value = 0;
		case 35 :
		ret_value = 0;
		case 36 :
		ret_value = 1;
		case 37 :
		ret_value = 1;
		case 38 :
		ret_value = 1;
		case 39 :
		ret_value = 1;
		case 40 :
		ret_value = 1;
		case 41 :
		ret_value = 1;
		case 42 :
		ret_value = 1;
		case 43 :
		ret_value = 1;
		case 44 :
		ret_value = 1;
		case 45 :
		ret_value = 1;
		case 46 :
		ret_value = 1;
		case 47 :
		ret_value = 1;
	}
	return ret_value;
}

ap_uint<1> lut_q4(ap_uint<4> d, ap_uint<2> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		case 1 :
		ret_value = 0;
		case 2 :
		ret_value = 0;
		case 3 :
		ret_value = 0;
		case 4 :
		ret_value = 0;
		case 5 :
		ret_value = 0;
		case 6 :
		ret_value = 0;
		case 7 :
		ret_value = 0;
		case 8 :
		ret_value = 0;
		case 9 :
		ret_value = 0;
		case 10 :
		ret_value = 0;
		case 11 :
		ret_value = 0;
		case 12 :
		ret_value = 0;
		case 13 :
		ret_value = 0;
		case 14 :
		ret_value = 0;
		case 15 :
		ret_value = 0;
		case 16 :
		ret_value = 0;
		case 17 :
		ret_value = 0;
		case 18 :
		ret_value = 0;
		case 19 :
		ret_value = 0;
		case 20 :
		ret_value = 0;
		case 21 :
		ret_value = 0;
		case 22 :
		ret_value = 0;
		case 23 :
		ret_value = 0;
		case 24 :
		ret_value = 1;
		case 25 :
		ret_value = 1;
		case 26 :
		ret_value = 1;
		case 27 :
		ret_value = 1;
		case 28 :
		ret_value = 1;
		case 29 :
		ret_value = 1;
		case 30 :
		ret_value = 1;
		case 31 :
		ret_value = 1;
		case 32 :
		ret_value = 1;
		case 33 :
		ret_value = 1;
		case 34 :
		ret_value = 1;
		case 35 :
		ret_value = 1;
		case 36 :
		ret_value = 1;
		case 37 :
		ret_value = 1;
		case 38 :
		ret_value = 1;
		case 39 :
		ret_value = 1;
		case 40 :
		ret_value = 1;
		case 41 :
		ret_value = 1;
		case 42 :
		ret_value = 1;
		case 43 :
		ret_value = 1;
		case 44 :
		ret_value = 1;
		case 45 :
		ret_value = 1;
		case 46 :
		ret_value = 1;
		case 47 :
		ret_value = 1;
	}
	return ret_value;
}

ap_uint<4> lut_q(ap_uint<4> d, ap_uint<2> r_in) {
	ap_uint<1> q1;
	ap_uint<1> q2;
	ap_uint<1> q3;
	ap_uint<1> q4;
	ap_uint<2> q21;
	ap_uint<2> q43;
	
	q1 = lut_q1(d, r_in);
	q2 = lut_q2(d, r_in);
	q3 = lut_q1(d, r_in);
	q4 = lut_q2(d, r_in);
	q21 = q2.concat(q1);
	q21 = q4.concat(q3);
	return q43.concat(q21);
}

void lut_div3(ap_uint<4> d, ap_uint<2> r_in, ap_uint<4> (* q), ap_uint<2> (* r_out)) {
	*q = lut_q(d, r_in);
	*r_out = lut_r(d, r_in);
}

long long_div3(long in) {
	ap_uint<64> d;
	ap_uint<64> q;
	ap_uint<4> d_chunk;
	ap_uint<4> q_chunk;
	ap_uint<2> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 15; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
}

double double_div3(double in) {
	ap_uint<1> s;
	ap_uint<11> exp;
	ap_uint<52> mant;
	ap_uint<11> new_exp;
	ap_uint<52> new_mant;
	ap_uint<32> xf;
	double out;
	
	decompose_double(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	if (exp != 2047 & exp != 0)
		if (mant[51] | exp == 1)
			new_exp = exp - 1;
		else
			new_exp = exp - 2;
	if (exp != 2047) {
		if (exp != 0)
			xf.set(52);
		if ((mant[51] | exp == 2) & exp != 0 & exp != 1)
			xf = xf << 1;
		else
			if (exp != 0 & exp != 1)
				xf = xf << 2;
		xf = xf + 1;
		xf = long_div3(xf);
		new_mant = xf.range(51, 0);
	}
	rebuild_double(s, new_exp, new_mant, &out);
	return out;
}

int int_div3(int in) {
	ap_uint<32> d;
	ap_uint<32> q;
	ap_uint<4> d_chunk;
	ap_uint<4> q_chunk;
	ap_uint<2> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 7; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
}

float float_div3(float in) {
	ap_uint<1> s;
	ap_uint<8> exp;
	ap_uint<23> mant;
	ap_uint<8> new_exp;
	ap_uint<23> new_mant;
	ap_uint<32> xf;
	float out;
	
	decompose_float(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	if (exp != 255 & exp != 0)
		if (mant[22] | exp == 1)
			new_exp = exp - 1;
		else
			new_exp = exp - 2;
	if (exp != 255) {
		if (exp != 0)
			xf.set(23);
		if ((mant[22] | exp == 2) & exp != 0 & exp != 1)
			xf = xf << 1;
		else
			if (exp != 0 & exp != 1)
				xf = xf << 2;
		xf = xf + 1;
		xf = int_div3(xf);
		new_mant = xf.range(22, 0);
	}
	rebuild_float(s, new_exp, new_mant, &out);
	return out;
}

double double_mul2(double in) /* This function is composed by three parts :
1) Decompose the input double in its three parts (sign,exponent,mantissa) 
2) Compute the multiplication by two by manipulating directly this three parts
3) Rebuild a double with the three modified parts and return it */
{
	ap_uint<1> s;
	ap_uint<11> exp;
	ap_uint<52> mant;
	ap_uint<11> new_exp;
	ap_uint<52> new_mant;
	double out;
	
	decompose_double(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	/* In the general case the multiplication by two is just a incrementation by 1 of the exponent
	We need to exclude the infinite and NaN (exp==255) the resuslts that stays sub-normals (exp==0|mant[22]) */
	if (exp != 2047 & (exp != 0 | mant[51]))
		new_exp = exp + 1;
	/* If the number becomes infinite we need to fix the mantissa to 0 */
	if (exp == 2046)
		new_mant = 0;
	else
		/* If the number is sub-normal weneed to multiply the mantissa by 2 */
		if (exp == 0)
			new_mant = mant*2;
	rebuild_double(s, new_exp, new_mant, &out);
	return out;
}

float float_mul2(float in) /* This function is composed by three parts :
1) Decompose the input float in its three parts (sign,exponent,mantissa) 
2) Compute the multiplication by two by manipulating directly this three parts
3) Rebuild a float with the three modified parts and return it */
{
	ap_uint<1> s;
	ap_uint<8> exp;
	ap_uint<23> mant;
	ap_uint<8> new_exp;
	ap_uint<23> new_mant;
	float out;
	
	decompose_float(in, &s, &exp, &mant);
	new_exp = exp;
	new_mant = mant;
	/* In the general case the multiplication by two is just a incrementation by 1 of the exponent
	We need to exclude the infinite and NaN (exp==255) the resuslts that stays sub-normals (exp==0|mant[22]) */
	if (exp != 255 & (exp != 0 | mant[22]))
		new_exp = exp + 1;
	/* If the number becomes infinite we need to fix the mantissa to 0 */
	if (exp == 254)
		new_mant = 0;
	else
		/* If the number is sub-normal weneed to multiply the mantissa by 2 */
		if (exp == 0)
			new_mant = mant*2;
	rebuild_float(s, new_exp, new_mant, &out);
	return out;
}

