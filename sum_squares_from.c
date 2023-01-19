#include <stdio.h>

double sum_squares_from(double x, int n)
{
	return n==0 ? 0 : (x*x) + sum_squares_from(x+1, n-1);
}

double sum_squares(int n)
{
	return sum_squares_from(0, n);
}

void test_sum_squares_from(void)
{
	double x;
	int n;
	while (scanf("%lf%d", &x, &n) !=EOF)
	{
	double z = sum_squares_from(x, n);
	printf ("%f\n", z);
	}
}

void test_sum_squares(void)
{
	int n;
	while (scanf("%d", &n) !=EOF)
	{
	double z = sum_squares(n);
	printf ("%f\n", z);
	}
}

int main(void)
{
	//test_sum_squares_from();
	test_sum_squares();
	return 0;
}