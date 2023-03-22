#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	char *start;
	char *end;
	char temp;

	while (i > 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	start = s;
	end = s + i - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";
	
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
