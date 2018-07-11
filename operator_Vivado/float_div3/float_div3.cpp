#include "ap_int.h"
using namespace std;

ap_uint<1> LUT_r1(ap_uint<4> D, ap_uint<2> r_in) 
//cette fonction décrit la LUT retournant le bit 1 du reste
{
    ap_uint<6> in = r_in.concat(D);

    switch(in)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 0;

        case 3:
            return 0;
        case 4:
            return 1;
        case 5:
            return 0;

        case 6:
            return 0;
        case 7:
            return 1;
        case 8:
            return 0;

        case 9:
            return 0;
        case 10:
            return 1;
        case 11:
            return 0;

        case 12:
            return 0;
        case 13:
            return 1;
        case 14:
            return 0;

        case 15:
            return 0;
        case 16:
            return 1;
        case 17:
            return 0;

        case 18:
            return 0;
        case 19:
            return 1;
        case 20:
            return 0;

        case 21:
            return 0;
        case 22:
            return 1;
        case 23:
            return 0;

        case 24:
            return 0;
        case 25:
            return 1;
        case 26:
            return 0;

        case 27:
            return 0;
        case 28:
            return 1;
        case 29:
            return 0;

        case 30:
            return 0;
        case 31:
            return 1;
        case 32:
            return 0;

        case 33:
            return 0;
        case 34:
            return 1;
        case 35:
            return 0;

        case 36:
            return 0;
        case 37:
            return 1;
        case 38:
            return 0;

        case 39:
            return 0;
        case 40:
            return 1;
        case 41:
            return 0;

        case 42:
            return 0;
        case 43:
            return 1;
        case 44:
            return 0;

        case 45:
            return 0;
        case 46:
            return 1;
        case 47:
            return 0;

        default:
            return 0;

    }
}

ap_uint<1> LUT_r2(ap_uint<4> D, ap_uint<2> r_in)
//cette fonction décrit la LUT retournant le bit 2 du reste
{
    ap_uint<6> in = r_in.concat(D);

    switch(in)
    {
        case 0:
            return 0;
        case 1:
            return 0;
        case 2:
            return 1;

        case 3:
            return 0;
        case 4:
            return 0;
        case 5:
            return 1;

        case 6:
            return 0;
        case 7:
            return 0;
        case 8:
            return 1;

        case 9:
            return 0;
        case 10:
            return 0;
        case 11:
            return 1;

        case 12:
            return 0;
        case 13:
            return 0;
        case 14:
            return 1;

        case 15:
            return 0;
        case 16:
            return 0;
        case 17:
            return 1;

        case 18:
            return 0;
        case 19:
            return 0;
        case 20:
            return 1;

        case 21:
            return 0;
        case 22:
            return 0;
        case 23:
            return 1;

        case 24:
            return 0;
        case 25:
            return 0;
        case 26:
            return 1;

        case 27:
            return 0;
        case 28:
            return 0;
        case 29:
            return 1;

        case 30:
            return 0;
        case 31:
            return 0;
        case 32:
            return 1;

        case 33:
            return 0;
        case 34:
            return 0;
        case 35:
            return 1;

        case 36:
            return 0;
        case 37:
            return 0;
        case 38:
            return 1;

        case 39:
            return 0;
        case 40:
            return 0;
        case 41:
            return 1;

        case 42:
            return 0;
        case 43:
            return 0;
        case 44:
            return 1;

        case 45:
            return 0;
        case 46:
            return 0;
        case 47:
            return 1;

        default:
            return 0;

    }
}

ap_uint<1> LUT_q1(ap_uint<4> D, ap_uint<2> r_in)
//cette fonction décrit la LUT retournant le bit 1 du quotient
{
    ap_uint<6> in = r_in.concat(D);

    switch(in)
    {
        case 0:
            return 0;
        case 1:
            return 0;
        case 2:
            return 0;

        case 3:
            return 1;
        case 4:
            return 1;
        case 5:
            return 1;

        case 6:
            return 0;
        case 7:
            return 0;
        case 8:
            return 0;

        case 9:
            return 1;
        case 10:
            return 1;
        case 11:
            return 1;

        case 12:
            return 0;
        case 13:
            return 0;
        case 14:
            return 0;

        case 15:
            return 1;
        case 16:
            return 1;
        case 17:
            return 1;

        case 18:
            return 0;
        case 19:
            return 0;
        case 20:
            return 0;

        case 21:
            return 1;
        case 22:
            return 1;
        case 23:
            return 1;

        case 24:
            return 0;
        case 25:
            return 0;
        case 26:
            return 0;

        case 27:
            return 1;
        case 28:
            return 1;
        case 29:
            return 1;

        case 30:
            return 0;
        case 31:
            return 0;
        case 32:
            return 0;

        case 33:
            return 1;
        case 34:
            return 1;
        case 35:
            return 1;

        case 36:
            return 0;
        case 37:
            return 0;
        case 38:
            return 0;

        case 39:
            return 1;
        case 40:
            return 1;
        case 41:
            return 1;

        case 42:
            return 0;
        case 43:
            return 0;
        case 44:
            return 0;

        case 45:
            return 1;
        case 46:
            return 1;
        case 47:
            return 1;

        default:
            return 0;

    }
}

