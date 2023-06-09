#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n, len = 0;
	unsigned int res = 0;

	if (*b == '\0')
		return (0);
	while (b[len] != '\0')
		len++;
	printf("%d\n", len);
	for (i = 1; i < len; i++)
	{
		for (n = len - 1; n >= 0; n--)
			res += (b[len] << n);
	}
	printf("%d\n", res);
	return (res);
}
