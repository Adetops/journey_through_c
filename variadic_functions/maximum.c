#include <stdio.h>
#include <stdarg.h>

int max(int total, ...);

/**
 * max - returns the maximum number from the list of arguments passed.
 * @total: total number passed.
 *
 */
int max(const int total, ...)
{
	va_list list;
	int i, j, max_val = 0;

	va_start(list, total);
	i = 0;
	while (i < total)
	{
		j = va_arg(list, int);
		if (j > max_val)
		{
			max_val = j;
		}
		i++;
	}
	va_end(list);
	return (max_val);
}

/**
 * main - the main code
 *
 * Return: the maximun number
 */
int main(void)
{
	printf("%d\n", max(5, 2, 10, 25, 12, 29, 34));
	
	return (0);
}
