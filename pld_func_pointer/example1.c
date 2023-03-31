#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

int main(void)
{
//	int put;
	int (*add_ptr)(int, int) = &add;
//	put = add_ptr(12, 5);

	printf("%d\n", add(12, 5));
	printf("%d\n", add_ptr(5, 3));

	return (0);
}
