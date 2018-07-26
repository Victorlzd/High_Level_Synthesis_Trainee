#include <iostream>
#include "ap_int.h"

ap_uint<32> operator_int_32_div273(ap_uint<32> in);
using namespace std;

int main(int argc, char const *argv[])
{
	int result=0;
	ap_uint<32> D; 
	ap_uint<32> q;
	ap_uint<32> q_test;
	
	for (int i = 0; i < 1000000; ++i)
	{
		D = i;
		q_test = D/273;
		q = operator_int_32_div273(D);
		if(q!=q_test)
		{
			cerr << "PROBLEME    D=" << D << endl;
			cout << "-------- PROBLEME --------" << endl;
			cout << "D = " << D << endl;
			cout << "Résultat attendu :" << endl;
			cout << "    q = " << q_test << endl;
			cout << "Résultat obtenu :" << endl;
			cout << "    q = " << q << endl;
			cout << "-------- FIN --------" << endl;
			cout << endl << endl;
		}
		
	}

	return result;
}