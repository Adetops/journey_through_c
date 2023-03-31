#include <stdio.h>
#include <stdarg.h>

/**
 * average - function that returns the average of any sum.
 * @one: the first number
 *
 * Return: the average
 */
double average(int first, ...)
{
	va_list list;
	double i, sum, total_num = 1;
	double avg, next;

	va_start(list, first);
	sum = first;
	for (i = 0; i < first; i++)
	{
		next = va_arg(list, int);
		sum += next;
		total_num += 1;
	}
	printf("Sum is : %.2lf\n", sum);
	printf("Total number is : %.2lf\n", total_num);
	avg = sum / total_num;
	return (avg);
}

/**
 * main - the main code
 *
 * Return: always zero
 */
int main(void)
{
	double (*avg_ptr)(int, ...);
	avg_ptr = average;

	printf("Average is : %.2lf\n\n", average(5, 2, 3, 4, 1, 6));
	printf("Average is : %.2lf\n", avg_ptr(4, 6, 3, 4, 8));
	return (0);
}
