#include <stdio.h>
#include <iostream>
#include "ap_int.h"
//#include <ap_cint.h>

void recomposeFloat(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float* out);
void multFloat2(float in, float* out);

using namespace std;

int main(int argc, char const *argv[])
{
	int result=0;
	float out;
	float f;
	/*float in[] = {0.0,-0.0,1.0,27.0, 12.3, 1.954395, 123.32, 134.342, 1.0/3.0, 1.0};
	multFloat2(1.0,&out);

	for (int i = 0; i < 10; ++i)
	{
		multFloat2(in[i],&out);
		if(out!=in[i]*2) compteur++;
	}*/

	ap_uint<1> s;
    ap_uint<8> exp;
    ap_uint<23> mant;

    for (int i = 0; i < 2; ++i)
    {
    	s=i;
    	for (int j = 0; j < 1; ++j)
    	{
    		if(j>1 && j<250) j+=10;
    		exp = j;
    		for (int k = 0; k < 8388608; k+=100)
    		{
    			mant = k;

    			recomposeFloat(s,exp,mant,&f);
    			multFloat2(f, &out);

    			if(f*2!=out && out==out) 
				{
					cout << "------------ Probleme -----------" << endl;
					cout << "signe = " << s << endl;
					cout << "exposant = " << exp << endl;
					cout << "mantisse = " << mant << endl;
					cout << "float = " << f << endl;
					cout << "resultat attendu = " << 2*f << endl;
					cout << "resultat obtenu = " << out << endl;
    				result = 1;
    			}
    		}
    	}
    }
	

	/*int compteur = 0;
	float a[] = {0.0,-0.0,1.0,27.0, 12.3, 1.954395, 123.32, 134.342, 1.0/3.0, 1.0};
	for (int i = 0; i < 10; ++i)
	{
		float temp;
		multFloat2(a[i],&temp);
		std::cout << a[i] << "   ===>>>   " << temp << std::endl;
		if(a[i]!=temp) compteur++;
	}*/
	

	return result;
}