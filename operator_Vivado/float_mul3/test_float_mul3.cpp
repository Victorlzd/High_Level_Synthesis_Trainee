#include <iostream>
#include "ap_int.h"

void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float* out);
void decompose_float(float in, ap_uint<1> * s, ap_uint<8> * exp, ap_uint<23> * mant);
float operator_float_mul23(float in);

using namespace std;

int main(int argc, char const *argv[])
{
	int result=0;
	float out;
	float f;

	ap_uint<1> s;
    ap_uint<8> exp;
    ap_uint<23> mant;

    ap_uint<1> s_out;
    ap_uint<8> exp_out;
    ap_uint<23> mant_out;


    for (int i = 0; i < 1; ++i)
    {
		int div = 23;
    	s=i;
    	for (int j = 1; j <= 1; ++j)
    	{
    		if(j>6 && j<240) j+=15;
			cerr << "exp = " << j << endl;
    		exp = j;
    		for (int k = 0; k < 8388608; k+=1000)
    		{
    			mant = k;

    			rebuild_float(s,exp,mant,&f);
    			out = operator_float_mul23(f);

    			if(f*div!=out && out==out) 
				{
					cerr << "PROBLEME" << endl;
					cout << "------------ Probleme -----------" << endl;
					cout << "depart : " << endl;
					cout << "   float = " << f << endl;
					cout << "   signe = " << s << endl;
					cout << "   exposant = " << exp << endl;
					cout << "   mantisse = " << mant << endl;

					decompose_float(f*div, &s_out, &exp_out, &mant_out);
					cout << "resultat attendu = " << endl;
					cout << "   float = " << f*div << endl;
					cout << "   signe = " << s_out << endl;
					cout << "   exposant = " << exp_out << endl;
					cout << "   mantisse = " << mant_out << endl;

					decompose_float(out, &s_out, &exp_out, &mant);
					cout << "resultat obtenu = " << endl;
					cout << "   float = " << out << endl;
					cout << "   signe = " << s_out << endl;
					cout << "   exposant = " << exp_out << endl;
					cout << "   mantisse = " << mant << endl;

					cout << "   diff_mantisse = " << mant - mant_out << endl;
    				result = 1;
    			}
    		}
    	}
    }
	

	return result;
}