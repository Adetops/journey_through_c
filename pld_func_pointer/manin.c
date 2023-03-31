#include <stdio.h>

int mul(int a, int b)
{
//	printf("%d\n", a * b);
	return (a * b);
}

int main(void)
{
	int (*mul_ptr)(int, int);
	mul_ptr = mul;

//	mul_ptr(4, 3);

	return (mul_ptr(4, 3));
}
