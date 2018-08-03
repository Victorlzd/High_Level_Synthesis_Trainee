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
/* operator_int_64_div2 implements a division by 2 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div2(ap_uint<64> in);
long operator_long_div2(long in);
ap_uint<1> lut_r0_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_r1_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q0_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q1_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q2_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q3_div3(ap_uint<4> d, ap_uint<2> r_in);
void lut_div3_chunk(ap_uint<4> d, ap_uint<2> r_in, ap_uint<4> (* q), ap_uint<2> (* r_out));
/* int_64_div3 implements a division by 3 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> int_64_div3(ap_uint<64> in);
/* operator_int_64_div3 implements a division by 3 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div3(ap_uint<64> in);
long operator_long_div3(long in);
/* operator_int_64_div4 implements a division by 4 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div4(ap_uint<64> in);
long operator_long_div4(long in);
ap_uint<1> lut_r0_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_r1_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_r2_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q0_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q1_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q2_div5(ap_uint<3> d, ap_uint<3> r_in);
void lut_div5_chunk(ap_uint<3> d, ap_uint<3> r_in, ap_uint<3> (* q), ap_uint<3> (* r_out));
/* int_64_div5 implements a division by 5 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> int_64_div5(ap_uint<64> in);
/* operator_int_64_div5 implements a division by 5 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div5(ap_uint<64> in);
long operator_long_div5(long in);
/* int_63_div3 implements a division by 3 of the integer 63 bits in, optimized for Vivado HLS */
ap_uint<63> int_63_div3(ap_uint<63> in);
/* operator_int_64_div6 implements a division by 6 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div6(ap_uint<64> in);
long operator_long_div6(long in);
ap_uint<1> lut_r0_div7(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_r1_div7(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_r2_div7(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q0_div7(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q1_div7(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q2_div7(ap_uint<3> d, ap_uint<3> r_in);
void lut_div7_chunk(ap_uint<3> d, ap_uint<3> r_in, ap_uint<3> (* q), ap_uint<3> (* r_out));
/* int_64_div7 implements a division by 7 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> int_64_div7(ap_uint<64> in);
/* operator_int_64_div7 implements a division by 7 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div7(ap_uint<64> in);
long operator_long_div7(long in);
ap_uint<1> lut_r0_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r1_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r2_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r3_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_q0_div9(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_q1_div9(ap_uint<2> d, ap_uint<4> r_in);
void lut_div9_chunk(ap_uint<2> d, ap_uint<4> r_in, ap_uint<2> (* q), ap_uint<4> (* r_out));
/* int_64_div9 implements a division by 9 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> int_64_div9(ap_uint<64> in);
/* operator_int_64_div9 implements a division by 9 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div9(ap_uint<64> in);
long operator_long_div9(long in);
/* int_63_div5 implements a division by 5 of the integer 63 bits in, optimized for Vivado HLS */
ap_uint<63> int_63_div5(ap_uint<63> in);
/* operator_int_64_div10 implements a division by 10 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div10(ap_uint<64> in);
long operator_long_div10(long in);
ap_uint<1> lut_r0_div11(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r1_div11(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r2_div11(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_r3_div11(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_q0_div11(ap_uint<2> d, ap_uint<4> r_in);
ap_uint<1> lut_q1_div11(ap_uint<2> d, ap_uint<4> r_in);
void lut_div11_chunk(ap_uint<2> d, ap_uint<4> r_in, ap_uint<2> (* q), ap_uint<4> (* r_out));
/* int_64_div11 implements a division by 11 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> int_64_div11(ap_uint<64> in);
/* operator_int_64_div11 implements a division by 11 of the integer 64 bits in, optimized for Vivado HLS */
ap_uint<64> operator_int_64_div11(ap_uint<64> in);
long operator_long_div11(long in);
void decompose_double(double in, ap_uint<1> (* s), ap_uint<11> (* exp), ap_uint<52> (* mant));
/* operator_int_55_div1 implements a division by 1 of the integer 55 bits in, optimized for Vivado HLS */
ap_uint<55> operator_int_55_div1(ap_uint<55> in);
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
void rebuild_double(ap_uint<1> s, ap_uint<11> exp, ap_uint<52> mant, double * out);
double operator_double_div2(double in);
/* int_55_div3 implements a division by 3 of the integer 55 bits in, optimized for Vivado HLS */
ap_uint<55> int_55_div3(ap_uint<55> in);
/* operator_int_55_div3 implements a division by 3 of the integer 55 bits in, optimized for Vivado HLS */
ap_uint<55> operator_int_55_div3(ap_uint<55> in);
double operator_double_div3(double in);
/* operator_int_56_div1 implements a division by 1 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> operator_int_56_div1(ap_uint<56> in);
double operator_double_div4(double in);
/* int_56_div5 implements a division by 5 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> int_56_div5(ap_uint<56> in);
/* operator_int_56_div5 implements a division by 5 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> operator_int_56_div5(ap_uint<56> in);
double operator_double_div5(double in);
/* int_56_div3 implements a division by 3 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> int_56_div3(ap_uint<56> in);
/* operator_int_56_div3 implements a division by 3 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> operator_int_56_div3(ap_uint<56> in);
double operator_double_div6(double in);
/* int_56_div7 implements a division by 7 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> int_56_div7(ap_uint<56> in);
/* operator_int_56_div7 implements a division by 7 of the integer 56 bits in, optimized for Vivado HLS */
ap_uint<56> operator_int_56_div7(ap_uint<56> in);
double operator_double_div7(double in);
/* int_57_div9 implements a division by 9 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> int_57_div9(ap_uint<57> in);
/* operator_int_57_div9 implements a division by 9 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> operator_int_57_div9(ap_uint<57> in);
double operator_double_div9(double in);
/* int_57_div5 implements a division by 5 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> int_57_div5(ap_uint<57> in);
/* operator_int_57_div5 implements a division by 5 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> operator_int_57_div5(ap_uint<57> in);
double operator_double_div10(double in);
/* int_57_div11 implements a division by 11 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> int_57_div11(ap_uint<57> in);
/* operator_int_57_div11 implements a division by 11 of the integer 57 bits in, optimized for Vivado HLS */
ap_uint<57> operator_int_57_div11(ap_uint<57> in);
double operator_double_div11(double in);
void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant));
/* operator_int_26_div1 implements a division by 1 of the integer 26 bits in, optimized for Vivado HLS */
ap_uint<26> operator_int_26_div1(ap_uint<26> in);
float operator_float_div2(float in);
/* int_26_div3 implements a division by 3 of the integer 26 bits in, optimized for Vivado HLS */
ap_uint<26> int_26_div3(ap_uint<26> in);
/* operator_int_26_div3 implements a division by 3 of the integer 26 bits in, optimized for Vivado HLS */
ap_uint<26> operator_int_26_div3(ap_uint<26> in);
float operator_float_div3(float in);
/* operator_int_27_div1 implements a division by 1 of the integer 27 bits in, optimized for Vivado HLS */
ap_uint<27> operator_int_27_div1(ap_uint<27> in);
float operator_float_div4(float in);
/* int_27_div5 implements a division by 5 of the integer 27 bits in, optimized for Vivado HLS */
ap_uint<27> int_27_div5(ap_uint<27> in);
/* operator_int_27_div5 implements a division by 5 of the integer 27 bits in, optimized for Vivado HLS */
ap_uint<27> operator_int_27_div5(ap_uint<27> in);
float operator_float_div5(float in);
/* int_27_div3 implements a division by 3 of the integer 27 bits in, optimized for Vivado HLS */
ap_uint<27> int_27_div3(ap_uint<27> in);
/* operator_int_27_div3 implements a division by 3 of the integer 27 bits in, optimized for Vivado HLS */
ap_uint<27> operator_int_27_div3(ap_uint<27> in);
float operator_float_div6(float in);
/* int_27_div7 implements a division by 7 of the integer 27 bits in, optimized for Vivado HLS */
ap_uint<27> int_27_div7(ap_uint<27> in);
/* operator_int_27_div7 implements a division by 7 of the integer 27 bits in, optimized for Vivado HLS */
ap_uint<27> operator_int_27_div7(ap_uint<27> in);
float operator_float_div7(float in);
/* int_28_div9 implements a division by 9 of the integer 28 bits in, optimized for Vivado HLS */
ap_uint<28> int_28_div9(ap_uint<28> in);
/* operator_int_28_div9 implements a division by 9 of the integer 28 bits in, optimized for Vivado HLS */
ap_uint<28> operator_int_28_div9(ap_uint<28> in);
float operator_float_div9(float in);
/* int_28_div5 implements a division by 5 of the integer 28 bits in, optimized for Vivado HLS */
ap_uint<28> int_28_div5(ap_uint<28> in);
/* operator_int_28_div5 implements a division by 5 of the integer 28 bits in, optimized for Vivado HLS */
ap_uint<28> operator_int_28_div5(ap_uint<28> in);
float operator_float_div10(float in);
/* int_28_div11 implements a division by 11 of the integer 28 bits in, optimized for Vivado HLS */
ap_uint<28> int_28_div11(ap_uint<28> in);
/* operator_int_28_div11 implements a division by 11 of the integer 28 bits in, optimized for Vivado HLS */
ap_uint<28> operator_int_28_div11(ap_uint<28> in);
float operator_float_div11(float in);


