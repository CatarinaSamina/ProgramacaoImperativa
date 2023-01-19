#include <stdio.h>

int sum_naturals(int n)
{
  return (n-1) * n / 2;
}

int sum_from_to(int x, int y)
{
	return sum_naturals(y) - sum_naturals(x) + y;
}

void test_sum_naturals (void)
{
  int x;
  scanf("%d", &x);
  int z = sum_naturals(x);
  printf("%d\n", z);
}

void test_sum_from_to (void)
{
	int x;
	int y;
	scanf("%d%d", &x, &y);
	int z = sum_from_to(x, y);
	printf("%d\n", z);
}
int main (void)
{
  //test_sum_naturals();
	test_sum_from_to();
  return 0;
}