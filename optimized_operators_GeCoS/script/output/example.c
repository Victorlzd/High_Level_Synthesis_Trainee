#include "optimized_operators.h"

int main();


int main() {
	float a;
	float b;
	float c;
	double d;
	long e;
	
	a = 1;
	d = 2;
	d = operator_double_div54(d);
	b = operator_float_div2(a);
	c = operator_float_div3(b);
	e = 12;
	e = operator_int_64_div9(e);
	e = operator_int_64_div3(e);
	a = operator_float_div9(a);
	b = operator_float_div8(c);
	c = operator_float_div6(b);
	if (b >= 2) {
		if (c < a) {
			a = a + 1;
			if (b == a) {
				a = operator_float_div2(c);
				if (c < a) {
					b = a + 3;
					if (c < 2) {
						a = operator_float_div2(b);
					} else {
						a = operator_float_div3(c);
					}
				} else {
					if (c == 3) {
						c = float_mul2(a);
						a = operator_int_64_div3(e);
					}
				}
			}
		} else {
			if (b == 3) {
				if (a <= 3) {
					c = b + 2;
				} else {
					if (c >= 4) {
						a = operator_float_div3(a);
						e = operator_int_64_div3(e);
					}
				}
			}
		}
	}
}

