package util;

public class Calcul {
	
	public static long pow2(long exponent)
	{
		long res = 1;
		for (int i = 0; i < exponent; i++) {
			res *= 2;
		}
		return res;
	}
}
