#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array 
 * @cmp: pointer to the function to be used to compare values
 * If no element matches, return -1
 * If size <= 0, return -1
 *
 * Return: index of first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (0);
}