ap_uint<1> LUT_q2(ap_uint<4> D, ap_uint<2> r_in)
//cette fonction décrit la LUT retournant le bit 2 du quotient
{
    ap_uint<6> in = r_in.concat(D);

    switch(in)
    {
        case 0:
            return 0;
        case 1:
            return 0;
        case 2:
            return 0;

        case 3:
            return 0;
        case 4:
            return 0;
        case 5:
            return 0;

        case 6:
            return 1;
        case 7:
            return 1;
        case 8:
            return 1;

        case 9:
            return 1;
        case 10:
            return 1;
        case 11:
            return 1;

        case 12:
            return 0;
        case 13:
            return 0;
        case 14:
            return 0;

        case 15:
            return 0;
        case 16:
            return 0;
        case 17:
            return 0;

        case 18:
            return 1;
        case 19:
            return 1;
        case 20:
            return 1;

        case 21:
            return 1;
        case 22:
            return 1;
        case 23:
            return 1;

        case 24:
            return 0;
        case 25:
            return 0;
        case 26:
            return 0;

        case 27:
            return 0;
        case 28:
            return 0;
        case 29:
            return 0;

        case 30:
            return 1;
        case 31:
            return 1;
        case 32:
            return 1;

        case 33:
            return 1;
        case 34:
            return 1;
        case 35:
            return 1;

        case 36:
            return 0;
        case 37:
            return 0;
        case 38:
            return 0;

        case 39:
            return 0;
        case 40:
            return 0;
        case 41:
            return 0;

        case 42:
            return 1;
        case 43:
            return 1;
        case 44:
            return 1;

        case 45:
            return 1;
        case 46:
            return 1;
        case 47:
            return 1;

        default:
            return 0;

    }
}

ap_uint<1> LUT_q3(ap_uint<4> D, ap_uint<2> r_in)
//cette fonction décrit la LUT retournant le bit 3 du quotient
{
    ap_uint<6> in = r_in.concat(D);

    switch(in)
    {
        case 0:
            return 0;
        case 1:
            return 0;
        case 2:
            return 0;

        case 3:
            return 0;
        case 4:
            return 0;
        case 5:
            return 0;

        case 6:
            return 0;
        case 7:
            return 0;
        case 8:
            return 0;

        case 9:
            return 0;
        case 10:
            return 0;
        case 11:
            return 0;

        case 12:
            return 1;
        case 13:
            return 1;
        case 14:
            return 1;

        case 15:
            return 1;
        case 16:
            return 1;
        case 17:
            return 1;

        case 18:
            return 1;
        case 19:
            return 1;
        case 20:
            return 1;

        case 21:
            return 1;
        case 22:
            return 1;
        case 23:
            return 1;

        case 24:
            return 0;
        case 25:
            return 0;
        case 26:
            return 0;

        case 27:
            return 0;
        case 28:
            return 0;
        case 29:
            return 0;

        case 30:
            return 0;
        case 31:
            return 0;
        case 32:
            return 0;

        case 33:
            return 0;
        case 34:
            return 0;
        case 35:
            return 0;

        case 36:
            return 1;
        case 37:
            return 1;
        case 38:
            return 1;

        case 39:
            return 1;
        case 40:
            return 1;
        case 41:
            return 1;

        case 42:
            return 1;
        case 43:
            return 1;
        case 44:
            return 1;

        case 45:
            return 1;
        case 46:
            return 1;
        case 47:
            return 1;

        default:
            return 0;

    }
}

ap_uint<1> LUT_q4(ap_uint<4> D, ap_uint<2> r_in)
//cette fonction décrit la LUT retournant le bit 4 du quotient
{
    ap_uint<6> in = r_in.concat(D);

    switch(in)
    {
        case 0:
            return 0;
        case 1:
            return 0;
        case 2:
            return 0;

        case 3:
            return 0;
        case 4:
            return 0;
        case 5:
            return 0;

        case 6:
            return 0;
        case 7:
            return 0;
        case 8:
            return 0;

        case 9:
            return 0;
        case 10:
            return 0;
        case 11:
            return 0;

        case 12:
            return 0;
        case 13:
            return 0;
        case 14:
            return 0;

        case 15:
            return 0;
        case 16:
            return 0;
        case 17:
            return 0;

        case 18:
            return 0;
        case 19:
            return 0;
        case 20:
            return 0;

        case 21:
            return 0;
        case 22:
            return 0;
        case 23:
            return 0;

        case 24:
            return 1;
        case 25:
            return 1;
        case 26:
            return 1;

        case 27:
            return 1;
        case 28:
            return 1;
        case 29:
            return 1;

        case 30:
            return 1;
        case 31:
            return 1;
        case 32:
            return 1;

        case 33:
            return 1;
        case 34:
            return 1;
        case 35:
            return 1;

        case 36:
            return 1;
        case 37:
            return 1;
        case 38:
            return 1;

        case 39:
            return 1;
        case 40:
            return 1;
        case 41:
            return 1;

        case 42:
            return 1;
        case 43:
            return 1;
        case 44:
            return 1;

        case 45:
            return 1;
        case 46:
            return 1;
        case 47:
            return 1;

        default:
            return 0;

    }
}

