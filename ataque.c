#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <limits.h>

// --------------------

int max(int x, int y)
{
  return x <= y ? y : x;
}

int min(int x, int y)
{
  return x <= y ? x : y;
}

int ints_get(int *a)
{
  int result = 0;
  int x;
  while (scanf("%d", &x) != EOF)
    a[result++] = x;
  return result;
}

int ints_init(int x, int n, int *a)
{
  int result = 0;
  for (int i = 0; i < n; i++)
    a[result++] = x;
  return result;
}

void ints_println_basic(const int *a, int n)
{
  if (n > 0)
  {
    printf("%d", a[0]);
    for (int i = 1; i < n; i++)  // i = 1
      printf(" %d", a[i]);
  }
  printf("\n");
}

int ints_count(const int *a, int n, int x)
{
  int result = 0;
  for (int i = 0; i < n; i++)
    if (a[i] == x)
      result++;
  return result;
}

int ints_sum(const int *a, int n)
{
  int result = 0;
  for (int i = 0; i < n; i++)
    result += a[i];
  return result;
}

int ints_max(const int *a, int n)
{
  int result = INT_MIN;
  for (int i = 0; i < n; i++)
    if (result < a[i])
      result = a[i];
  return result;
}

int ints_min(const int *a, int n)
{
  int result = INT_MAX;
  for (int i = 0; i < n; i++)
    if (result > a[i])
      result = a[i];
  return result;
}

int ints_equal_arrays(const int *a, const int n, const int *b, int m)
{
  int result = n == m;
  int i = 0;
  while (result && i < n)
    if (a[i] != b[i])
      result = 0;
    else
      i++;
  return result;
}

// --------------------

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

int doubles_count(const double *a, int n, int x)
{
  int result = 0;
  for (int i = 0; i < n; i++)
    if (a[i] == x)
      result++;
  return result;
}

double doubles_sum(const double *a, int n)
{
  double result = 0;
  for (int i = 0; i < n; i++)
    result += a[i];
  return result;
}

double doubles_max(const double *a, int n)
{
  double result = -INFINITY;
  for (int i = 0; i < n; i++)
    if (result < a[i])
      result = a[i];
  return result;
}

double doubles_min(const double *a, int n)
{
  double result = +INFINITY;
  for (int i = 0; i < n; i++)
    if (result > a[i])
      result = a[i];
  return result;
}

// --------------------
// Problema A

int int_cabazes(int *a, int n)
{
  int x = a[0];
  int result= 0;
  for (int i=1; i<n; i++)
  {
        int y=a[i]/x;
        result += y;
  }
  return result;
}

// --------------------
// Problema B

int int_golos(int *a, int n)
{
  int result= 0;
  for (int i=0; i<n; i++)
  {
    if( a[i]>=3)
        result ++;
  }
  return result;
}

int int_jogos(int *a, int n, int x, int *b)
{
int result = 0;
for (int i = 0; i<n; i+=x)
{
  int m = min(n-i,x);
  b[result++] = int_golos(a+i,m);
}
return result;
}

// --------------------
// Problema C

int subida(const double *a, int n)
{
  for (int i=n-1; i>1; i--)
  {
    if (a[i-1]<a[i])
      return i;
  }
  return -1;
}

int descida(const double*a, int n)
{
 for (int i=subida(a, n)+1; i<n; i++)
 {
  if (a[i-1]>a[i])
    return i;
 }
 return -1;
}

int gasolina(double *a, int n)
{
  if (subida(a, n) !=-1)
  {
    return descida(a,n);
  }
  return -1;
}

// --------------------
// Problema D

void janelas(double *a, int n, int *b)
{
  int result= 0;
  int result2= 0;
  int i;
  for (i=0; i<n; i+=2)
  {
    if( a[i]>a[i+1])
      b[0]= ++result;
    if( a[i]<=a[i+1])
      b[1]= ++result2;
    }
}

// --------------------
// Problema E

int montanha(double *a, int n, double *b)
{
  int result = 0;
  for (int i =0; i<n; i++)
  {
  if (i>0 && a[i] >=600.0 && a[i] >(a[i-1]*1.2) && ((n-1 == i) || a[i]>=a[i+1]))
  {
    b[result++] = a[i];
  }
  else
  {
    b[result++] = 0;
  }
}
return result;
}

// --------------------
// Problema F

int records(const int *a, int n, int *b)
{
  for (int i = 0; i < n; i+=2)
  {
    if (a[i] < 90)
    {
      b[a[i]] = 1;
    }
  }
  return 0;
}

// --------------------

void test_problem_A(void)
{
  int a[10000];
 int n=ints_get(a);
 int z= int_cabazes(a,n);
 printf("%d\n", z);
}

void test_problem_B(void)
{
  int x;
  int a[1000];
  scanf("%d", &x);
  int b[1000];
  int n = ints_get(a);
  int z = int_jogos(a,n,x,b);
  ints_println_basic(b,z);
}

void test_problem_C(void)
{
  double a[1000];
  int n = doubles_get(a);
  int z = gasolina(a,n); 
    if(z ==-1)
    {
      printf("void\n");
    }
    else
    {
      printf("%d\n",n-1-z);
    }
}

void test_problem_D(void)
{
  double a[1000];
  double n= doubles_get(a);
  int b[2];
  janelas(a,n,b);
  ints_println_basic(b,2);
}

void test_problem_E(void)
{
  double a[1000];
 double b[1000];
 int n = doubles_get(a);
 int z = montanha(a,n,b);
 doubles_println_basic(b,z);
}

void test_problem_F(void)
{
  int a[1000];
  int b[90];
  ints_init(0,90,b);
  int n = ints_get(a);
  records(a,n,b);
  int x = ints_count(b,90,0);
  printf("%d\n", x);
}



// --------------------

int main(int argc, char **argv)
{
  int x = 'A';
  if (argc > 1)
    x = *argv[1];
  if (x == 'A')
    test_problem_A();
  else if (x == 'B')
    test_problem_B();
  else if (x == 'C')
    test_problem_C();
  else if (x == 'D')
    test_problem_D();
  else if (x == 'E')
    test_problem_E();
  else if (x == 'F')
    test_problem_F();
  else
    printf("%c Invalid option.\n", x);
  return 0;
}