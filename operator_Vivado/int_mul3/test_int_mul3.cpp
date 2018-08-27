#include <iostream>
#include "ap_int.h"

ap_uint<32> int_32_mul3(ap_uint<32> in);
ap_uint<8> lut_mul3_chunk(ap_uint<6> in);
using namespace std;

int main(int argc, char const *argv[])
{
	int result=0;
	ap_uint<32> N; 

	ap_uint<32> res;

	ap_uint<32> res_test;
	
	for (int i = 100; i < 100000; ++i)
	{
		if(i%1000==0) cerr << "i = " << i << endl;
		N = i;
		res_test = N*3;
		res = int_32_mul3(N);
		if(res!=res_test)
		{
			cerr << "PROBLEME" << endl;
			cout << "-------- PROBLEME --------" << endl;
			cout << "N = " << N << endl;
			cout << "Résultat attendu :" << endl;
			cout << "    res = " << res_test << endl;
			cout << "Résultat obtenu :" << endl;
			cout << "    res = " << res << endl;
			cout << "-------- FIN --------" << endl;
			cout << endl << endl;
		}
		
	}

	return result;
}