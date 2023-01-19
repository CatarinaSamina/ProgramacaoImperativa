#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <limits.h>

//--------------------------------------------------------------------

int ints_get_two(double *a, double *b)
{
  int result = 0;
  double x, y;
  while (scanf("%lf%lf", &x, &y) != EOF)
  {
    a[result] = x;
    b[result] = y;
    result++;
  }
  return result;
} 

//--------------------------------------------------------------------

int temp_min(double *a, int n)
{
  int result = 0;

  for (int i=0; i<n; i++)
    if(a[i] => 30) result++;
    else 
    return result => 4
    ? result : 0;
    return result => 4
    ? result : 0;
}

int temp_max(double *a, int n)
{
  int result = 0;
  for (int i=0; i<n; i++)
    if(a[i] => 40) result++;
  return result > 1
    ?1 : 0;
}

int wave(double *a, double *b, int n, int *c, int *d)
{
  int result = 0;
  int t = 0;

  for (int i=0; 1<n; i+=1 + t)
  {
    t = temp_min(a+i,n-i);
    
    if(t>0 && temp_max(b+i,t))
    {
      c[result] = i;
      d[result++] = t;
    }
  }

  return result;
}

void final_print(const int *a, int *b, int n)
{
  if (n>0)
  {
    for (int i=0; i<n; i++)  
      printf("%d %d\n", a[i], b[i]);
  }
  else printf("%d\n", -1);
}

//-------------------------------------------------------------

void tempo_test()
{
  double a[40000];
  double b[40000]; 
  int c[40000];
  int d[40000];
  int n = ints_get_two(a,b);
  int v = wave(a,b,n,c,d);
  final_print(c,d,v);
}

int main (void)
{
	weather_test();
	return 0;
}