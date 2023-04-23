#include "header.h"

/**
 * put - prints a char to the standard output.
 * @chr: the character to print.
 *
 * Return: 0 upon success
 */
int put(char chr)
{
	return (write(1, &chr, 1));
}

int main(void)
{
	char *name = "Heritage, you're doing well!";
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		put(name[i]);
	}
	put('\n');
	return (0);
}
