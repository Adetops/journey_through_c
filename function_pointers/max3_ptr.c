#include <stdio.h>
#include <stdarg.h>

int max(int a, int b, int c)
{
	int i;

	if (a < b && b > c)
	{
		return (b);
	}
	else if (b < c && c > a)
	{
		return (c);
	}
	else
		return (a);

	return (0);
}

int main(void)
{
	int (*max_ptr)(int, int, int) = &max;

	printf("%d\t\t%d\t\t%d\n", max_ptr(25, 32, 16), max_ptr(22, 15, 48), max_ptr(2, 9, 16));
	printf("%d\n", max(2, 5, 8));
	printf("%d\n", max(10, 4, 7));
	printf("%d\n", max(3, 5, 1));
	printf("%d\n", max(6, 30, 8));

	return (0);
}
