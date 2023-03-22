#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: the string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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
	_puts(str);
	return (0);
}
