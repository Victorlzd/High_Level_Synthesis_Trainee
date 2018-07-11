#include <iostream>
#include "ap_int.h"

void test(ap_uint<4> D, ap_uint<2> r_in, ap_uint<4>* q, ap_uint<2>* r_out);
ap_uint<1> LUT_r1(ap_uint<4> D, ap_uint<2> r_in);
ap_uint<2> LUT_r(ap_uint<4> D, ap_uint<2> r_in);
ap_uint<4> LUT_q(ap_uint<4> D, ap_uint<2> r_in);
void LUT_div3(ap_uint<4> D, ap_uint<2> r_in, ap_uint<4>* q, ap_uint<2>* r_out);
void intDiv3(ap_uint<32> D, ap_uint<32>* q, ap_uint<2>* r);
using namespace std;

int main(int argc, char const *argv[])
{
	int result=0;
	ap_uint<32> D; 

	ap_uint<32> q;
	ap_uint<2> r_out;

	ap_uint<32> q_test; 
	ap_uint<2> r_out_test;
	
	//intDiv3(D, &q, &r_out);
	for (int i = 0; i < 10; ++i)
	{
		D = i;
		// q_test = D/3;
		// r_out_test = D%3;
		// LUT_r1(D,&q, &r_out);
		//if(q_test != q || r_out_test != r_out)
		if((D%3)%2!=LUT_r1(D,0))
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