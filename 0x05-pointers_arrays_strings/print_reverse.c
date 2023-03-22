#include "main.h"

/**
 * print_rev - function that print a string, in reverse, followed by a new line
 * @s: string to print in reverse
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

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


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "I do not fear computers.I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
