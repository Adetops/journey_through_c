#include <stdio.h>

int factorial(int n)
{
	int res, i;

	res = 1;
	i = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int main(void)
{
	int f;

	f = factorial(10);
	printf("10! = %d\n", f);
	return (0);
}
