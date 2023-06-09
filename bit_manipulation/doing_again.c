#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
int __strlen(char *);

/**
 * __strlen - returns the length of a string
 * @s: the string to count
 * Return: the total count
 */
int __strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n;
/*	char *copy; */
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0, n = 0; b[i] != '\0'; i++, n++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	for (i = 0; n >= 0, b[i] != '\0'; i++, n--)
	{
		sum += ((b[i] - '0') << (n - 1));
	}
	return (sum);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
