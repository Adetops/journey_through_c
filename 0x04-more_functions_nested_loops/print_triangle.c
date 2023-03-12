#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * You can only use _putchar function to print
 * @size: size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 *
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
