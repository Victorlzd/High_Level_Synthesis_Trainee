int main() {
	float a, b, c;
	double d;
	long e;

	a = 1;
	d = 2;
	d = d/54;
	b = a / 2;
	c = b / 3;
	e = 12;

	e = e / 9;
	e = e / 3;

	a = a/9;
	b = c/8;
	c = b/6;

	if (b >= 2) {
		if (c < a) {
			a = a + 1;
			if (b == a) {
				a = c / 2;
				if (c < a) {
					b = a + 3;
					if (c < 2) {
						a = b / 2;
					} else {
						a = c / 3;
					}
				} else {
					if (c == 3) {
						c = a * 2;
						a = e / 3;
					}
				}
			}
		} else {
			if (b == 3) {
				if (a <= 3) {
					c = b + 2;
				} else {
					if (c >= 4) {
						a = a / 3;
						e = e / 3;
					}
				}
			}
		}
	}
}
