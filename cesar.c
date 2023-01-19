#include <stdio.h>

int cesar_basic(int x)
{
	return (x + 3) % 26;
}

int cesar_encrypted(int x)
{
	return cesar_basic(x % 32) + 64;
}

void teste_cesar_encrypted(void)
{
	int x;
	scanf("%d",&x);
	int z = cesar_encrypted(x);
	printf("%d\n",z);
}

int main(void)
{
	teste_cesar_encrypted();
	return 0;
}