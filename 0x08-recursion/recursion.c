#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

int main(void)
{
	int f;

	f = factorial(10);
	printf("10! = %d\n", f);
	return (0);
}
