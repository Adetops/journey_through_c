#include <stdio.h>

int get_bit(unsigned long int n);

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to convert to bit
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n)
{
	unsigned long int bit, bit1, temp = n;
	int i = 0;

	for (; (temp = temp >> 1) > 0; i++)
		;
	for (; i > 0; i--)
	{
		if ((n >> i) & 1)
			bit = 1;
		else
			bit = 0;
		printf("%ld", bit);
	}
}

/**
 * main - main code
 *
 * Return: Always 0
 */
int main(void)
{
	int bit = get_bit(10);

	printf("%u\n", bit);

	return (0);
}
