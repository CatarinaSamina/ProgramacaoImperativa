#include <stdio.h>

int blue (int x, int y)
{
  int result = 0;
	for (int i = 1; i <= x; i++)
  {
    if (i>y)
    {
       if (i%2 != 0)
      { 
        result += y;
      }
    }

    else if (i<=x)
    {
     if (i%2 != 0)
        {
        result += i*i-(i-1)*(i-1);
        }
    }
  }
  return result;
}
int yellow (int x, int y)
{
  return x*y - blue(x,y) ;
}

void test_azulejos(void)
{
  int x;
  int y;
  while (scanf("%d%d", &x, &y) !=EOF)
  {
    int z = blue(x,y);
    int w = yellow(x,y);
    printf("%d %d\n", z, w);
  }
}
int main(void)
{
	test_azulejos();
  return 0;
}