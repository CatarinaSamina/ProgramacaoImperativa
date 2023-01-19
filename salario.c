#include <stdio.h>
#include <math.h>

double salario(double s, int h, int m)
{
	double result=0.0;
	if (h<20)
	{
		result += (((h-18) * s) + (m * (s/60)));
	}
	else 
	{
		result += s*2 + (s*(h-20) + m * s/60) * 1.5;
	}
	return result;
}

void test_salario(void)
{
	double s;
	int h;
	int m;
	while(scanf("%lf%d%d", &s, &h, &m) !=EOF)
	{
		double z = round(salario(s,h,m)*100)/100;
		printf("%f\n", z);
	}
}

int main(void)
{
	test_salario();
	return 0;
}