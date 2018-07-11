#include <stdio.h>
#include <iostream>
#include "ap_int.h"

void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant));
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
float float_div2(float in);

using namespace std;

int main(int argc, char const *argv[])
{
	int result=0;
	float out;
	float f;
	

	ap_uint<1> s;
    ap_uint<8> exp;
    ap_uint<23> mant;

    for (int i = 0; i < 1; ++i)
    {
    	s=i;
    	for (int j = 0; j < 256; ++j)
    	{	
    		//if(j>2 && j<250) j=254;
    		exp = j;
			cout << "j=" << j << endl;
    		for (int k = 8388607; k < 8388608; k+=1)
    		{
    			mant = k;

    			rebuild_float(s,exp,mant,&f);
    			out = float_div2(f);
    			float f2 = f/2.0;

    			if(f2!=out && out==out) 
				{
					cout << "------------ Probleme -----------" << endl;
					cout << "signe = " << s << endl;
					cout << "exposant = " << exp << endl;
					cout << "mantisse = " << mant << endl;
					cout << "float = " << f << endl;

					decompose_float(f2, &s, &exp, &mant);
					cout << "resultat attendu : "<< endl;
					cout << "    float = " <<  f2 << endl;
					cout << "    s = " <<  s << endl;
					cout << "    exp = " <<  exp << endl;
					cout << "    mant = " <<  mant << endl;

					decompose_float(out, &s, &exp, &mant);
					cout << "resultat obtenu = " << endl;
					cout << "    float = " <<  out << endl;
					cout << "    s = " <<  s << endl;
					cout << "    exp = " <<  exp << endl;
					cout << "    mant = " <<  mant << endl;
    				result = 1; 
    			}
    		}
    	}
    }
	

	return result;
}