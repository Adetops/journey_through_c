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
	unsigned int res = 0;
	int i, n = strlen(b) - 1;
77
	if (b == NULL)
		return (0);
	
	for (i = 0; b[i] != '\0'; i++, n--)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		res = b[i] << n;
		printf("%d\n", res);
	}
	return (uint);
}
