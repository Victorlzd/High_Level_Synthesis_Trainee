#include <ap_int.h>

union fix_to_float {
	float f;
	unsigned int i;
};
typedef union fix_to_float fix_to_float;
void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant));
void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out);
float operator_float_mul23(float in);


void decompose_float(float in, ap_uint<1> (* s), ap_uint<8> (* exp), ap_uint<23> (* mant)) {
	fix_to_float conv;
	ap_uint<32> in_bits;
	
	conv.f = in;
	in_bits = conv.i;
	*s = in_bits[31];
	*exp = in_bits.range(30, 23);
	*mant = in_bits.range(22, 0);
}

void rebuild_float(ap_uint<1> s, ap_uint<8> exp, ap_uint<23> mant, float * out) {
	fix_to_float conv;
	ap_uint<31> exp_plus_mant;
	ap_uint<32> res;
	
	exp_plus_mant = exp.concat(mant);
	res = s.concat(exp_plus_mant);
	conv.i = res;
	*out = conv.f;
}

float operator_float_mul23(float in) {
	{
		ap_uint<1> s;
		ap_uint<8> exp;
		ap_uint<23> mant;
		ap_uint<8> new_exp;
		ap_uint<23> new_mant;
		ap_uint<29> xf;
		float out;
		ap_uint<5> clz;
		ap_uint<8> div_exp;
		
		decompose_float(in, &s, &exp, &mant);
		new_exp = exp;
		new_mant = mant;
		clz = 0;
		div_exp = 4;
		xf = mant;
		if (mant > 3282498)
			div_exp = 5;
		if (exp == 0) {
			xf = mant*23;
			clz = xf.countLeadingZeros();
			if (clz < 6) {
				new_exp = 6 - clz;
				new_mant = xf >> 5 - clz;
			} else
				new_mant = xf;
		} else {
			if (exp != 255)
				if (exp >= 255 - div_exp)
					new_mant = 0;
				else {
					xf.set(23);
					xf = xf*23;
					new_mant = xf >> div_exp;
					std::cout << "xf = " << std::hex << xf << std::dec << std::endl;
					std::cout << "new_mant_before = " << new_mant << std::endl;
					if(xf[div_exp-1]) new_mant++;
				}
			if (exp != 255)
				if (exp >= 255 - div_exp)
					new_exp = 255;
				else
					new_exp = exp + div_exp;
		}
		rebuild_float(s, new_exp, new_mant, &out);
		return out;
	}
}

