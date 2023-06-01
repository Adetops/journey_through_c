#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - read out from a file to stdout
 *
 * Return: always 0
 */
int main(void)
{
	int fd = open("./create", O_RDONLY);
	ssize_t output;
	size_t count = 1024;
	char *buff;

	if (fd == -1)
	{
		perror("Error");
		return (1);
	}
	buff = malloc(sizeof(char) * count);
	output = read(fd, buff, count);
	if (output == -1)
	{
		perror("Error");
		return (1);
	}
//	if (output == 0)
//		printf("No byte(s) read!\n");
	write(1, buff, count);
	printf("Printed chars: %li\n", output);
	for (count = 0; buff[count] != '\0'; count++)
	{
		printf("%c", buff[count]);
	}
	printf("Printed chars: %li\n", count);
	close(fd);
	free(buff);

	return (0);
}
