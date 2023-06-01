#include <stdio.h>

/**
 * main - prints all arguments it received followed by \n
 *
 * Return: always 0
 */
int main(__attribute__((unused)) int argc, char ** argv)
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
