int count_nr(int *a, int n, int x)
{
	ints_msort(a,n);
	int result = 0;
	for (int i = 0; i < n; i++)
		if (a[0]<a[n])
			if (a[i] => a[0] && a[i] <= a[n])
				result ++;
		else	
			if (a[i] <= a[0] && a[i] => a[n])
				result ++;
	return result;
}
//--------------------------------------
#include <stdio.h>
#include <math.h>
#define desconto_normal 0.90
#define pre_desconto 0.75
#define mes_desconto 0.05

int anos_mes (int x, int idade)
{
	double result;
	result = (((66 - idade) * 12) * mes_desconto);

	return result;
}

int reforma (int x, int idade)
{
	int result;
	if (idade > 65)
	{ 
		result = round(desconto_normal * x);
	}
	else
	{
		result = round((pre_desconto - anos_mes(x, idade)) * x);
	}

	return result;
}

void test_reforma(void)
{
	int x;
	int idade;
	while(scanf("%d%d", &x, &idade) != EOF)
	{
		int z = reforma(x, idade);
		printf("%d\n", z);
	}
}

int main(void)
{
	test_reforma();
	return 0;
}