#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <limits.h>
#include <string.h>

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



// --------------------
// Problema B

// --------------------
// Problema C


// --------------------
// Problema D


// --------------------
// Problema E

int temp_min(double *a, int n)
{
  int result = 0;

  for (int i = 0; i < n; i++)
    if(a[i] >= 30) result++;
    else 
    return result >= 4
    ? result : 0;
    return result >= 4
    ? result : 0;
}

int temp_max(double *a, int n)
{
  int result = 0;
  for (int i = 0; i < n; i++)
    if(a[i] >= 40) result++;
  return result > 1
    ?1 : 0;
}

int wave(double *a, double *b, int n, int *c, int *d)
{
  int result = 0;
  int t = 0;

  for (int i = 0; i < n; i+= 1 + t)
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
    for (int i = 0; i < n; i++)  
      printf("%d %d\n", a[i], b[i]);
  }
  else printf("%d\n", -1);
}



// --------------------
// Problema D


// --------------------

void test_problem_A(void)
{
}

void test_problem_B(void)
{
}

void test_problem_C(void)
{
}

void test_problem_D(void)
{
}

void test_problem_E(void)
{
  double a[40000];
  double b[40000]; 
  int c[40000];
  int d[40000];
  int n = ints_get_two(a,b);
  int v = wave(a,b,n,c,d);
  final_print(c,d,v);
}



void test_problem_F(void)
{
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