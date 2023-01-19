#include <stdio.h>
#include <math.h>
#define MY_PI 3.14159265358979323846

double magnitude(double x, double y)
{
	return sqrt(x * x + y * y);
}

double inner_product(double x1, double y1, double x2, double y2)
{
	return x1 * x2 + y1 * y2;
}

double angle(double x1, double y1, double x2, double y2)
{
	return acos((inner_product(x1, y1, x2, y2))/((magnitude(x1, y1) * magnitude(x2, y2))));
}

double degrees(double x1, double y1, double x2, double y2)
{
	return ((180 * angle(x1, y1, x2, y2))/MY_PI);
}

void test_magnitude(void)
{
	double x;
	double y;
	while(scanf("%lf%lf", &x, &y) != EOF)
	{
		double z = magnitude(x, y);
		printf("%f\n", z);
	}
}

void test_inner_product(void)
{
	double x1;
	double x2;
	double y1;
	double y2;
	while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
	{
		double z = inner_product(x1, y1, x2, y2);
		printf("%f\n", z);
	}
}

void test_angle(void)
{
	double x1;
	double x2;
	double y1;
	double y2;
	while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
	{
		double z = angle(x1, y1, x2, y2);
		printf("%.12f\n", z);
	}
}

void test_degrees(void)
{
	double x1;
	double x2;
	double y1;
	double y2;
	while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
	{
		double z = angle (x1, y1, x2, y2);
		double w = degrees(x1, y1, x2, y2);
		printf("%.12f\n%.2f\n", z, w);
	}
}


int main(void)
{
	test_degrees();
	return 0;
}