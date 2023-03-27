#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...);

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)

{
	va_list list;
	unsigned int i, j, k = 0;
	const char arg_list[] = "cifs";
	const char *str;

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (arg_list[j])
		{
			if (format[i] == arg_list[j] && k)
			{
				printf("%s", ", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(list, int));
				k = 1;
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				k = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				k = 1;
				break;
			case 's':
				str = va_arg(list, char *);
				k = 1;
				if (!str)
				{
					printf("(nil)");
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
