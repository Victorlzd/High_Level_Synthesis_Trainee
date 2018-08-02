#include <ap_int.h>

ap_uint<1> lut_r0_div29(ap_uint<1> d, ap_uint<5> r_in);
ap_uint<1> lut_r1_div29(ap_uint<1> d, ap_uint<5> r_in);
ap_uint<1> lut_r2_div29(ap_uint<1> d, ap_uint<5> r_in);
ap_uint<1> lut_r3_div29(ap_uint<1> d, ap_uint<5> r_in);
ap_uint<1> lut_r4_div29(ap_uint<1> d, ap_uint<5> r_in);
ap_uint<1> lut_q0_div29(ap_uint<1> d, ap_uint<5> r_in);
void lut_div29_chunk(ap_uint<1> d, ap_uint<5> r_in, ap_uint<1> (* q), ap_uint<5> (* r_out));
/* int_32_div29 implements a division by 29 of the integer 32 bits in, optimized for Vivado HLS */
ap_uint<32> int_32_div29(ap_uint<32> in);
/* operator_int_32_div29 implements a division by 29 of the integer 32 bits in, optimized for Vivado HLS */
ap_uint<32> operator_int_32_div29(ap_uint<32> in);
int operator_int_div29(int in);


ap_uint<1> lut_r0_div29(ap_uint<1> d, ap_uint<5> r_in) {
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
		ret_value = 1;
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
		ret_value = 1;
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

ap_uint<1> lut_r1_div29(ap_uint<1> d, ap_uint<5> r_in) {
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
		ret_value = 1;
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
		ret_value = 1;
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
		ret_value = 0;
		break;
		case 63 :
		ret_value = 0;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_r2_div29(ap_uint<1> d, ap_uint<5> r_in) {
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
		ret_value = 1;
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
		ret_value = 1;
		break;
	}
	return ret_value;
}

ap_uint<1> lut_r3_div29(ap_uint<1> d, ap_uint<5> r_in) {
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

ap_uint<1> lut_r4_div29(ap_uint<1> d, ap_uint<5> r_in) {
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

ap_uint<1> lut_q0_div29(ap_uint<1> d, ap_uint<5> r_in) {
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
		ret_value = 0;
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

void lut_div29_chunk(ap_uint<1> d, ap_uint<5> r_in, ap_uint<1> (* q), ap_uint<5> (* r_out)) {
	(*r_out)[0] = lut_r0_div29(d, r_in);
	(*r_out)[1] = lut_r1_div29(d, r_in);
	(*r_out)[2] = lut_r2_div29(d, r_in);
	(*r_out)[3] = lut_r3_div29(d, r_in);
	(*r_out)[4] = lut_r4_div29(d, r_in);
	(*q)[0] = lut_q0_div29(d, r_in);
}

ap_uint<32> int_32_div29(ap_uint<32> in) {
	ap_uint<32> d;
	ap_uint<32> q;
	ap_uint<1> d_chunk;
	ap_uint<1> q_chunk;
	ap_uint<5> r;
	int i;
	
	r = 0;
	d = in;
	for(i = 31; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*1 + 0, i*1);
		lut_div29_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*1 + 0, i*1) = q_chunk;
		}
	}
	return q;
}

ap_uint<32> operator_int_32_div29(ap_uint<32> in) {
	return int_32_div29(in);
}

int operator_int_div29(int in) {
	return operator_int_32_div29(in);
}
