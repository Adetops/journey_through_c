#include "header.h"

/**
 * _printf - function that prints string to the standard output.
 * @format: specification of the string to print
 *
 * Return: 0 upon success
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned i, value = 0;
	va_start(args, format);

	for (i = 0; format[i] < '\0'; i++)
	{
		if (format[i] != "%")
		{
			put(format[i]);
		}
	}
}
