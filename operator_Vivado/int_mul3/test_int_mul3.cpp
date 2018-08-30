#include <iostream>
#include "ap_int.h"

ap_uint<28> operator_int_28_mul10(ap_uint<28> in);
using namespace std;

int main(int argc, char const *argv[])
{
	int result=0;
	ap_uint<32> N; 

	ap_uint<32> res;

	ap_uint<32> res_test;
	
	for (int i = 8388608; i <= 8388608; ++i)
	{
		if(i%100==0) cerr << "i = " << i << endl;
		N = i;
		res_test = N*10;
		res = operator_int_28_mul10(N);
		//if(res!=res_test)
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