#include <stdio.h>
#include <math.h>

double sum_powers_from(double x, int n, double y)
{
	return n==0 ? 0 : pow(x,y) + sum_powers_from(x+1, n-1, y);
}

int farao(int x,int y, int w)
{
    if (x>=2)
    {
        return y*(sum_powers_from(1,x-2,2)) + w*(sum_powers_from(1,x,2)-sum_powers_from(1,x-2,2));
    }
    else
    	return 0;
}

void test_sum_powers_from(void)
{
    double x;
    double n;
    double y;
    while(scanf("%lf%lf%lf",&x, &n, &y) != EOF)
    {
        double z = sum_powers_from(x,n,y);
        printf("%f\n",z);
    }
}

void test_farao(void)
{
    int x;
    int y;
    int w;
    while(scanf("%d%d%d", &x, &y, &w)!=EOF)
    {
        int z = farao(x,y,w);
        printf("%d\n", z);
    }
}

int main(void)
{
	test_farao();
	return 0;
}