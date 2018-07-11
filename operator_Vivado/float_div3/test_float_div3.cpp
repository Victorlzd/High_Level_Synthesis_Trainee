#include <iostream>
#include "ap_int.h"

void recomposeFloat(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float* out);
void decomposeFloat(float in, ap_uint<1> * s, ap_uint<8> * exp, ap_uint<23> * mant);
void floatDiv3(float x, float* res);

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


    for (int i = 1; i < 2; ++i)
    {
    	s=i;
    	for (int j = 20; j < 21; ++j)
    	{
    		cerr << "exp = " << j << endl;
    		//if(j>1 && j<250) j+=10;
    		exp = j;
    		for (int k = 0; k < 8388608; k+=1000)
    		{
    			mant = k;

    			recomposeFloat(s,exp,mant,&f);
    			floatDiv3(f, &out);

    			if(f/3!=out && out==out) 
				{
					cerr << "PROBLEME" << endl;
					cout << "------------ Probleme -----------" << endl;
					cout << "depart : " << endl;
					cout << "   float = " << f << endl;
					cout << "   signe = " << s << endl;
					cout << "   exposant = " << exp << endl;
					cout << "   mantisse = " << mant << endl;

					decomposeFloat(f/3, &s_out, &exp_out, &mant_out);
					cout << "resultat attendu = " << endl;
					cout << "   float = " << f/3 << endl;
					cout << "   signe = " << s_out << endl;
					cout << "   exposant = " << exp_out << endl;
					cout << "   mantisse = " << mant_out << endl;

					decomposeFloat(out, &s_out, &exp_out, &mant_out);
					cout << "resultat obtenu = " << endl;
					cout << "   float = " << out << endl;
					cout << "   signe = " << s_out << endl;
					cout << "   exposant = " << exp_out << endl;
					cout << "   mantisse = " << mant_out << endl;
    				result = 1;
    			}
    		}
    	}
    }
	

	return result;
}