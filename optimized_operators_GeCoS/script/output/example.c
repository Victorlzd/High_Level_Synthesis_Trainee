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
	d = double_mul2(double_mul2(d));
	d = double_div3(double_div3(double_div3(double_div2(d))));
	b = float_div2(a);
	c = float_div3(b);
	a = float_mul2(b);
	c = float_mul2(c);
	e = 12;
	e = long_div3(long_div3(e));
	e = long_div3(e);
	a = float_div3(float_div3(a));
	b = float_div2(float_div2(float_div2(c)));
	c = float_div3(float_div2(b));
	if (b >= 2) {
		if (c < a) {
			a = a + 1;
			if (b == a) {
				a = float_div2(c);
				if (c < a) {
					b = a + 3;
					if (c < 2) {
						a = float_div2(b);
					} else {
						a = float_div3(c);
					}
				} else {
					if (c == 3) {
						c = float_mul2(a);
						a = long_div3(e);
					}
				}
			}
		} else {
			if (b == 3) {
				if (a <= 3) {
					c = b + 2;
				} else {
					if (c >= 4) {
						a = float_div3(a);
						e = long_div3(e);
					}
				}
			}
		}
	}
}

