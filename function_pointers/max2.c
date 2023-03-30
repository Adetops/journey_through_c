#include <stdio.h>
#include <stdarg.h>

int max(int a, ...)
{
	va_list list;
	int i, max_value, next_value;

	max_value = a;
	i = 0;
	va_start(list, a);
	while (i < a)
	{
		next_value = va_arg(list, int);
		if (next_value > max_value)
		{
			max_value = next_value;
		}
		i++;
	}
	va_end(list);
	return (max_value);
}

int main(void)
{
	printf("%d\n", max(6, 2, 5, 3, 1, 4));

	return (0);
}
