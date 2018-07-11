#include "ap_int.h" 

typedef union {
  unsigned int i;
  float f;
} float_to_fix;

void decomposeFloat(float in, ap_uint<1> * s, ap_uint<8> * exp, ap_uint<23> * mant)
{
    float_to_fix conv;
    conv.f = in;
    ap_uint<32> in_bits = conv.i;

    *s = in_bits[31]; // Selection d'un bit comme dans un tableau
    *exp = in_bits.range(30,23); // Selection d'une plage de bits 
    *mant = in_bits.range(22,0);
}

void recomposeFloat(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float* out)
{
    float_to_fix conv;

    ap_uint<31> exp_plus_mant = exp.concat(mant); 
    ap_uint<32> res = s.concat(exp_plus_mant);

    conv.i = res;
    *out = conv.f;
}

void multFloat2(float in, float* out){
    ap_uint<1> s;
    ap_uint<8> exp;
    ap_uint<23> mant;
    
    decomposeFloat(in, &s, &exp, &mant);
    ap_uint<8> new_exp = exp;
    ap_uint<23> new_mant = mant;

    if(exp != 255 && (exp != 0 || mant[22])) //on exclut les infinis et les sub-normaux sans overflow
    {
        new_exp = exp+1;
    }

    if(exp == 254) // cas où on a un overflow vers l'infini
    {
        new_mant = 0;
    }else if (exp == 0) // cas des sub-normaux
    {
        new_mant = mant*2;
    }


    recomposeFloat(s, new_exp, new_mant, out);

}