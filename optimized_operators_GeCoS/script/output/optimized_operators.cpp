#include <ap_int.h>

ap_uint<1> lut_r0_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_r1_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q0_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q1_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q2_div3(ap_uint<4> d, ap_uint<2> r_in);
ap_uint<1> lut_q3_div3(ap_uint<4> d, ap_uint<2> r_in);
void lut_div3_chunk(ap_uint<4> d, ap_uint<2> r_in, ap_uint<4> (* q), ap_uint<2> (* r_out));
/* int_31_div3 implements a division by 3 of the integer 31 bits in, optimized for Vivado HLS */
ap_uint<31> int_31_div3(ap_uint<31> in);
ap_uint<1> lut_r0_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_r1_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_r2_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q0_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q1_div5(ap_uint<3> d, ap_uint<3> r_in);
ap_uint<1> lut_q2_div5(ap_uint<3> d, ap_uint<3> r_in);
void lut_div5_chunk(ap_uint<3> d, ap_uint<3> r_in, ap_uint<3> (* q), ap_uint<3> (* r_out));
/* int_31_div5 implements a division by 5 of the integer 31 bits in, optimized for Vivado HLS */
ap_uint<31> int_31_div5(ap_uint<31> in);
/* operator_int_32_div30 implements a division by 30 of the integer 32 bits in, optimized for Vivado HLS */
ap_uint<32> operator_int_32_div30(ap_uint<32> in);


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

ap_uint<31> int_31_div3(ap_uint<31> in) {
	ap_uint<32> d;
	ap_uint<32> q;
	ap_uint<4> d_chunk;
	ap_uint<4> q_chunk;
	ap_uint<2> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(30, 28);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(30, 28) = q_chunk.range(2, 0);
	for(i = 6; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*4 + 3, i*4);
		lut_div3_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*4 + 3, i*4) = q_chunk;
		}
	}
	return q;
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

ap_uint<31> int_31_div5(ap_uint<31> in) {
	ap_uint<32> d;
	ap_uint<32> q;
	ap_uint<3> d_chunk;
	ap_uint<3> q_chunk;
	ap_uint<3> r;
	int i;
	
	r = 0;
	d = in;
	d_chunk = d.range(30, 30);
	lut_div5_chunk(d_chunk, r, &q_chunk, &r);
	q.range(30, 30) = q_chunk.range(0, 0);
	for(i = 9; i >= 0; i = i - 1) {
		#pragma HLS unroll
		{
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div5_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
		}
	}
	return q;
}

ap_uint<32> operator_int_32_div30(ap_uint<32> in) {
	return int_31_div5(int_31_div3(in >> 1));
}

