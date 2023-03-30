#include <stdio.h>

int sum(int a, int b)
{
	printf("Division : %d\n", a / b);
	printf("Multiplication : %d\n", a * b);
	printf("Subtraction : %d\n", a - b);
	printf("Addition : %d\n", a + b);
	return (0);
}

int main(void)
{
	int (*sum_ptr)(int, int);

	sum_ptr = &sum;

	(*sum_ptr)(20, 5);

	return (0);
}
