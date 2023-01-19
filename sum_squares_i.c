#include <stdio.h>
#include <math.h>

double sum_squares_i(int n)
{
	double result = 0.0;
	for (int i = 0; i < n; i++)
	{
		result += i*i;
	}
	return result;
}

void test_sum_squares_i(void)
{
	int n;
	while (scanf("%d", &n) !=EOF)
	{
		double result = sum_squares_i(n);
		printf("%f\n", result);
	}
}

int main(void)
{
	test_sum_squares_i();
	return 0;
}