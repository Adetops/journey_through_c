#include <stdio.h>
#include <stdarg.h>

int max(int first, ...)
{
	va_list list;
	int max_val = 0, next_val;
	int i;

	va_start(list, first);
	for (i = 0; i < first - 1; i++)
	{
		next_val = va_arg(list, int);
		if (next_val > max_val)
		{
			max_val = next_val;
		}
	}
	va_end(list);
	return (max_val);
}

int main(void)
{
	int (*f)(int, ...) = &max;

	printf("%d\n", f(6, 4, 7, 32, 8, 23));

	return (0);
}
