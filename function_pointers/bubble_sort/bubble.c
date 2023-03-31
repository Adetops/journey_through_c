#include <stdio.h>

int bubble(int *p, int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (p[j] < p[j + 1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int a[] = {2, 4, 1, 3, 6, 5};
	int i;

	for (i = 0; i < 6; i++)
	{
		bubble(a, 6);
		printf("%d ", a[i]);
	}
	printf("\n");
	return (0);
}
