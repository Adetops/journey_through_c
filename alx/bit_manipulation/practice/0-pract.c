#include <stdio.h>

/**
 * main - main code
 * Return: Always 0
 */
int main(void)
{
	int i, n, new;

	for (i = 8; i >= 0; i--)
	{
		for (n = 0; n < 8; n++)
		{
			new += (n << i);
		}
	}
	printf("%d\n", new);
	return (0);
}
