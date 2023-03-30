#include <stdio.h>
#include <stdarg.h>

int max(int a, ...)
{
	va_list list;
	int i, max_value, next_value;

	max_value = 0;
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
	printf("%d\n", max(6, 7, 8, 3, 78, 30, 86, 89));

	return (0);
}
