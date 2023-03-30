#include <stdio.h>
#include <stdarg.h>

int max(int a, int b, int c)
{
	int i;

	if (a < b && b > c)
	{
		return (b);
	}
	else if (a < b && b < c)
	{
		return (c);
	}
	else
		return (a);

	return (0);
}

int main(void)
{
	printf("%d\n", max(2, 5, 8));
	printf("%d\n", max(10, 4, 7));
	printf("%d\n", max(3, 5, 1));
	printf("%d\n", max(6, 30, 8));

	return (0);
}