ap_uint<64> operator_int_64_div2(ap_uint<64> in) {
	return in >> 1;
}

long operator_long_div2(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div2(in);
	}
}

ap_uint<1> lut_r0_div3(ap_uint<4> d, ap_uint<2> r_in) {
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
		ret_value = 0;
		break;
		case 4 :
		ret_value = 1;
		break;
		case 5 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 13 :
		ret_value = 1;
		break;
		case 14 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 22 :
		ret_value = 1;
		break;
		case 23 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 31 :
		ret_value = 1;
		break;
		case 32 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 40 :
		ret_value = 1;
		break;
		case 41 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 49 :
		ret_value = 1;
		break;
		case 50 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 58 :
		ret_value = 1;
		break;
		case 59 :
		ret_value = 0;
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

ap_uint<1> lut_r1_div3(ap_uint<4> d, ap_uint<2> r_in) {
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
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 12 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 21 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 30 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 39 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 48 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 57 :
		ret_value = 0;
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

ap_uint<1> lut_q0_div3(ap_uint<4> d, ap_uint<2> r_in) {
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
		ret_value = 1;
		break;
		case 4 :
		ret_value = 1;
		break;
		case 5 :
		ret_value = 1;
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
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 22 :
		ret_value = 1;
		break;
		case 23 :
		ret_value = 1;
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
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 40 :
		ret_value = 1;
		break;
		case 41 :
		ret_value = 1;
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
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 58 :
		ret_value = 1;
		break;
		case 59 :
		ret_value = 1;
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

ap_uint<1> lut_q1_div3(ap_uint<4> d, ap_uint<2> r_in) {
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
		ret_value = 1;
		break;
		case 7 :
		ret_value = 1;
		break;
		case 8 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 25 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 43 :
		ret_value = 1;
		break;
		case 44 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 61 :
		ret_value = 0;
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

ap_uint<1> lut_q2_div3(ap_uint<4> d, ap_uint<2> r_in) {
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
		ret_value = 0;
		break;
		case 25 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 36 :
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 1;
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
		ret_value = 1;
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

ap_uint<1> lut_q3_div3(ap_uint<4> d, ap_uint<2> r_in) {
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
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 1;
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
		ret_value = 1;
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
		ret_value = 0;
		break;
	}
	return ret_value;
}

void lut_div3_chunk(ap_uint<4> d, ap_uint<2> r_in, ap_uint<4> (* q), ap_uint<2> (* r_out)) {
	(*r_out)[0] = lut_r0_div3(d, r_in);
	(*r_out)[1] = lut_r1_div3(d, r_in);
	(*q)[0] = lut_q0_div3(d, r_in);
	(*q)[1] = lut_q1_div3(d, r_in);
	(*q)[2] = lut_q2_div3(d, r_in);
	(*q)[3] = lut_q3_div3(d, r_in);
}

ap_uint<64> int_64_div3(ap_uint<64> in) {
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
		lut_div3_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
}

ap_uint<64> operator_int_64_div3(ap_uint<64> in) {
	return int_64_div3(in);
}

long operator_long_div3(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div3(in);
	}
}

ap_uint<64> operator_int_64_div4(ap_uint<64> in) {
	return in >> 2;
}

long operator_long_div4(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div4(in);
	}
}

ap_uint<1> lut_r0_div5(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 0;
		break;
		case 6 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 12 :
		ret_value = 0;
		break;
		case 13 :
		ret_value = 1;
		break;
		case 14 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 19 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 26 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 31 :
		ret_value = 1;
		break;
		case 32 :
		ret_value = 0;
		break;
		case 33 :
		ret_value = 1;
		break;
		case 34 :
		ret_value = 0;
		break;
		case 35 :
		ret_value = 0;
		break;
		case 36 :
		ret_value = 1;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 51 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 57 :
		ret_value = 0;
		break;
		case 58 :
		ret_value = 1;
		break;
		case 59 :
		ret_value = 0;
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
		ret_value = 1;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_r1_div5(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 0;
		break;
		case 7 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 13 :
		ret_value = 1;
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
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 30 :
		ret_value = 0;
		break;
		case 31 :
		ret_value = 0;
		break;
		case 32 :
		ret_value = 1;
		break;
		case 33 :
		ret_value = 1;
		break;
		case 34 :
		ret_value = 0;
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
		ret_value = 1;
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
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 58 :
		ret_value = 1;
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
		ret_value = 1;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_r2_div5(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 19 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 25 :
		ret_value = 0;
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
		ret_value = 1;
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
		ret_value = 1;
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
		ret_value = 1;
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
		ret_value = 0;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_q0_div5(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 1;
		break;
		case 6 :
		ret_value = 1;
		break;
		case 7 :
		ret_value = 1;
		break;
		case 8 :
		ret_value = 1;
		break;
		case 9 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 16 :
		ret_value = 1;
		break;
		case 17 :
		ret_value = 1;
		break;
		case 18 :
		ret_value = 1;
		break;
		case 19 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
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
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 61 :
		ret_value = 0;
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

ap_uint<1> lut_q1_div5(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 1;
		break;
		case 19 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 28 :
		ret_value = 0;
		break;
		case 29 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 61 :
		ret_value = 0;
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

ap_uint<1> lut_q2_div5(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
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

void lut_div5_chunk(ap_uint<3> d, ap_uint<3> r_in, ap_uint<3> (* q), ap_uint<3> (* r_out)) {
	(*r_out)[0] = lut_r0_div5(d, r_in);
	(*r_out)[1] = lut_r1_div5(d, r_in);
	(*r_out)[2] = lut_r2_div5(d, r_in);
	(*q)[0] = lut_q0_div5(d, r_in);
	(*q)[1] = lut_q1_div5(d, r_in);
	(*q)[2] = lut_q2_div5(d, r_in);
}

ap_uint<64> int_64_div5(ap_uint<64> in) {
	ap_uint<64> d;
	ap_uint<64> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(63, 63);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(63, 63) = q_chunk.range(0, 0);
	for(i = 20; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div5_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<64> operator_int_64_div5(ap_uint<64> in) {
	return int_64_div5(in);
}

long operator_long_div5(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div5(in);
	}
}

ap_uint<63> int_63_div3(ap_uint<63> in) {
	ap_uint<63> d;
	ap_uint<63> q;
	ap_uint<4> d_chunk;
	ap_uint<4> q_chunk;
	ap_uint<2> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(62, 60);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(62, 60) = q_chunk.range(2, 0);
	for(i = 14; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
}

ap_uint<64> operator_int_64_div6(ap_uint<64> in) {
	return int_63_div3(in >> 1);
}

long operator_long_div6(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div6(in);
	}
}

ap_uint<1> lut_r0_div7(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 0;
		break;
		case 8 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 15 :
		ret_value = 1;
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
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 24 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 30 :
		ret_value = 0;
		break;
		case 31 :
		ret_value = 1;
		break;
		case 32 :
		ret_value = 0;
		break;
		case 33 :
		ret_value = 1;
		break;
		case 34 :
		ret_value = 0;
		break;
		case 35 :
		ret_value = 0;
		break;
		case 36 :
		ret_value = 1;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 0;
		break;
		case 40 :
		ret_value = 1;
		break;
		case 41 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 46 :
		ret_value = 0;
		break;
		case 47 :
		ret_value = 1;
		break;
		case 48 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 55 :
		ret_value = 0;
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

ap_uint<1> lut_r1_div7(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 0;
		break;
		case 12 :
		ret_value = 0;
		break;
		case 13 :
		ret_value = 1;
		break;
		case 14 :
		ret_value = 0;
		break;
		case 15 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 21 :
		ret_value = 0;
		break;
		case 22 :
		ret_value = 0;
		break;
		case 23 :
		ret_value = 1;
		break;
		case 24 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 29 :
		ret_value = 0;
		break;
		case 30 :
		ret_value = 1;
		break;
		case 31 :
		ret_value = 1;
		break;
		case 32 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 39 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 44 :
		ret_value = 1;
		break;
		case 45 :
		ret_value = 1;
		break;
		case 46 :
		ret_value = 0;
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
		ret_value = 1;
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

ap_uint<1> lut_r2_div7(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 1;
		break;
		case 12 :
		ret_value = 1;
		break;
		case 13 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 26 :
		ret_value = 1;
		break;
		case 27 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 40 :
		ret_value = 1;
		break;
		case 41 :
		ret_value = 1;
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
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 52 :
		ret_value = 0;
		break;
		case 53 :
		ret_value = 1;
		break;
		case 54 :
		ret_value = 1;
		break;
		case 55 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 61 :
		ret_value = 1;
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

ap_uint<1> lut_q0_div7(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 1;
		break;
		case 8 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 19 :
		ret_value = 0;
		break;
		case 20 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 1;
		break;
		case 40 :
		ret_value = 1;
		break;
		case 41 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 55 :
		ret_value = 1;
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

ap_uint<1> lut_q1_div7(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 55 :
		ret_value = 1;
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
		ret_value = 0;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_q2_div7(ap_uint<3> d, ap_uint<3> r_in) {
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
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 1;
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
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 55 :
		ret_value = 1;
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
		ret_value = 0;
		break;
	}
	return ret_value;
}

void lut_div7_chunk(ap_uint<3> d, ap_uint<3> r_in, ap_uint<3> (* q), ap_uint<3> (* r_out)) {
	(*r_out)[0] = lut_r0_div7(d, r_in);
	(*r_out)[1] = lut_r1_div7(d, r_in);
	(*r_out)[2] = lut_r2_div7(d, r_in);
	(*q)[0] = lut_q0_div7(d, r_in);
	(*q)[1] = lut_q1_div7(d, r_in);
	(*q)[2] = lut_q2_div7(d, r_in);
}

ap_uint<64> int_64_div7(ap_uint<64> in) {
	ap_uint<64> d;
	ap_uint<64> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(63, 63);
	lut_div7_chunk(d_chunk, r, &q_chunk, &r);
	q.range(63, 63) = q_chunk.range(0, 0);
	for(i = 20; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div7_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<64> operator_int_64_div7(ap_uint<64> in) {
	return int_64_div7(in);
}

long operator_long_div7(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div7(in);
	}
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

ap_uint<64> int_64_div9(ap_uint<64> in) {
	ap_uint<64> d;
	ap_uint<64> q;
	ap_uint<2> d_chunk;
	ap_uint<2> q_chunk;
	ap_uint<4> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 31; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*2 + 1, i*2);
		lut_div9_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*2 + 1, i*2) = q_chunk;
		}
	}
	return q;
}

ap_uint<64> operator_int_64_div9(ap_uint<64> in) {
	return int_64_div9(in);
}

long operator_long_div9(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div9(in);
	}
}

ap_uint<63> int_63_div5(ap_uint<63> in) {
	ap_uint<63> d;
	ap_uint<63> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 20; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div5_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<64> operator_int_64_div10(ap_uint<64> in) {
	return int_63_div5(in >> 1);
}

long operator_long_div10(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div10(in);
	}
}

ap_uint<1> lut_r0_div11(ap_uint<2> d, ap_uint<4> r_in) {
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
		ret_value = 1;
		break;
		case 10 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 19 :
		ret_value = 0;
		break;
		case 20 :
		ret_value = 1;
		break;
		case 21 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 28 :
		ret_value = 0;
		break;
		case 29 :
		ret_value = 1;
		break;
		case 30 :
		ret_value = 0;
		break;
		case 31 :
		ret_value = 1;
		break;
		case 32 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 0;
		break;
		case 40 :
		ret_value = 1;
		break;
		case 41 :
		ret_value = 0;
		break;
		case 42 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 47 :
		ret_value = 1;
		break;
		case 48 :
		ret_value = 0;
		break;
		case 49 :
		ret_value = 1;
		break;
		case 50 :
		ret_value = 0;
		break;
		case 51 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 57 :
		ret_value = 0;
		break;
		case 58 :
		ret_value = 1;
		break;
		case 59 :
		ret_value = 0;
		break;
		case 60 :
		ret_value = 1;
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

ap_uint<1> lut_r1_div11(ap_uint<2> d, ap_uint<4> r_in) {
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
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 16 :
		ret_value = 0;
		break;
		case 17 :
		ret_value = 1;
		break;
		case 18 :
		ret_value = 1;
		break;
		case 19 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 29 :
		ret_value = 1;
		break;
		case 30 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 35 :
		ret_value = 1;
		break;
		case 36 :
		ret_value = 1;
		break;
		case 37 :
		ret_value = 0;
		break;
		case 38 :
		ret_value = 0;
		break;
		case 39 :
		ret_value = 1;
		break;
		case 40 :
		ret_value = 1;
		break;
		case 41 :
		ret_value = 0;
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
		ret_value = 1;
		break;
		case 48 :
		ret_value = 0;
		break;
		case 49 :
		ret_value = 0;
		break;
		case 50 :
		ret_value = 1;
		break;
		case 51 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 56 :
		ret_value = 0;
		break;
		case 57 :
		ret_value = 1;
		break;
		case 58 :
		ret_value = 1;
		break;
		case 59 :
		ret_value = 0;
		break;
		case 60 :
		ret_value = 0;
		break;
		case 61 :
		ret_value = 1;
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

ap_uint<1> lut_r2_div11(ap_uint<2> d, ap_uint<4> r_in) {
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
		ret_value = 1;
		break;
		case 18 :
		ret_value = 1;
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
		ret_value = 1;
		break;
		case 28 :
		ret_value = 1;
		break;
		case 29 :
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 36 :
		ret_value = 0;
		break;
		case 37 :
		ret_value = 1;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 1;
		break;
		case 40 :
		ret_value = 1;
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
		ret_value = 0;
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
		ret_value = 0;
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
		ret_value = 0;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_r3_div11(ap_uint<2> d, ap_uint<4> r_in) {
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
		ret_value = 1;
		break;
		case 10 :
		ret_value = 1;
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
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 28 :
		ret_value = 0;
		break;
		case 29 :
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 34 :
		ret_value = 0;
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
		ret_value = 0;
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
		ret_value = 0;
		break;
		case 50 :
		ret_value = 0;
		break;
		case 51 :
		ret_value = 0;
		break;
		case 52 :
		ret_value = 1;
		break;
		case 53 :
		ret_value = 1;
		break;
		case 54 :
		ret_value = 1;
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

ap_uint<1> lut_q0_div11(ap_uint<2> d, ap_uint<4> r_in) {
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
		ret_value = 1;
		break;
		case 34 :
		ret_value = 1;
		break;
		case 35 :
		ret_value = 1;
		break;
		case 36 :
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 1;
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
		ret_value = 0;
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

ap_uint<1> lut_q1_div11(ap_uint<2> d, ap_uint<4> r_in) {
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
		ret_value = 1;
		break;
		case 37 :
		ret_value = 1;
		break;
		case 38 :
		ret_value = 1;
		break;
		case 39 :
		ret_value = 1;
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
		ret_value = 0;
		break;
	}
	return ret_value;
}

void lut_div11_chunk(ap_uint<2> d, ap_uint<4> r_in, ap_uint<2> (* q), ap_uint<4> (* r_out)) {
	(*r_out)[0] = lut_r0_div11(d, r_in);
	(*r_out)[1] = lut_r1_div11(d, r_in);
	(*r_out)[2] = lut_r2_div11(d, r_in);
	(*r_out)[3] = lut_r3_div11(d, r_in);
	(*q)[0] = lut_q0_div11(d, r_in);
	(*q)[1] = lut_q1_div11(d, r_in);
}

ap_uint<64> int_64_div11(ap_uint<64> in) {
	ap_uint<64> d;
	ap_uint<64> q;
	ap_uint<2> d_chunk;
	ap_uint<2> q_chunk;
	ap_uint<4> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 31; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*2 + 1, i*2);
		lut_div11_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*2 + 1, i*2) = q_chunk;
		}
	}
	return q;
}

ap_uint<64> operator_int_64_div11(ap_uint<64> in) {
	return int_64_div11(in);
}

long operator_long_div11(long in) {
	#pragma HLS latency max=1
	{
	return operator_int_64_div11(in);
	}
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
	#pragma HLS latency max=1
	{
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
		if (exp != 2047)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 2047) {
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
			if (exp != 0)
				xf.set(52);
			if (2 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 0;
			new_mant = operator_int_55_div1(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<55> int_55_div3(ap_uint<55> in) {
	ap_uint<55> d;
	ap_uint<55> q;
	ap_uint<4> d_chunk;
	ap_uint<4> q_chunk;
	ap_uint<2> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(54, 52);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(54, 52) = q_chunk.range(2, 0);
	for(i = 12; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
}

ap_uint<55> operator_int_55_div3(ap_uint<55> in) {
	return int_55_div3(in);
}

double operator_double_div3(double in) {
	#pragma HLS latency max=1
	{
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
		if (mant < 2251799813685248)
			div_exp = 2;
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
			xf = xf + 1;
			new_mant = operator_int_55_div3(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<56> operator_int_56_div1(ap_uint<56> in) {
	return in;
}

double operator_double_div4(double in) {
	#pragma HLS latency max=1
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
		if (mant < 0)
			div_exp = 3;
		if (exp != 2047)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 2047) {
			if (exp == 0)
				shift = 2;
			else
				if (div_exp >= exp)
					if (3 >= exp)
						shift = 3 - exp;
					else
						shift = exp - 3;
				else
					shift = div_exp - 2;
			if (exp != 0)
				xf.set(52);
			if (3 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 0;
			new_mant = operator_int_56_div1(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
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

double operator_double_div5(double in) {
	#pragma HLS latency max=1
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

ap_uint<56> int_56_div3(ap_uint<56> in) {
	ap_uint<56> d;
	ap_uint<56> q;
	ap_uint<4> d_chunk;
	ap_uint<4> q_chunk;
	ap_uint<2> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 13; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
}

ap_uint<56> operator_int_56_div3(ap_uint<56> in) {
	return int_56_div3(in);
}

double operator_double_div6(double in) {
	#pragma HLS latency max=1
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
		if (mant < 2251799813685248)
			div_exp = 3;
		if (exp != 2047)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 2047) {
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
			if (exp != 0)
				xf.set(52);
			if (2 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 1;
			new_mant = operator_int_56_div3(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<56> int_56_div7(ap_uint<56> in) {
	ap_uint<56> d;
	ap_uint<56> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(55, 54);
	lut_div7_chunk(d_chunk, r, &q_chunk, &r);
	q.range(55, 54) = q_chunk.range(1, 0);
	for(i = 17; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div7_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<56> operator_int_56_div7(ap_uint<56> in) {
	return int_56_div7(in);
}

double operator_double_div7(double in) {
	#pragma HLS latency max=1
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
		if (mant < 3377699720527872)
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
			xf = xf + 3;
			new_mant = operator_int_56_div7(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
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

double operator_double_div9(double in) {
	#pragma HLS latency max=1
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

ap_uint<57> int_57_div5(ap_uint<57> in) {
	ap_uint<57> d;
	ap_uint<57> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 18; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div5_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<57> operator_int_57_div5(ap_uint<57> in) {
	return int_57_div5(in);
}

double operator_double_div10(double in) {
	#pragma HLS latency max=1
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
		if (mant < 1125899906842624)
			div_exp = 4;
		if (exp != 2047)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 2047) {
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
			if (exp != 0)
				xf.set(52);
			if (2 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 2;
			new_mant = operator_int_57_div5(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<57> int_57_div11(ap_uint<57> in) {
	ap_uint<57> d;
	ap_uint<57> q;
	ap_uint<2> d_chunk;
	ap_uint<2> q_chunk;
	ap_uint<4> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(56, 56);
	lut_div11_chunk(d_chunk, r, &q_chunk, &r);
	q.range(56, 56) = q_chunk.range(0, 0);
	for(i = 27; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*2 + 1, i*2);
		lut_div11_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*2 + 1, i*2) = q_chunk;
		}
	}
	return q;
}

ap_uint<57> operator_int_57_div11(ap_uint<57> in) {
	return int_57_div11(in);
}

double operator_double_div11(double in) {
	#pragma HLS latency max=1
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
		if (mant < 1688849860263936)
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
			xf = xf + 5;
			new_mant = operator_int_57_div11(xf);
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}

void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant)) {
	fix_to_float conv;
	ap_uint<32> in_bits;
	
	conv.f = in;
	in_bits = conv.i;
	*s = in_bits[31];
	*exp = in_bits.range(30, 23);
	*mant = in_bits.range(22, 0);
}

ap_uint<26> operator_int_26_div1(ap_uint<26> in) {
	return in;
}

float operator_float_div2(float in) {
	#pragma HLS latency max=1
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
		if (mant < 0)
			div_exp = 2;
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
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
			if (exp != 0)
				xf.set(23);
			if (2 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 0;
			new_mant = operator_int_26_div1(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
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
		#pragma HLS unroll
		{
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
}

ap_uint<26> operator_int_26_div3(ap_uint<26> in) {
	return int_26_div3(in);
}

float operator_float_div3(float in) {
	#pragma HLS latency max=1
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
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
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
				xf.set(23);
			if (1 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 1;
			new_mant = operator_int_26_div3(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<27> operator_int_27_div1(ap_uint<27> in) {
	return in;
}

float operator_float_div4(float in) {
	#pragma HLS latency max=1
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<27> xf;
		float out;
		ap_uint<8> shift;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 2;
		xf = mant;
		if (mant < 0)
			div_exp = 3;
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
			if (exp == 0)
				shift = 2;
			else
				if (div_exp >= exp)
					if (3 >= exp)
						shift = 3 - exp;
					else
						shift = exp - 3;
				else
					shift = div_exp - 2;
			if (exp != 0)
				xf.set(23);
			if (3 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 0;
			new_mant = operator_int_27_div1(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<27> int_27_div5(ap_uint<27> in) {
	ap_uint<27> d;
	ap_uint<27> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 8; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div5_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<27> operator_int_27_div5(ap_uint<27> in) {
	return int_27_div5(in);
}

float operator_float_div5(float in) {
	#pragma HLS latency max=1
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<27> xf;
		float out;
		ap_uint<8> shift;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 2;
		xf = mant;
		if (mant < 2097152)
			div_exp = 3;
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
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
				xf.set(23);
			if (1 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 2;
			new_mant = operator_int_27_div5(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<27> int_27_div3(ap_uint<27> in) {
	ap_uint<27> d;
	ap_uint<27> q;
	ap_uint<4> d_chunk;
	ap_uint<4> q_chunk;
	ap_uint<2> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(26, 24);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(26, 24) = q_chunk.range(2, 0);
	for(i = 5; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
}

ap_uint<27> operator_int_27_div3(ap_uint<27> in) {
	return int_27_div3(in);
}

float operator_float_div6(float in) {
	#pragma HLS latency max=1
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<27> xf;
		float out;
		ap_uint<8> shift;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 2;
		xf = mant;
		if (mant < 4194304)
			div_exp = 3;
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
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
			if (exp != 0)
				xf.set(23);
			if (2 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 1;
			new_mant = operator_int_27_div3(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<27> int_27_div7(ap_uint<27> in) {
	ap_uint<27> d;
	ap_uint<27> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 8; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div7_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<27> operator_int_27_div7(ap_uint<27> in) {
	return int_27_div7(in);
}

float operator_float_div7(float in) {
	#pragma HLS latency max=1
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<27> xf;
		float out;
		ap_uint<8> shift;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 2;
		xf = mant;
		if (mant < 6291456)
			div_exp = 3;
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
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
				xf.set(23);
			if (1 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 3;
			new_mant = operator_int_27_div7(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<28> int_28_div9(ap_uint<28> in) {
	ap_uint<28> d;
	ap_uint<28> q;
	ap_uint<2> d_chunk;
	ap_uint<2> q_chunk;
	ap_uint<4> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 13; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*2 + 1, i*2);
		lut_div9_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*2 + 1, i*2) = q_chunk;
		}
	}
	return q;
}

ap_uint<28> operator_int_28_div9(ap_uint<28> in) {
	return int_28_div9(in);
}

float operator_float_div9(float in) {
	#pragma HLS latency max=1
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<28> xf;
		float out;
		ap_uint<8> shift;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 3;
		xf = mant;
		if (mant < 1048576)
			div_exp = 4;
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
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
				xf.set(23);
			if (1 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 4;
			new_mant = operator_int_28_div9(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<28> int_28_div5(ap_uint<28> in) {
	ap_uint<28> d;
	ap_uint<28> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(27, 27);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(27, 27) = q_chunk.range(0, 0);
	for(i = 8; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div5_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<28> operator_int_28_div5(ap_uint<28> in) {
	return int_28_div5(in);
}

float operator_float_div10(float in) {
	#pragma HLS latency max=1
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<28> xf;
		float out;
		ap_uint<8> shift;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 3;
		xf = mant;
		if (mant < 2097152)
			div_exp = 4;
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
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
			if (exp != 0)
				xf.set(23);
			if (2 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 2;
			new_mant = operator_int_28_div5(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<28> int_28_div11(ap_uint<28> in) {
	ap_uint<28> d;
	ap_uint<28> q;
	ap_uint<2> d_chunk;
	ap_uint<2> q_chunk;
	ap_uint<4> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 13; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*2 + 1, i*2);
		lut_div11_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*2 + 1, i*2) = q_chunk;
		}
	}
	return q;
}

ap_uint<28> operator_int_28_div11(ap_uint<28> in) {
	return int_28_div11(in);
}

float operator_float_div11(float in) {
	#pragma HLS latency max=1
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<28> xf;
		float out;
		ap_uint<8> shift;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		shift = 0;
		div_exp = 3;
		xf = mant;
		if (mant < 3145728)
			div_exp = 4;
		if (exp != 255)
			if (div_exp > exp)
				new_exp = 0;
			else
				new_exp = exp - div_exp;
		if (exp != 255) {
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
				xf.set(23);
			if (1 >= exp)
				xf = xf >> shift;
			else
				xf = xf << shift;
			xf = xf + 5;
			new_mant = operator_int_28_div11(xf);
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

