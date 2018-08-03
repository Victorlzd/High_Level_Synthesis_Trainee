int test(int a)
{
	#pragma HLS LATENCY max=1
	return a/2;
}