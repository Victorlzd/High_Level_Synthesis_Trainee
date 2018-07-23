//#include <stdio.h>
//#include "/home/duazel/Xilinx/Vivado/2018.1/include/gmp.h"
#include "ap_int.h"

ap_uint<1> top(ap_uint<4> a, ap_uint<2> b)
{
	ap_uint<6> c = b.concat(a);
	return c/3%2;
}

/*void top(float a, float* res)
{
	*res = a / 2.0;
}*/