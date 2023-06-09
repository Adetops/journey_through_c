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
	/* an iterator that serves as the power */
	int i = 0, sum1, n;
	char *copy;
	unsigned int sum = 0;

	copy = strdup(b);
	n = __strlen(copy) - 1;
	if (copy != NULL)
	{
/*		printf("%s\n", copy); */
		for (i = 0; i <= n, n >= 0; i++, n--)
		{
			if (copy[i] != '0' && copy[i] != '1')
				return (0);
/*			printf("%c and %d\n", copy[i], n); */
			sum1 = (copy[i] - '0') << n;
			sum += sum1;
		}
		return (sum);
	}
	return (0);
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
