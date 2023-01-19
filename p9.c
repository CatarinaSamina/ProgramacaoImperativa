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


//---------------------------------------------------------
// Problema B

void ints_exchange(int *a, int x, int y) 
{
  a[x] = a[y];
  a[y] = m;
}

void ints_sort_last(int *a, int n) 
{
  int i = n-1;
  while (i > 0 && a[i-1] > a[i])
  {
    ints_exchange(a, i-1, i);
    i--;
  }
}

int ints_insert(int *a, int n, int x) 
{
  int result = n;
  a[result++] = x;
  ints_sort_last(a, result);
  return result;
}


int voos(int *a, int n, int *b)
{
  int result = 0;
  int b = 0;
  for (int i=0; i<n; i++)
    if (a[i] = ints_insert(a,result))
    b[i] = a[i+1] - a[i];
  return result;
}

int total(int *b, int n)
{
  for (int i=0; i<n; i++)
    result = ints_max(b,n);
  return result;
}




// --------------------
// Problema C

// --------------------
void test_problem_A(void)
{
}
void test_problem_B(void)
{
  int x;
  int y;
  int a = [1000];
  int b = [1000];
  int n = ints_get(a);
  int res = total(x,y,a,b,n);
  ints_println_basic(b,n);
}


void test_problem_C(void)
{
}
/
/ --------------------

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











