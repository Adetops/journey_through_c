#include "3-calc.h"
#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int res, num1, num2;
	char *operator;

	if (argc < 0 || argc > 4)
	{
		return (-1);
	}
	num1 = atoi(argv[2]);
	operator = argv[3];
	num2 = atoi(argv[4]);

	switch (operator)
	{
		case "+":
			get_op_func("+");
		case "-":
			get_op_func("-");
		case "/":
			get_op_func("/");
		case "*":
			get_op_func("*");
		case "%":
			get_op_func("%");
	}
	res = printf("%d %c %d\n", num1, operator, num2);

	return (res);
}
