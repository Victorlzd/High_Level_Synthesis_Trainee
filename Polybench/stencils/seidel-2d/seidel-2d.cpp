/**
 * seidel-2d.c: This file is part of the PolyBench/C 3.2 test suite.
 *
 *
 * Contact: Louis-Noel Pouchet <pouchet@cse.ohio-state.edu>
 * Web address: http://polybench.sourceforge.net
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/* Include polybench common header. */
#include <polybench.h>

/* Include benchmark-specific header. */
/* Default data type is double, default size is 20x1000. */
#include "seidel-2d.h"

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

void lut_div9_chunk(ap_uint<2> d, ap_uint<4> r_in, ap_uint<2> (* q), ap_uint<4> (* r_out)) {
	ap_uint<6> in;
	ap_uint<1> r0[64] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0};
	ap_uint<1> r1[64] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0};
	ap_uint<1> r2[64] = {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0};
	ap_uint<1> r3[64] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0};
	ap_uint<1> q0[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
	ap_uint<1> q1[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	
	in = r_in.concat(d);
	(*r_out)[0] = r0[in];
	(*r_out)[1] = r1[in];
	(*r_out)[2] = r2[in];
	(*r_out)[3] = r3[in];
	(*q)[0] = q0[in];
	(*q)[1] = q1[in];
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
	d_chunk = d.range(55, 54);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(55, 54) = q_chunk;
	d_chunk = d.range(53, 52);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(53, 52) = q_chunk;
	d_chunk = d.range(51, 50);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(51, 50) = q_chunk;
	d_chunk = d.range(49, 48);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(49, 48) = q_chunk;
	d_chunk = d.range(47, 46);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(47, 46) = q_chunk;
	d_chunk = d.range(45, 44);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(45, 44) = q_chunk;
	d_chunk = d.range(43, 42);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(43, 42) = q_chunk;
	d_chunk = d.range(41, 40);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(41, 40) = q_chunk;
	d_chunk = d.range(39, 38);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(39, 38) = q_chunk;
	d_chunk = d.range(37, 36);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(37, 36) = q_chunk;
	d_chunk = d.range(35, 34);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(35, 34) = q_chunk;
	d_chunk = d.range(33, 32);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(33, 32) = q_chunk;
	d_chunk = d.range(31, 30);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(31, 30) = q_chunk;
	d_chunk = d.range(29, 28);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(29, 28) = q_chunk;
	d_chunk = d.range(27, 26);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(27, 26) = q_chunk;
	d_chunk = d.range(25, 24);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(25, 24) = q_chunk;
	d_chunk = d.range(23, 22);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(23, 22) = q_chunk;
	d_chunk = d.range(21, 20);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(21, 20) = q_chunk;
	d_chunk = d.range(19, 18);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(19, 18) = q_chunk;
	d_chunk = d.range(17, 16);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(17, 16) = q_chunk;
	d_chunk = d.range(15, 14);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(15, 14) = q_chunk;
	d_chunk = d.range(13, 12);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(13, 12) = q_chunk;
	d_chunk = d.range(11, 10);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(11, 10) = q_chunk;
	d_chunk = d.range(9, 8);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(9, 8) = q_chunk;
	d_chunk = d.range(7, 6);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(7, 6) = q_chunk;
	d_chunk = d.range(5, 4);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(5, 4) = q_chunk;
	d_chunk = d.range(3, 2);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(3, 2) = q_chunk;
	d_chunk = d.range(1, 0);
	lut_div9_chunk(d_chunk, r, &q_chunk, &r);
	q.range(1, 0) = q_chunk;
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
			xf.set(52);
		xf = xf + 4;
		new_mant = operator_int_57_div9(xf);
		if (exp == 2047) {
			new_mant = mant;
			new_exp = exp;
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}



/* Array initialization. */
static
void init_array (int n,
		 DATA_TYPE POLYBENCH_2D(A,N,N,n,n))
{
  int i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      A[i][j] = ((DATA_TYPE) i*(j+2) + 2) / n;
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
void kernel_seidel_2d(int tsteps,
		      int n,
		      DATA_TYPE POLYBENCH_2D(A,N,N,n,n))
{
  int t, i, j;

#pragma scop
  for (t = 0; t <= 20 - 1; t++)
    for (i = 1; i<= 1000 - 2; i++)
      for (j = 1; j <= 1000 - 2; j++)
	A[i][j] = (A[i-1][j-1] + A[i-1][j] + A[i-1][j+1]
		   + A[i][j-1] + A[i][j] + A[i][j+1]
		   + A[i+1][j-1] + A[i+1][j] + A[i+1][j+1])/9.0;
#pragma endscop

}

/* Main computational kernel. The whole function will be timed,
   including the call and return. */
void kernel_seidel_2d_optimized(int tsteps,
		      int n,
		      DATA_TYPE POLYBENCH_2D(A,N,N,n,n))
{
  int t, i, j;

#pragma scop
  for (t = 0; t <= 20 - 1; t++)
    for (i = 1; i<= 1000 - 2; i++)
      for (j = 1; j <= 1000 - 2; j++)
	A[i][j] = operator_double_div9(A[i-1][j-1] + A[i-1][j] + A[i-1][j+1]
		   + A[i][j-1] + A[i][j] + A[i][j+1]
		   + A[i+1][j-1] + A[i+1][j] + A[i+1][j+1]);
#pragma endscop

}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = N;
  int tsteps = TSTEPS;

  /* Variable declaration/allocation. */
  POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, N, N, n, n);


  /* Initialize array(s). */
  init_array (n, POLYBENCH_ARRAY(A));

  /* Start timer. */
  polybench_start_instruments;

  /* Run kernel. */
  kernel_seidel_2d (tsteps, n, POLYBENCH_ARRAY(A));

  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;


  /* Be clean. */
  POLYBENCH_FREE_ARRAY(A);

  return 0;
}
