#include <stdio.h>

void mul(int a, int b)
{
	printf("%d\n", a * b);
}

int main(void)
{
	void (*mul_ptr)(int, int);
	mul_ptr = mul;

	mul_ptr(4, 3);

	return (0);
}
