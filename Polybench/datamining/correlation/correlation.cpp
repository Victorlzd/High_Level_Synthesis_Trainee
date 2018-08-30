/**
 * correlation.c: This file is part of the PolyBench/C 3.2 test suite.
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
/* Default data type is double, default size is 4000. */
#include "correlation.h"

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
ap_uint<8> lut_mul3_chunk(ap_uint<6> d);
ap_uint<56> int_56_mul3(ap_uint<56> in);
ap_uint<56> operator_int_56_mul6(ap_uint<56> in);
double operator_double_mul6(double in);


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
		d_chunk = d.range(i*3 + 2, i*3);
		lut_div5_chunk(d_chunk, r, &q_chunk, &r);
		q.range(i*3 + 2, i*3) = q_chunk;
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
		xf = xf + 2;
		new_mant = operator_int_56_div5(xf);
		if (exp == 2047) {
			new_mant = mant;
			new_exp = exp;
		}
		rebuild_double(s, new_exp, new_mant, &out);
		return out;
	}
}

ap_uint<8> lut_mul3_chunk(ap_uint<6> d) {
	ap_uint<8> out;
	ap_uint<1> q0[64] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
	ap_uint<1> q1[64] = {0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0};
	ap_uint<1> q2[64] = {0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1};
	ap_uint<1> q3[64] = {0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1};
	ap_uint<1> q4[64] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
	ap_uint<1> q5[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	ap_uint<1> q6[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	ap_uint<1> q7[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	
	out[0] = q0[d];
	out[1] = q1[d];
	out[2] = q2[d];
	out[3] = q3[d];
	out[4] = q4[d];
	out[5] = q5[d];
	out[6] = q6[d];
	out[7] = q7[d];
	return out;
}

ap_uint<56> int_56_mul3(ap_uint<56> in) {
	ap_uint<8> chunk_0_5;
	ap_uint<8> chunk_6_11;
	ap_uint<8> chunk_12_17;
	ap_uint<8> chunk_18_23;
	ap_uint<8> chunk_24_29;
	ap_uint<8> chunk_30_35;
	ap_uint<8> chunk_36_41;
	ap_uint<8> chunk_42_47;
	ap_uint<8> chunk_48_53;
	ap_uint<8> chunk_54_55;
	
	chunk_0_5 = lut_mul3_chunk(in.range(5, 0));
	chunk_6_11 = lut_mul3_chunk(in.range(11, 6));
	chunk_12_17 = lut_mul3_chunk(in.range(17, 12));
	chunk_18_23 = lut_mul3_chunk(in.range(23, 18));
	chunk_24_29 = lut_mul3_chunk(in.range(29, 24));
	chunk_30_35 = lut_mul3_chunk(in.range(35, 30));
	chunk_36_41 = lut_mul3_chunk(in.range(41, 36));
	chunk_42_47 = lut_mul3_chunk(in.range(47, 42));
	chunk_48_53 = lut_mul3_chunk(in.range(53, 48));
	chunk_54_55 = lut_mul3_chunk(in.range(54, 55));
	return 0 + ((ap_uint<56>)chunk_0_5 << 0) + ((ap_uint<56>)chunk_6_11 << 6) + ((ap_uint<56>)chunk_12_17 << 12) + ((ap_uint<56>)chunk_18_23 << 18) + ((ap_uint<56>)chunk_24_29 << 24) + ((ap_uint<56>)chunk_30_35 << 30) + ((ap_uint<56>)chunk_36_41 << 36) + ((ap_uint<56>)chunk_42_47 << 42) + ((ap_uint<56>)chunk_48_53 << 48) + ((ap_uint<56>)chunk_54_55 << 54);
}

ap_uint<56> operator_int_56_mul6(ap_uint<56> in) {
	return int_56_mul3(in) << 1;
}

double operator_double_mul6(double in) {
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
	if (mant > 6004799494772053)
		div_exp = 3;
	if (exp == 0) {
		xf = operator_int_56_mul6(xf);
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
				xf = operator_int_56_mul6(xf);
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



/* Array initialization. */
static
void init_array (int m,
		 int n,
		 DATA_TYPE *float_n,
		 DATA_TYPE POLYBENCH_2D(data,M,N,m,n))
{
  int i, j;

  *float_n = 1.2;

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      data[i][j] = ((DATA_TYPE) i*j) / M;
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int m,
		 DATA_TYPE POLYBENCH_2D(symmat,M,M,m,m))

{
  int i, j;

  for (i = 0; i < m; i++)
    for (j = 0; j < m; j++) {
      fprintf (stderr, DATA_PRINTF_MODIFIER, symmat[i][j]);
      if ((i * m + j) % 20 == 0) fprintf (stderr, "\n");
    }
  fprintf (stderr, "\n");
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
void kernel_correlation(int m, int n,
			DATA_TYPE float_n,
			DATA_TYPE POLYBENCH_2D(data,M,N,m,n),
			DATA_TYPE POLYBENCH_2D(symmat,M,M,m,m),
			DATA_TYPE POLYBENCH_1D(mean,M,m),
			DATA_TYPE POLYBENCH_1D(stddev,M,m))
{
  int i, j, j1, j2;

  DATA_TYPE eps = 0.1f;

#define sqrt_of_array_cell(x,j) sqrt(x[j])

#pragma scop
  /* Determine mean of column vectors of input data matrix */
  for (j = 0; j < 1000; j++)
    {
      mean[j] = 0.0;
      for (i = 0; i < 1000; i++)
	mean[j] += data[i][j];
      mean[j] /= 1.2;
    }

  /* Determine standard deviations of column vectors of data matrix. */
  for (j = 0; j < 1000; j++)
    {
      stddev[j] = 0.0;
      for (i = 0; i < 1000; i++)
	stddev[j] += (data[i][j] - mean[j]) * (data[i][j] - mean[j]);
      stddev[j] /= 1.2;
      stddev[j] = sqrt_of_array_cell(stddev, j);
      /* The following in an inelegant but usual way to handle
	 near-zero std. dev. values, which below would cause a zero-
	 divide. */
      stddev[j] = stddev[j] <= eps ? 1.0 : stddev[j];
    }

  /* Center and reduce the column vectors. */
  for (i = 0; i < 1000; i++)
    for (j = 0; j < 1000; j++)
      {
	data[i][j] -= mean[j];
	data[i][j] /= sqrt(1.2) * stddev[j];
      }

  /* Calculate the m * m correlation matrix. */
  for (j1 = 0; j1 < 1000-1; j1++)
    {
      symmat[j1][j1] = 1.0;
      for (j2 = j1+1; j2 < 1000; j2++)
	{
	  symmat[j1][j2] = 0.0;
	  for (i = 0; i < 1000; i++)
	    symmat[j1][j2] += (data[i][j1] * data[i][j2]);
	  symmat[j2][j1] = symmat[j1][j2];
	}
    }
  symmat[1000-1][1000-1] = 1.0;
#pragma endscop

}

void kernel_correlation_optimized(int m, int n,
			DATA_TYPE float_n,
			DATA_TYPE POLYBENCH_2D(data,M,N,m,n),
			DATA_TYPE POLYBENCH_2D(symmat,M,M,m,m),
			DATA_TYPE POLYBENCH_1D(mean,M,m),
			DATA_TYPE POLYBENCH_1D(stddev,M,m))
{
  int i, j, j1, j2;

  DATA_TYPE eps = 0.1f;

#define sqrt_of_array_cell(x,j) sqrt(x[j])

#pragma scop
  /* Determine mean of column vectors of input data matrix */
  for (j = 0; j < 1000; j++)
    {
      mean[j] = 0.0;
      for (i = 0; i < 1000; i++)
	mean[j] += data[i][j];
      mean[j] = operator_double_mul6(operator_double_div5(mean[j]));
    }

  /* Determine standard deviations of column vectors of data matrix. */
  for (j = 0; j < 1000; j++)
    {
      stddev[j] = 0.0;
      for (i = 0; i < 1000; i++)
	stddev[j] += (data[i][j] - mean[j]) * (data[i][j] - mean[j]);
      stddev[j] = operator_double_mul6(operator_double_div5(stddev[j]));
      stddev[j] = sqrt_of_array_cell(stddev, j);
      /* The following in an inelegant but usual way to handle
	 near-zero std. dev. values, which below would cause a zero-
	 divide. */
      stddev[j] = stddev[j] <= eps ? 1.0 : stddev[j];
    }

  /* Center and reduce the column vectors. */
  for (i = 0; i < 1000; i++)
    for (j = 0; j < 1000; j++)
      {
	data[i][j] -= mean[j];
	data[i][j] /= sqrt(1.2) * stddev[j];
      }

  /* Calculate the m * m correlation matrix. */
  for (j1 = 0; j1 < 1000-1; j1++)
    {
      symmat[j1][j1] = 1.0;
      for (j2 = j1+1; j2 < 1000; j2++)
	{
	  symmat[j1][j2] = 0.0;
	  for (i = 0; i < 1000; i++)
	    symmat[j1][j2] += (data[i][j1] * data[i][j2]);
	  symmat[j2][j1] = symmat[j1][j2];
	}
    }
  symmat[1000-1][1000-1] = 1.0;
#pragma endscop

}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = N;
  int m = M;

  /* Variable declaration/allocation. */
  DATA_TYPE float_n;
  POLYBENCH_2D_ARRAY_DECL(data,DATA_TYPE,M,N,m,n);
  POLYBENCH_2D_ARRAY_DECL(symmat,DATA_TYPE,M,M,m,m);
  POLYBENCH_1D_ARRAY_DECL(mean,DATA_TYPE,M,m);
  POLYBENCH_1D_ARRAY_DECL(stddev,DATA_TYPE,M,m);

  /* Initialize array(s). */
  init_array (m, n, &float_n, POLYBENCH_ARRAY(data));

  /* Start timer. */
  polybench_start_instruments;

  /* Run kernel. */
  kernel_correlation (m, n, float_n,
		      POLYBENCH_ARRAY(data),
		      POLYBENCH_ARRAY(symmat),
		      POLYBENCH_ARRAY(mean),
		      POLYBENCH_ARRAY(stddev));

  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  polybench_prevent_dce(print_array(m, POLYBENCH_ARRAY(symmat)));

  /* Be clean. */
  POLYBENCH_FREE_ARRAY(data);
  POLYBENCH_FREE_ARRAY(symmat);
  POLYBENCH_FREE_ARRAY(mean);
  POLYBENCH_FREE_ARRAY(stddev);

  return 0;
}
