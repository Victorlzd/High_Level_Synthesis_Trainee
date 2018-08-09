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
ap_uint<1> lut_r0_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r1_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r2_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r3_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_q0_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_q1_div9(ap_uint<2> d, ap_uint<4> r_in);
void lut_div9_chunk(ap_uint<2> d, ap_uint<4> r_in, ap_uint<2> (* q), ap_uint<4> (* r_out));
/* int_57_div9 implements a division by 9 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> int_57_div9(ap_uint<57> in);
/* operator_int_57_div9 implements a division by 9 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> operator_int_57_div9(ap_uint<57> in);
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
void rebuild_double(ap_uint<1> s, ap_uint<11> exp, ap_uint<52> mant, double * out);
double operator_double_div9(double in);


void decompose_double(double in, ap_uint<1> (* s), ap_uint<11> (* exp), ap_uint<52> (* mant)) {
	fix_to_double conv;
	ap_uint<64> in_bits;
	
	conv.d = in;
	in_bits = conv.l;
	*s = in_bits[63];
	*exp = in_bits.range(62, 52);
	*mant = in_bits.range(51, 0);
}

ap_uint<1> lut_r0_div9(ap_uint<2> d, ap_uint<4> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		break;
		case 1 :
		ret_value = 1;
		break;
		case 2 :
		ret_value = 0;
		break;
		case 3 :
		ret_value = 1;
		break;
		case 4 :
		ret_value = 0;
		break;
		case 5 :
		ret_value = 1;
		break;
		case 6 :
		ret_value = 0;
		break;
		case 7 :
		ret_value = 1;
		break;
		case 8 :
		ret_value = 0;
		break;
		case 9 :
		ret_value = 0;
		break;
		case 10 :
		ret_value = 1;
		break;
		case 11 :
		ret_value = 0;
		break;
		case 12 :
		ret_value = 1;
		break;
		case 13 :
		ret_value = 0;
		break;
		case 14 :
		ret_value = 1;
		break;
		case 15 :
		ret_value = 0;
		break;
		case 16 :
		ret_value = 1;
		break;
		case 17 :
		ret_value = 0;
		break;
		case 18 :
		ret_value = 0;
		break;
		case 19 :
		ret_value = 1;
		break;
		case 20 :
		ret_value = 0;
		break;
		case 21 :
		ret_value = 1;
		break;
		case 22 :
		ret_value = 0;
		break;
		case 23 :
		ret_value = 1;
		break;
		case 24 :
		ret_value = 0;
		break;
		case 25 :
		ret_value = 1;
		break;
		case 26 :
		ret_value = 0;
		break;
		case 27 :
		ret_value = 0;
		break;
		case 28 :
		ret_value = 1;
		break;
		case 29 :
		ret_value = 0;
		break;
		case 30 :
		ret_value = 1;
		break;
		case 31 :
		ret_value = 0;
		break;
		case 32 :
		ret_value = 1;
		break;
		case 33 :
		ret_value = 0;
		break;
		case 34 :
		ret_value = 1;
		break;
		case 35 :
		ret_value = 0;
		break;
		case 36 :
		ret_value = 0;
		break;
		case 37 :
		ret_value = 1;
		break;
		case 38 :
		ret_value = 0;
		break;
		case 39 :
		ret_value = 1;
		break;
		case 40 :
		ret_value = 0;
		break;
		case 41 :
		ret_value = 1;
		break;
		case 42 :
		ret_value = 0;
		break;
		case 43 :
		ret_value = 1;
		break;
		case 44 :
		ret_value = 0;
		break;
		case 45 :
		ret_value = 0;
		break;
		case 46 :
		ret_value = 1;
		break;
		case 47 :
		ret_value = 0;
		break;
		case 48 :
		ret_value = 1;
		break;
		case 49 :
		ret_value = 0;
		break;
		case 50 :
		ret_value = 1;
		break;
		case 51 :
		ret_value = 0;
		break;
		case 52 :
		ret_value = 1;
		break;
		case 53 :
		ret_value = 0;
		break;
		case 54 :
		ret_value = 0;
		break;
		case 55 :
		ret_value = 1;
		break;
		case 56 :
		ret_value = 0;
		break;
		case 57 :
		ret_value = 1;
		break;
		case 58 :
		ret_value = 0;
		break;
		case 59 :
		ret_value = 1;
		break;
		case 60 :
		ret_value = 0;
		break;
		case 61 :
		ret_value = 1;
		break;
		case 62 :
		ret_value = 0;
		break;
		case 63 :
		ret_value = 0;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_r1_div9(ap_uint<2> d, ap_uint<4> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		break;
		case 1 :
		ret_value = 0;
		break;
		case 2 :
		ret_value = 1;
		break;
		case 3 :
		ret_value = 1;
		break;
		case 4 :
		ret_value = 0;
		break;
		case 5 :
		ret_value = 0;
		break;
		case 6 :
		ret_value = 1;
		break;
		case 7 :
		ret_value = 1;
		break;
		case 8 :
		ret_value = 0;
		break;
		case 9 :
		ret_value = 0;
		break;
		case 10 :
		ret_value = 0;
		break;
		case 11 :
		ret_value = 1;
		break;
		case 12 :
		ret_value = 1;
		break;
		case 13 :
		ret_value = 0;
		break;
		case 14 :
		ret_value = 0;
		break;
		case 15 :
		ret_value = 1;
		break;
		case 16 :
		ret_value = 1;
		break;
		case 17 :
		ret_value = 0;
		break;
		case 18 :
		ret_value = 0;
		break;
		case 19 :
		ret_value = 0;
		break;
		case 20 :
		ret_value = 1;
		break;
		case 21 :
		ret_value = 1;
		break;
		case 22 :
		ret_value = 0;
		break;
		case 23 :
		ret_value = 0;
		break;
		case 24 :
		ret_value = 1;
		break;
		case 25 :
		ret_value = 1;
		break;
		case 26 :
		ret_value = 0;
		break;
		case 27 :
		ret_value = 0;
		break;
		case 28 :
		ret_value = 0;
		break;
		case 29 :
		ret_value = 1;
		break;
		case 30 :
		ret_value = 1;
		break;
		case 31 :
		ret_value = 0;
		break;
		case 32 :
		ret_value = 0;
		break;
		case 33 :
		ret_value = 1;
		break;
		case 34 :
		ret_value = 1;
		break;
		case 35 :
		ret_value = 0;
		break;
		case 36 :
		ret_value = 0;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 1;
		break;
		case 40 :
		ret_value = 0;
		break;
		case 41 :
		ret_value = 0;
		break;
		case 42 :
		ret_value = 1;
		break;
		case 43 :
		ret_value = 1;
		break;
		case 44 :
		ret_value = 0;
		break;
		case 45 :
		ret_value = 0;
		break;
		case 46 :
		ret_value = 0;
		break;
		case 47 :
		ret_value = 1;
		break;
		case 48 :
		ret_value = 1;
		break;
		case 49 :
		ret_value = 0;
		break;
		case 50 :
		ret_value = 0;
		break;
		case 51 :
		ret_value = 1;
		break;
		case 52 :
		ret_value = 1;
		break;
		case 53 :
		ret_value = 0;
		break;
		case 54 :
		ret_value = 0;
		break;
		case 55 :
		ret_value = 0;
		break;
		case 56 :
		ret_value = 1;
		break;
		case 57 :
		ret_value = 1;
		break;
		case 58 :
		ret_value = 0;
		break;
		case 59 :
		ret_value = 0;
		break;
		case 60 :
		ret_value = 1;
		break;
		case 61 :
		ret_value = 1;
		break;
		case 62 :
		ret_value = 0;
		break;
		case 63 :
		ret_value = 0;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_r2_div9(ap_uint<2> d, ap_uint<4> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		break;
		case 1 :
		ret_value = 0;
		break;
		case 2 :
		ret_value = 0;
		break;
		case 3 :
		ret_value = 0;
		break;
		case 4 :
		ret_value = 1;
		break;
		case 5 :
		ret_value = 1;
		break;
		case 6 :
		ret_value = 1;
		break;
		case 7 :
		ret_value = 1;
		break;
		case 8 :
		ret_value = 0;
		break;
		case 9 :
		ret_value = 0;
		break;
		case 10 :
		ret_value = 0;
		break;
		case 11 :
		ret_value = 0;
		break;
		case 12 :
		ret_value = 0;
		break;
		case 13 :
		ret_value = 1;
		break;
		case 14 :
		ret_value = 1;
		break;
		case 15 :
		ret_value = 1;
		break;
		case 16 :
		ret_value = 1;
		break;
		case 17 :
		ret_value = 0;
		break;
		case 18 :
		ret_value = 0;
		break;
		case 19 :
		ret_value = 0;
		break;
		case 20 :
		ret_value = 0;
		break;
		case 21 :
		ret_value = 0;
		break;
		case 22 :
		ret_value = 1;
		break;
		case 23 :
		ret_value = 1;
		break;
		case 24 :
		ret_value = 1;
		break;
		case 25 :
		ret_value = 1;
		break;
		case 26 :
		ret_value = 0;
		break;
		case 27 :
		ret_value = 0;
		break;
		case 28 :
		ret_value = 0;
		break;
		case 29 :
		ret_value = 0;
		break;
		case 30 :
		ret_value = 0;
		break;
		case 31 :
		ret_value = 1;
		break;
		case 32 :
		ret_value = 1;
		break;
		case 33 :
		ret_value = 1;
		break;
		case 34 :
		ret_value = 1;
		break;
		case 35 :
		ret_value = 0;
		break;
		case 36 :
		ret_value = 0;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 0;
		break;
		case 39 :
		ret_value = 0;
		break;
		case 40 :
		ret_value = 1;
		break;
		case 41 :
		ret_value = 1;
		break;
		case 42 :
		ret_value = 1;
		break;
		case 43 :
		ret_value = 1;
		break;
		case 44 :
		ret_value = 0;
		break;
		case 45 :
		ret_value = 0;
		break;
		case 46 :
		ret_value = 0;
		break;
		case 47 :
		ret_value = 0;
		break;
		case 48 :
		ret_value = 0;
		break;
		case 49 :
		ret_value = 1;
		break;
		case 50 :
		ret_value = 1;
		break;
		case 51 :
		ret_value = 1;
		break;
		case 52 :
		ret_value = 1;
		break;
		case 53 :
		ret_value = 0;
		break;
		case 54 :
		ret_value = 0;
		break;
		case 55 :
		ret_value = 0;
		break;
		case 56 :
		ret_value = 0;
		break;
		case 57 :
		ret_value = 0;
		break;
		case 58 :
		ret_value = 1;
		break;
		case 59 :
		ret_value = 1;
		break;
		case 60 :
		ret_value = 1;
		break;
		case 61 :
		ret_value = 1;
		break;
		case 62 :
		ret_value = 0;
		break;
		case 63 :
		ret_value = 0;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_r3_div9(ap_uint<2> d, ap_uint<4> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		break;
		case 1 :
		ret_value = 0;
		break;
		case 2 :
		ret_value = 0;
		break;
		case 3 :
		ret_value = 0;
		break;
		case 4 :
		ret_value = 0;
		break;
		case 5 :
		ret_value = 0;
		break;
		case 6 :
		ret_value = 0;
		break;
		case 7 :
		ret_value = 0;
		break;
		case 8 :
		ret_value = 1;
		break;
		case 9 :
		ret_value = 0;
		break;
		case 10 :
		ret_value = 0;
		break;
		case 11 :
		ret_value = 0;
		break;
		case 12 :
		ret_value = 0;
		break;
		case 13 :
		ret_value = 0;
		break;
		case 14 :
		ret_value = 0;
		break;
		case 15 :
		ret_value = 0;
		break;
		case 16 :
		ret_value = 0;
		break;
		case 17 :
		ret_value = 1;
		break;
		case 18 :
		ret_value = 0;
		break;
		case 19 :
		ret_value = 0;
		break;
		case 20 :
		ret_value = 0;
		break;
		case 21 :
		ret_value = 0;
		break;
		case 22 :
		ret_value = 0;
		break;
		case 23 :
		ret_value = 0;
		break;
		case 24 :
		ret_value = 0;
		break;
		case 25 :
		ret_value = 0;
		break;
		case 26 :
		ret_value = 1;
		break;
		case 27 :
		ret_value = 0;
		break;
		case 28 :
		ret_value = 0;
		break;
		case 29 :
		ret_value = 0;
		break;
		case 30 :
		ret_value = 0;
		break;
		case 31 :
		ret_value = 0;
		break;
		case 32 :
		ret_value = 0;
		break;
		case 33 :
		ret_value = 0;
		break;
		case 34 :
		ret_value = 0;
		break;
		case 35 :
		ret_value = 1;
		break;
		case 36 :
		ret_value = 0;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 0;
		break;
		case 39 :
		ret_value = 0;
		break;
		case 40 :
		ret_value = 0;
		break;
		case 41 :
		ret_value = 0;
		break;
		case 42 :
		ret_value = 0;
		break;
		case 43 :
		ret_value = 0;
		break;
		case 44 :
		ret_value = 1;
		break;
		case 45 :
		ret_value = 0;
		break;
		case 46 :
		ret_value = 0;
		break;
		case 47 :
		ret_value = 0;
		break;
		case 48 :
		ret_value = 0;
		break;
		case 49 :
		ret_value = 0;
		break;
		case 50 :
		ret_value = 0;
		break;
		case 51 :
		ret_value = 0;
		break;
		case 52 :
		ret_value = 0;
		break;
		case 53 :
		ret_value = 1;
		break;
		case 54 :
		ret_value = 0;
		break;
		case 55 :
		ret_value = 0;
		break;
		case 56 :
		ret_value = 0;
		break;
		case 57 :
		ret_value = 0;
		break;
		case 58 :
		ret_value = 0;
		break;
		case 59 :
		ret_value = 0;
		break;
		case 60 :
		ret_value = 0;
		break;
		case 61 :
		ret_value = 0;
		break;
		case 62 :
		ret_value = 1;
		break;
		case 63 :
		ret_value = 0;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_q0_div9(ap_uint<2> d, ap_uint<4> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		break;
		case 1 :
		ret_value = 0;
		break;
		case 2 :
		ret_value = 0;
		break;
		case 3 :
		ret_value = 0;
		break;
		case 4 :
		ret_value = 0;
		break;
		case 5 :
		ret_value = 0;
		break;
		case 6 :
		ret_value = 0;
		break;
		case 7 :
		ret_value = 0;
		break;
		case 8 :
		ret_value = 0;
		break;
		case 9 :
		ret_value = 1;
		break;
		case 10 :
		ret_value = 1;
		break;
		case 11 :
		ret_value = 1;
		break;
		case 12 :
		ret_value = 1;
		break;
		case 13 :
		ret_value = 1;
		break;
		case 14 :
		ret_value = 1;
		break;
		case 15 :
		ret_value = 1;
		break;
		case 16 :
		ret_value = 1;
		break;
		case 17 :
		ret_value = 1;
		break;
		case 18 :
		ret_value = 0;
		break;
		case 19 :
		ret_value = 0;
		break;
		case 20 :
		ret_value = 0;
		break;
		case 21 :
		ret_value = 0;
		break;
		case 22 :
		ret_value = 0;
		break;
		case 23 :
		ret_value = 0;
		break;
		case 24 :
		ret_value = 0;
		break;
		case 25 :
		ret_value = 0;
		break;
		case 26 :
		ret_value = 0;
		break;
		case 27 :
		ret_value = 1;
		break;
		case 28 :
		ret_value = 1;
		break;
		case 29 :
		ret_value = 1;
		break;
		case 30 :
		ret_value = 1;
		break;
		case 31 :
		ret_value = 1;
		break;
		case 32 :
		ret_value = 1;
		break;
		case 33 :
		ret_value = 1;
		break;
		case 34 :
		ret_value = 1;
		break;
		case 35 :
		ret_value = 1;
		break;
		case 36 :
		ret_value = 0;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 0;
		break;
		case 39 :
		ret_value = 0;
		break;
		case 40 :
		ret_value = 0;
		break;
		case 41 :
		ret_value = 0;
		break;
		case 42 :
		ret_value = 0;
		break;
		case 43 :
		ret_value = 0;
		break;
		case 44 :
		ret_value = 0;
		break;
		case 45 :
		ret_value = 1;
		break;
		case 46 :
		ret_value = 1;
		break;
		case 47 :
		ret_value = 1;
		break;
		case 48 :
		ret_value = 1;
		break;
		case 49 :
		ret_value = 1;
		break;
		case 50 :
		ret_value = 1;
		break;
		case 51 :
		ret_value = 1;
		break;
		case 52 :
		ret_value = 1;
		break;
		case 53 :
		ret_value = 1;
		break;
		case 54 :
		ret_value = 0;
		break;
		case 55 :
		ret_value = 0;
		break;
		case 56 :
		ret_value = 0;
		break;
		case 57 :
		ret_value = 0;
		break;
		case 58 :
		ret_value = 0;
		break;
		case 59 :
		ret_value = 0;
		break;
		case 60 :
		ret_value = 0;
		break;
		case 61 :
		ret_value = 0;
		break;
		case 62 :
		ret_value = 0;
		break;
		case 63 :
		ret_value = 1;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_q1_div9(ap_uint<2> d, ap_uint<4> r_in) {
	ap_uint<1> ret_value;
	ap_uint<6> in;
	
	in = r_in.concat(d);
	switch (in){
		case 0 :
		ret_value = 0;
		break;
		case 1 :
		ret_value = 0;
		break;
		case 2 :
		ret_value = 0;
		break;
		case 3 :
		ret_value = 0;
		break;
		case 4 :
		ret_value = 0;
		break;
		case 5 :
		ret_value = 0;
		break;
		case 6 :
		ret_value = 0;
		break;
		case 7 :
		ret_value = 0;
		break;
		case 8 :
		ret_value = 0;
		break;
		case 9 :
		ret_value = 0;
		break;
		case 10 :
		ret_value = 0;
		break;
		case 11 :
		ret_value = 0;
		break;
		case 12 :
		ret_value = 0;
		break;
		case 13 :
		ret_value = 0;
		break;
		case 14 :
		ret_value = 0;
		break;
		case 15 :
		ret_value = 0;
		break;
		case 16 :
		ret_value = 0;
		break;
		case 17 :
		ret_value = 0;
		break;
		case 18 :
		ret_value = 1;
		break;
		case 19 :
		ret_value = 1;
		break;
		case 20 :
		ret_value = 1;
		break;
		case 21 :
		ret_value = 1;
		break;
		case 22 :
		ret_value = 1;
		break;
		case 23 :
		ret_value = 1;
		break;
		case 24 :
		ret_value = 1;
		break;
		case 25 :
		ret_value = 1;
		break;
		case 26 :
		ret_value = 1;
		break;
		case 27 :
		ret_value = 1;
		break;
		case 28 :
		ret_value = 1;
		break;
		case 29 :
		ret_value = 1;
		break;
		case 30 :
		ret_value = 1;
		break;
		case 31 :
		ret_value = 1;
		break;
		case 32 :
		ret_value = 1;
		break;
		case 33 :
		ret_value = 1;
		break;
		case 34 :
		ret_value = 1;
		break;
		case 35 :
		ret_value = 1;
		break;
		case 36 :
		ret_value = 0;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 0;
		break;
		case 39 :
		ret_value = 0;
		break;
		case 40 :
		ret_value = 0;
		break;
		case 41 :
		ret_value = 0;
		break;
		case 42 :
		ret_value = 0;
		break;
		case 43 :
		ret_value = 0;
		break;
		case 44 :
		ret_value = 0;
		break;
		case 45 :
		ret_value = 0;
		break;
		case 46 :
		ret_value = 0;
		break;
		case 47 :
		ret_value = 0;
		break;
		case 48 :
		ret_value = 0;
		break;
		case 49 :
		ret_value = 0;
		break;
		case 50 :
		ret_value = 0;
		break;
		case 51 :
		ret_value = 0;
		break;
		case 52 :
		ret_value = 0;
		break;
		case 53 :
		ret_value = 0;
		break;
		case 54 :
		ret_value = 1;
		break;
		case 55 :
		ret_value = 1;
		break;
		case 56 :
		ret_value = 1;
		break;
		case 57 :
		ret_value = 1;
		break;
		case 58 :
		ret_value = 1;
		break;
		case 59 :
		ret_value = 1;
		break;
		case 60 :
		ret_value = 1;
		break;
		case 61 :
		ret_value = 1;
		break;
		case 62 :
		ret_value = 1;
		break;
		case 63 :
		ret_value = 1;
		break;
	}
	return ret_value;
}

void lut_div9_chunk(ap_uint<2> d, ap_uint<4> r_in, ap_uint<2> (* q), ap_uint<4> (* r_out)) {
	(*r_out)[0] = lut_r0_div9(d, r_in);
	(*r_out)[1] = lut_r1_div9(d, r_in);
	(*r_out)[2] = lut_r2_div9(d, r_in);
	(*r_out)[3] = lut_r3_div9(d, r_in);
	(*q)[0] = lut_q0_div9(d, r_in);
	(*q)[1] = lut_q1_div9(d, r_in);
}

ap_uint<57> int_57_div9(ap_uint<57> in) {
	ap_uint<57> d;
	ap_uint<57> q;
	ap_uint<2> d_chunk;
	ap_uint<2> q_chunk;
	ap_uint<4> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(56, 56);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(56, 56) = q_chunk.range(0, 0);
	for(i = 27; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*2 + 1, i*2);
		lut_div9_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*2 + 1, i*2) = q_chunk;
		}
	}
	return q;
}

ap_uint<57> operator_int_57_div9(ap_uint<57> in) {
	return int_57_div9(in);
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

double operator_double_div9(double in) {
	{
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
		if (mant < 562949953421312)
			div_exp = 4;
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
			xf = xf + 4;
			new_mant = operator_int_57_div9(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}

