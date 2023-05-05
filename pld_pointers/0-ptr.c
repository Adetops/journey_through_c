#include <stdio.h>

int main(void)
{
	int n = 9;
	int *ptr;

	ptr = &n;
	printf("The address of n: %p\n", &n);
	printf("The value of ptr: %d\n", ptr);
	printf("The address of n: %d\n", &n);

	return (0);
}