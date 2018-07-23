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
	
	public static int log2(int n)
	{
		int count = 0;
		
		while(n>=2)
		{
			n = n/2;
			count++;
		}
		
		return count;
	}
}
