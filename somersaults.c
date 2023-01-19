#include <stdio.h>

double somersaults(int x)
{
    int result = 0;
    for (int i = 1; i <= x; i++)
    {
        {
                if (i%4==1)
            {
                result += 1;
            }
                else if (i%4==2)
            {
                result += 2;
            }
                else if (i%4==3)
            {
                result += 3;
            }
                else if (i%4==0)
            {
                result += 2;
            }
        }
    }
    return result;
}
void test_somersaults(void)
{
    int x;
    while (scanf("%d", &x)!=EOF)
    {
        int z = somersaults(x);
        printf("%d\n", z);
    }
}

int main(void)
{
	test_somersaults();
	return 0;
}