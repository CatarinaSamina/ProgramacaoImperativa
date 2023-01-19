#include <stdio.h>

int sum_naturals(int n)
{
  return (n-1) * n / 2;
}

void test_sum_naturals(void)
{
  int x;
  scanf("%d", &x);
  int z = sum_naturals(x);
  printf("%d\n", z);
}

int main(void)
{
  test_sum_naturals();
  return 0;
}