ap_uint<2> LUT_r(ap_uint<4> D, ap_uint<2> r_in)
//cette fonction regroupe les LUT du reste
{
    ap_uint<1> r1 = LUT_r1(D,r_in);
    ap_uint<1> r2 = LUT_r2(D,r_in);

    return r2.concat(r1);
}

ap_uint<4> LUT_q(ap_uint<4> D, ap_uint<2> r_in)
//cette fonction regroupe les LUT du quotient
{
    ap_uint<1> q1 = LUT_q1(D,r_in);
    ap_uint<1> q2 = LUT_q2(D,r_in);
    ap_uint<1> q3 = LUT_q3(D,r_in);
    ap_uint<1> q4 = LUT_q4(D,r_in);

    ap_uint<2> q43 = q4.concat(q3);
    ap_uint<2> q21 = q2.concat(q1);

    ap_uint<4> q = q43.concat(q21);

    return q;
}

void LUT_div3(ap_uint<4> D, ap_uint<2> r_in, ap_uint<4>* q, ap_uint<2>* r_out)
//cette fonction effectue la division euclidienne par 3 d'un groupe de 4 bits
{
    *r_out = LUT_r(D,r_in);
    *q = LUT_q(D,r_in);
}

void int_div3(ap_uint<26> xf, ap_uint<26>* mant)
// cette fonction iplémente une division euclidienne par 3 d'entier
{
    ap_uint<2> r=0;
    ap_uint<4> D_chunk=0;
    ap_uint<4> q_chunk=0;

    D_chunk = xf.range(25,22);
    LUT_div3(D_chunk, r, &q_chunk, &r);
    (*mant).range(25,22) = q_chunk;

    D_chunk = xf.range(21,18);
    LUT_div3(D_chunk, r, &q_chunk, &r);
    (*mant).range(21,18) = q_chunk;

    D_chunk = xf.range(17,14);
    LUT_div3(D_chunk, r, &q_chunk, &r);
    (*mant).range(17,14) = q_chunk;

    D_chunk = xf.range(13,10);
    LUT_div3(D_chunk, r, &q_chunk, &r);
    (*mant).range(13,10) = q_chunk;


    D_chunk = xf.range(9,6);
    LUT_div3(D_chunk, r, &q_chunk, &r);
    (*mant).range(9,6) = q_chunk;


    D_chunk = xf.range(5,2);
    LUT_div3(D_chunk, r, &q_chunk, &r);
    (*mant).range(5,2) = q_chunk;

    D_chunk = xf.range(1,0);
    LUT_div3(D_chunk, r, &q_chunk, &r);
    (*mant).range(1,0) = q_chunk.range(1,0);
}

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

void floatDiv3(float x, float* res){
    ap_uint<1> s;
    ap_uint<8> exp;
    ap_uint<23> mant;

    decomposeFloat(x, &s, &exp, &mant);
    ap_uint<8> new_exp=exp;
    ap_uint<26> new_mant=mant;

    if(exp!=255 && exp!=0) //on ne modifie pas l'exposant des sous-normaux et des infinis/NaN
    {
        if(mant[22] || exp==1) {
        // Si la mantisse est supérieure à 1.5 la division de celle-ci par la mantisse de 3 (1.5 donc)
        // donnera une mantisse valide (entre 1 et 2)
        // dans ce cas on réduit l'exposant de l'exposant de 3 soit 1
        // Si l'exposant est 1 on ne peut le diminuer de 2
            new_exp = exp-1;
        }else{
        // Sinon on va multiplier par 2 la mantisse pour obtenir une mantisse valide lors de la division
        // Il faut donc diminuer la mantisse de 2 et non 1 pour compenser et garder un résultat égal
            new_exp = exp-2;
        }
    }

    ap_uint<26> xf = mant;

    if(exp!=255){// On modifie pas la mantisse des infinis et des NaN

        if(exp!=0) xf.set(23); // Sauf pour les sous-normaux on ajoute le 1, non codé dans la mantisse

        if((mant[22] || exp==2) && exp != 0 && exp!=1)
            // On shift la mantisse de l'exposant de 3 soit 1 pour diviser par 3 et non 1.5
            // On ne shift pas les nombres d'exposant 1 ou 0 car dans ce cas le résultat est directement celui
            // de la division de la mantisse par 3 (l'exposant ne varie pas)
            // On plafonne le shift des nombres d'exposant 2 car leur exposant ne peut baisser que de 1
            xf = xf << 1;
        else if(exp!=0 && exp!=1)
            // Si la mantisse est inférieure à 1.5 on shift de 1 bit supplémentaire afin de retomber sur
            // une mantisse valable. Cette multiplication est compensé par la baisse de l'exposant réalisé ci-dessus
            xf = xf << 2;

        xf++; //On ajoute 1 pour ramener l'arrondi au plus proche à un arrondi à l'inférieur qui est gratuit

        int_div3
    (xf, &new_mant);
    }

    recomposeFloat(s, new_exp, new_mant, res);
}