#include <stdio.h>
#include <math.h>

double sum_powers_i(double n, double x)
{
	double result = 0.0;
	for (int i = 1; i <= n; i++)
		result += pow(i,x);
	return result;
}

double sum_inverses_i(double n)
{
	return sum_powers_i(n, -1);
}

double sum_inverses_squares_i(double n)
{
	return sum_powers_i(n, -2);
}

void test_sum_powers_i(void)
{
	double n;
	double x;
	while(scanf("%lf%lf", &n, &x) !=EOF)
	{
		double z = sum_powers_i(n,x);
		printf("%f\n", z);
	}
}

void test_sum_inverses_i(void)
{
	double n;
	while(scanf("%lf", &n) !=EOF)
	{
		double z = sum_inverses_i(n);
		printf("%f\n", z);
	}

}

void test_sum_inverses_squares_i(void)
{
	double n;
	while(scanf("%lf", &n) !=EOF)
	{
		double z = sum_inverses_i(n);
		double w = sum_inverses_squares_i(n);
		printf("%f\n%f\n", z, w);
	}
}

int main(void)
{
	//test_sum_powers_i();
	//test_sum_inverses_i();
	test_sum_inverses_squares_i();
	return 0;
}