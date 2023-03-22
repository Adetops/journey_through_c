#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to count
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j += 1;
		i++;
	}
	return (j);
}

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
