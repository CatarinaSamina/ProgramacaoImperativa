#include <stdio.h>
#include <math.h>
#define my_po 2.54
#define my_pes 30.48

double nba(int x, int y)
{
	return round((x*(my_pes)) + (y*(my_po))) / 100;
}

void test_nba(void)
{
	int x;
	int y;
	while(scanf("%d%d", &x, &y) !=EOF)
	{
		double z = nba(x,y);
		printf("%f\n", z);
	}
}

int main(void)
{
	test_nba();
	return 0;
}