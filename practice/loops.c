#include <stdio.h>

/**
 * main - prints all the alphabets
 *
 * Return: always zero
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
