int hapiness (int x, int n)
{
	int result = 0;
	for (int i = 0; i<n; i++)
		result = (pow(x, 2) + pow(x, 3)) - ((x/2) + (x % 2) + (x/3) + (x % 3));
	return result;
}

int satisfied (int x)
{
	int y = hapiness(x,1);
	if (x => y)
		result = 1;
	else (x<y)
		result = 0;
	return result;
}

int satisfaction (int *a, int n, int x)
{
	int i = 1
	a[i] = satisfied (b[result],1)
}


