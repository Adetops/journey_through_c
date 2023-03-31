#include <stdio.h>

int max(int a, int b)
{
	int max_num;

	if (a > b)
		max_num = a;
	else
		max_num = b;

	return (max_num);
}
int A(int (*main_ptr)(int, int))
{
//	int (*f)(int, int);
//	f = &max;
	main_ptr(2, 3);
}


int main(void)
{
	int maximum;

	maximum = A(max);   //max(45, 86);
	printf("%d\n", maximum);
	printf("%d\n", max(43, 12));
	return (0);
}
