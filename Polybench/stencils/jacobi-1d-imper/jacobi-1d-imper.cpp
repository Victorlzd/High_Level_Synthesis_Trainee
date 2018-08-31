/**
 * jacobi-1d-imper.c: This file is part of the PolyBench/C 3.2 test suite.
 *
 *
 * Contact: Louis-Noel Pouchet <pouchet@cse.ohio-state.edu>
 * Web address: http://polybench.sourceforge.net
 */
#include <stdio.h>
#include <unistd.h>
#include <math.h>

/* Include polybench common header. */
#include <polybench.h>

/* Include benchmark-specific header. */
/* Default data type is double, default size is 100x10000. */
#include "jacobi-1d-imper.h"

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
void lut_div3_chunk(ap_uint<4> d, ap_uint<2> r_in, ap_uint<4> (* q), ap_uint<2> (* r_out));
/* int_55_div3 implements a division by 3 of the integer 55 bits in, optimized for Vivado HLS */
ap_uint<55> int_55_div3(ap_uint<55> in);
/* operator_int_55_div3 implements a division by 3 of the integer 55 bits in, optimized for Vivado HLS */
ap_uint<55> operator_int_55_div3(ap_uint<55> in);
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
void rebuild_double(ap_uint<1> s, ap_uint<11> exp, ap_uint<52> mant, double * out);
double operator_double_div3(double in);


void decompose_double(double in, ap_uint<1> (* s), ap_uint<11> (* exp), ap_uint<52> (* mant)) {
	fix_to_double conv;
	ap_uint<64> in_bits;
	
	conv.d = in;
	in_bits = conv.l;
	*s = in_bits[63];
	*exp = in_bits.range(62, 52);
	*mant = in_bits.range(51, 0);
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
	d_chunk = d.range(51, 48);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(51, 48) = q_chunk;
	d_chunk = d.range(47, 44);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(47, 44) = q_chunk;
	d_chunk = d.range(43, 40);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(43, 40) = q_chunk;
	d_chunk = d.range(39, 36);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(39, 36) = q_chunk;
	d_chunk = d.range(35, 32);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(35, 32) = q_chunk;
	d_chunk = d.range(31, 28);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(31, 28) = q_chunk;
	d_chunk = d.range(27, 24);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(27, 24) = q_chunk;
	d_chunk = d.range(23, 20);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(23, 20) = q_chunk;
	d_chunk = d.range(19, 16);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(19, 16) = q_chunk;
	d_chunk = d.range(15, 12);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(15, 12) = q_chunk;
	d_chunk = d.range(11, 8);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(11, 8) = q_chunk;
	d_chunk = d.range(7, 4);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(7, 4) = q_chunk;
	d_chunk = d.range(3, 0);
	lut_div3_chunk(d_chunk, r, &q_chunk, &r);
	q.range(3, 0) = q_chunk;
	return q;
}

ap_uint<55> operator_int_55_div3(ap_uint<55> in) {
	return int_55_div3(in);
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

double operator_double_div3(double in) {
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
		xf = xf + 1;
		new_mant = operator_int_55_div3(xf);
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
		 DATA_TYPE POLYBENCH_1D(A,N,n),
		 DATA_TYPE POLYBENCH_1D(B,N,n))
{
  int i;

  for (i = 0; i < n; i++)
      {
	A[i] = ((DATA_TYPE) i+ 2) / n;
	B[i] = ((DATA_TYPE) i+ 3) / n;
      }
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
void kernel_jacobi_1d_imper(int tsteps,
			    int n,
			    DATA_TYPE POLYBENCH_1D(A,N,n),
			    DATA_TYPE POLYBENCH_1D(B,N,n))
{
  int t, i, j;

  for (t = 0; t < 100; t++)
#pragma scop
    {
      for (i = 1; i < 10000 - 1; i++){
		B[i] = (A[i-1] + A[i] + A[i + 1])/3;
	  }
	  for (j = 1; j < 10000 - 1; j++){
		A[j] = B[j];
	  }
    }
#pragma endscop

}

void kernel_jacobi_1d_imper_optimized(int tsteps,
			    int n,
			    DATA_TYPE POLYBENCH_1D(A,N,n),
			    DATA_TYPE POLYBENCH_1D(B,N,n))
{
  int t, i, j;

  for (t = 0; t < 100; t++)
#pragma scop
    {
      for (i = 1; i < 10000 - 1; i++){
		B[i] = operator_double_div3(A[i-1] + A[i] + A[i + 1]);
	  }
	  for (j = 1; j < 10000 - 1; j++){
		A[j] = B[j];
	  }
    }
#pragma endscop

}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = N;
  int tsteps = TSTEPS;

  /* Variable declaration/allocation. */
  POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, N, n);


  /* Initialize array(s). */
  init_array (n, POLYBENCH_ARRAY(A), POLYBENCH_ARRAY(B));

  /* Start timer. */
  //polybench_start_instruments;

  /* Run kernel. */
  kernel_jacobi_1d_imper (tsteps, n, POLYBENCH_ARRAY(A), POLYBENCH_ARRAY(B));

  /* Stop and print timer. */
  //polybench_stop_instruments;
  //polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  //polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(A)));

  /* Be clean. */
  //POLYBENCH_FREE_ARRAY(A);
  //POLYBENCH_FREE_ARRAY(B);

  return 0;
}
