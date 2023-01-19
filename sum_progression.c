#include <stdio.h>

int sum_naturals(int n)
{
	return (n-1) * n / 2;
}

int sum_multiples(int n, int r)
{
	return sum_naturals(n) * r; 
}

int sum_progression(int x0, int r, int n)
{
	return sum_multiples(n,r) + x0 * n;
}

void test_sum_naturals (void)
{
	int x;
	scanf("%d", &x);
	int z = sum_naturals(x);
	printf("%d\n", z);
}

void test_sum_multiples (void)
{
	int n;
	int r;
	scanf("%d%d", &n, &r);
	int z = sum_multiples(n, r);
	printf("%d", z);
}

void test_sum_progression (void)
{
	int x0;
	int n;
	int r;
	while(scanf("%d%d%d", &x0, &n, &r) !=EOF)
	{
		int z = sum_progression(x0, n, r);
		printf("%d\n", z);
	}
}

int main(void)
{
	test_sum_progression();
	return 0;
}