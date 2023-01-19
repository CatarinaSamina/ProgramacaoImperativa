#include <stdio.h>
#include <math.h>

double sum_powers_from(double x, int n, double y)
{
	return n==0 ? 0 : pow(x,y) + sum_powers_from(x+1, n-1, y);
}

double sum_powers(int n, double y)
{
	return sum_powers_from(1,n,y);
}

double sum_inverses(int n)
{
	return sum_powers(n, -1);
}


double sum_inverses_squares(int n)
{
	return sum_powers(n, -2);
}

void test_sum_powers_from(void)
{
	double x;
	int n;
	double y;
	while (scanf("%lf%d%lf", &x, &n, &y) !=EOF)
	{
		double z = sum_powers_from(x, y, n);
		printf("%f\n", z);
	}
}

void test_sum_powers(void)
{
	int n;
	double y;
	while (scanf("%d%lf", &n, &y) !=EOF)
	{
		double z = sum_powers(n,y);
		printf("%f\n", z);
	}
}

void test_sum_inverses(void)
{
	int n;
	while(scanf("%d", &n) !=EOF)
	{
		double z = sum_inverses(n);
		printf("%f\n", z);
	}
}

void test_sum_inverses_squares(void)
{
	double n;
	while(scanf("%lf", &n) !=EOF)
	{
		double z = sum_inverses(n);
		double t = sum_inverses_squares(n);
		printf("%f\n%f\n", z, t);
		
	}
}

int main(void)
{
	//test_sum_powers_from();
	//test_sum_powers();
	//test_sum_inverses();
	test_sum_inverses_squares();
	return 0;
}