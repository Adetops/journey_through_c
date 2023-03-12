#include <stdio.h>
#include "main.h"

/**
 * largest_prime - function that returns the largest prime factor of a number.
 * @num: the passed number.
 *
 * Return: the largest factor.
 */
int largest_prime(unsigned long num)
{
	unsigned long i, j;

	if (num <= 0)
	{
		return (0);
	}
	i = 2;
	while (i <= num)
	{
		if (num % i == 0)
		{
			j = num / i;
			printf("%ld / %ld = %ld\n", num, i, j);
			num = j;
		}
		else
		{
			i++;
		}
	}
	return (i);
}

/**
 * main - main code
 *
 * Return: always 0.
 */
int main(void)
{
	int i;

	i = largest_prime(1231952);
	printf("%d\n", i);
	i = largest_prime(612852475143);
	printf("%d\n", i);

	return (0);
}
