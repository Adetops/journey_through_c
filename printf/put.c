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
