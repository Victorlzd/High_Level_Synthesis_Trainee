//#include <stdio.h>
//#include <ap_cint.h>
#include "ap_int.h"

ap_uint<1> top(ap_uint<4> a, ap_uint<2> b);

int main(int argc, char const *argv[])
{
	top(5,2);
	return 0;
}