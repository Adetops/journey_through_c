#include <stdio.h>

int bubble(int *p, int n, int (*compare)(int, int))
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if ((compare(p[j], p[j + 1]) > 0))
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

int compare(int a, int b)
{
	if (a > b)
		return (1);
	else
		return (-1);
}

int main(void)
{
	int a[] = {2, 4, 1, 3, 6, 5};
	int i;

	for (i = 0; i < 6; i++)
	{
		bubble(a, 6, compare);
		printf("%d ", a[i]);
	}
	printf("\n");
	return (0);
}
