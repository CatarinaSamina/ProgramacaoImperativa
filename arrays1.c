#include <stdio.h>
#include <math.h>

int doubles_get(double *a)
{
  int result = 0;
  double x;
  while (scanf("%lf", &x) != EOF)
    a[result++] = x;
  return result;
}

void doubles_println_basic(const double *a, int n)
{
  if (n > 0)
  {
    printf("%g", a[0]);
    for (int i = 1; i < n; i++)  // i = 1
      printf(" %g", a[i]);
  }
  printf("\n");
}

void doubles_println_bracket(const double *a, int n)
{
  printf("[");
  if (n > 0)
  {
    printf("%g", a[0]);
    for (int i = 1; i < n; i++)  // i = 1
      printf(" %g", a[i]);
  }
  printf("]\n");
}

int doubles_get_some(double *a, int n)
{
  int result = 0;
  double x;
  while (result < n && scanf("%lf", &x) != EOF)
    a[result++] = x;
  return result;
}

//------------------

int doubles_small(const double *a, int n, double x, double *b)
{
  int result= 0;
  int i;
  for (i=0; i<n; i++)
    {
      if (a[i]<x)
      {
        b[result++]=a[i];
      }
    }
  return result ;
}

int doubles_large(const double *a, int n, double x, double *b)
{
  int result= 0;
  for (int i=0; i<n; i++)
    {
      if (a[i]>x)
      {
        b[result++]=a[i];
      }
    }
  return result ;
}

int doubles_equal(const double *a, int n, double x, double *b)
{
  int result = 0;
  int i;
  for (i=0; i<n; i++)
    {
      if (a[i]==x)
      {
        b[result++]=a[i];
      }
    }
  return result ;
}

int doubles_append(const double *a, int n, const double *b, int m, double *c)
{
  int result = 0;
  for (int i=0; i<n; i++)
  {
    c[result++]=a[i];
  }
  for (int j=0; j<m; j++)
  {
    c[result++]=b[j];    
  }
  return result;
}

int doubles_take(const double *a, int n, int x, double *b)
{
  int result = 0;
  for (int i=0; i<x; i++)
  {
    if (x>n)
    {
      b[i]=a[i];
    }
    else 
    {
      b[result++]=a[i];
    }
  }
  return result;
}

int doubles_drop(const double *a, int n, int x, double *b)
{
  int result = 0;
  for (int i=x; i<n; i++)
  {
    if (x>n)
    {

    }
    else
    {
      b[result++]=a[i];
    }
  }
  return result;
}

int doubles_ascending(const double *a, int n, double *b)
{
  int result = 1;
  b[0] = a[0];
  if (n==0)
  {
    result = 0;
  }  
  for (int i = 1; i<n; i++)
  {

     if (a[i]>=b[result-1])
     {
      b[result++] = a[i];
     }
  }
  return result;
}

int doubles_accumulate(const double *a, int n, double *b)
{
  int result = 1;
  b [0] = 0;
  for(int i=0; i<n; i++)
  {
    b[i+1] = b[i] + a[i];
    result = n + 1;
  }
  return result;
}

int doubles_unaccumulate(const double *a, int n, double *b)
{
   int result=0;
  for (int i = 1; i<n; i++)
  {
    b[result] = a[i] - a[i-1];
    result++;
  }   
  return result;
}

int doubles_find_triple(const double *a, int n)
{
  for (int i = 0; i < n-2; i++)
    if (a[i]==a[i+1] && a[i]==a[i+2])
    {
      return i;
    }
  return -1;
}



// -------------------

void test_A(void)
{
  double x;
  scanf("%lf", &x);
  double a[1000];
  int n = doubles_get(a);
  double b1[1000];
  int m1 = doubles_large(a, n, x, b1);
  doubles_println_bracket(b1, m1);
  double b2[1000];
  int m2 = doubles_small(a, n, x, b2);
  doubles_println_bracket(b2, m2);
  double b3[1000];
  int m3 = doubles_equal(a, n, x, b3);
  doubles_println_bracket(b3, m3);
}

void test_B(void)
{
  double x1;
  scanf("%lf", &x1);
  double a1[1000];
  int n1 = doubles_get_some(a1, x1);
  double x2;
  scanf("%lf", &x2);
  double a2[1000];
  int n2 = doubles_get_some(a2, x2);
  double b[2000];
  int m = doubles_append(a1, n1, a2, n2, b);
  doubles_println_bracket(b, m);
}

void test_C(void)
{
  double x;
  scanf("%lf", &x);
  double a[1000];
  int n = doubles_get(a);
  double b1[1000];
  int m1 = doubles_take(a, n, x, b1);
  doubles_println_bracket(b1, m1);
  double b2[1000];
  int m2 = doubles_drop(a, n, x, b2);
  doubles_println_bracket(b2, m2);
}

void test_D(void)
{
  int x;
  while (scanf("%d", &x) != EOF)
  {
    double a[1000];
    int n = doubles_get_some(a, x);
    double b[1000];
    int m = doubles_ascending(a, n, b);
    doubles_println_bracket(b, m);
  }
}

void test_E(void)
{
  int x;
  while (scanf("%d", &x) != EOF)
  {
    double a[1000];
    int n = doubles_get_some(a, x);
    double b[1000];
    int m = doubles_accumulate(a, n, b);
    doubles_println_bracket(b, m);
  }
}

void test_F(void)
{
  int x;
  while (scanf("%d", &x) != EOF)
  {
    double a[1000];
    int n = doubles_get_some(a, x);
    double b[1000];
    int m = doubles_unaccumulate(a, n, b);
    doubles_println_bracket(b, m);
  }
}

void test_G(void)
{
  int x;
  while (scanf("%d", &x) != EOF)
  {
    double a[1000];
    int n = doubles_get_some(a, x);
    int z = doubles_find_triple(a, n);
    printf("%d\n", z);
  }
}

int main(int argc, char **argv)
{
  char x = 'A';
  if (argc > 1)
    x = *argv[1];
  if (x == 'A')
    test_A();
  else if (x == 'B')
    test_B();
  else if (x == 'C')
    test_C();
  else if (x == 'D')
    test_D();
  else if (x == 'E')
    test_E();
  else if (x == 'F')
    test_F();
  else if (x == 'G')
    test_G();
  else
    printf("Invalid option: %c.\n", x);
  return 0;
}