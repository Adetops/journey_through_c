#include <stdio.h>

void print_binary(unsigned long int n);

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the decimal number given
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int temp = n;

	for (; (temp = temp >> 1) > 0; count++)
		;
	for (; count >= 0; count--)
	{
		if ((n >> count) & 1)
			printf("1");
		else
			printf("0");
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
