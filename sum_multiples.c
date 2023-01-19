#include <stdio.h>

int sum_naturals(int n)
{
	return (n-1) * n / 2;
}

int sum_multiples(int n, int r)
{
	return sum_naturals(n) * r;
}

void test_sum_naturals(void)
{
	int x;
	scanf("%d", &x);
	int z = sum_naturals(x);
	printf("%d\n", z);
}

void test_sum_multiples (void)
{
	int r;
	int n;
	while(scanf("%d%d", &n, &r) !=EOF)
	{
		int z = sum_multiples(r, n);
		printf("%d\n", z);
	}
}
int main(void)
{
	//test_sum_naturals();
	test_sum_multiples();
	return 0;
}