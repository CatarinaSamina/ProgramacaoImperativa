#include <stdio.h>
#include <math.h>
#define my_imi 0.00315
#define desconto_um 0.10
#define desconto_dois 0.15
#define desconto_todos 0.20

double min(double x, double y)
{
  return x <= y ? x : y; 
}

int imi(double x, int y)
{
	int result;
	if (y == 0)
    result = floor(x * my_imi);
  else if (y == 1)
  {
	  result = floor(x * my_imi - min(80.0, (x * my_imi * desconto_um)));
  }
	else if (y == 2)
  {
	  result = floor(x * my_imi - min(80.0, (x * my_imi * desconto_dois)));
  }
  else
  {
    result = floor(x * my_imi - min(80.0, (x * my_imi * desconto_todos)));
  }
	return result;	
}

void test_imi(void)
{
  double x;
  int y;
  while(scanf("%lf%d", &x, &y) != EOF)
  {
    int z = imi(x,y);
    printf("%d\n", z);
  }
}

int main(void)
{
  test_imi();
  return 0;
}


