#include <iostream>
#include "ap_int.h"

ap_uint<13> int_13_div3(ap_uint<13> in);
using namespace std;

int main(int argc, char const *argv[])
{
	int result=0;
	ap_uint<13> D; 

	ap_uint<13> q;
	ap_uint<2> r_out;

	ap_uint<13> q_test; 
	ap_uint<2> r_out_test;
	
	for (int i = 0; i < 10; ++i)
	{
		D = i;
		q_test = D/3;
		q = int_13_div3(D);
		if(q!=q_test)
		{
			cout << "-------- PROBLEME --------" << endl;
			cout << "D = " << D << endl;
			cout << "Résultat attendu :" << endl;
			cout << "    q = " << q_test << endl;
			cout << "    r_out = " << r_out_test << endl;
			cout << "Résultat obtenu :" << endl;
			cout << "    q = " << q << endl;
			cout << "    r_out = " << r_out << endl;
			cout << "-------- FIN --------" << endl;
			cout << endl << endl;
		}
		
	}

	return result;
}