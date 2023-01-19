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

// ---------------------------------------------------------
// Problema A

  int bolas(const int *a, int n, int x)
{
  int result = 0;
  while (result < n && a[result] * x >= 0)
    result++;
  return result;
}

int penaltis(const int *a, int *b, int n)
{
  int result = 0;
  int i = 0;
  while (i < n)
  {
    int z = bolas(a+i, n-i, a[i]);
    i += z;
    b[result++] = z;
  }
  return result;
}


//---------------------------------------------------------
// Problema B

int bitonico(int *a, int n)
{
  int result = 0;
  int b[1000];
  int i;
  for (i=1;i<n-1;i++)
  {
    if ((a[i-1]<a[i] && a[i]>a[i+1]) || (a[i-1]>a[i] && a[i]<a[i+1]))
      b[result++]=1;
    b[result++]=0;
  }
  int x = ints_count(b,n,1);
  return x;
}

// --------------------
// Problema C


int days(const double *a, int n) 
{
  int result = 0;
  for (int i = 0;i<n;i++)
  {
    if (a[i] <= 0)
      result++;
  }
  return result;
}

int dezembro(const double *a, int n, int *b) 
{
  int result = 0;
  for (int i=0; i<n ;i+=31)
  {
    b[result++] = days(a+i, 31); 
  }

  return result;
}

int mes(int *b, int n)
{
  int result = 0;
  for (int i=0; i<n; i++)
    if (b[i] >= 3)
      result++;

  return result;
}

int total(int *b, int d)
{
  int result = 0;
  for (int i=d-1; (i >= 0) && (result == 0);i--)
    if ( b[i] >= 3 )
      result = i;

  return d - result;
}

// --------------------
void test_problem_A(void)
{
  int a[1000];
  int b[1000];
  int n = ints_get(a);
  int res = penaltis(a,b,n);
  ints_println_basic(b,res);
}
void test_problem_B(void)
{
int a[1000];
int n = ints_get(a);
int x = bitonico(a,n);
if (x == 0 || x == 1)
  printf("bitónico\n");
else
  printf("desordenado\n");
}


void test_problem_C(void)
{
  double a[3100];
  int n = doubles_get(a);
  int b[3100];
  int d = dezembro(a,n,b);
  int s = mes(b,d);
  int t = total(b,d);
  if ( s==0 )
    printf("%d\n",s);
  else
    printf("%d %d\n",s,t);
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
  else
    printf("%c Invalid option.\n", x);
  return 0;
}


