#include <stdio.h>

int points_x (int x, int y)
{
	int result;
	if (x>y)
	{
		result = 3;
	}
	else 
	{
		if(x<y)
			result = 0;
		if(x==y)
			result = 1;
	}
	if(x>=3)
	 {
	 	result = result +1;
	 }
	 if(x-y>=2)
	 {
	 	result = result +1;
	 }
	 if(result>4)
	 {
	 	result = 4;
	 }
	 return result;
}

int points_y (int x, int y)
{
	int result;
	if (y>x)	
	{
		result = 3;
	}
	else
	{
		if(y<x)
			result = 0;
		if(y==x)
			result = 1;
	}
	if (y>=3)
	{
		result = result +1;
	}
	if(y-x>=2)
	{
		result = result +1;
	}
	if(result>4)
	{
		result = 4;
	}
	return result;
}

void test_points(void)
{
	int x;
	int y;
	while(scanf("%d%d", &x, &y) !=EOF)
	{
		int z = points_x(x,y);
		int w = points_y(x,y);
		printf("%d %d\n", z, w);
	}
}

int main(void)
{
	test_points();
	return 0;
}