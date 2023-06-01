#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - create a file
 *
 * Return: a file descriptor
 */
int main(void)
{
	int fd;

	fd = open("./Going", O_CREAT|O_WRONLY);
	if (fd == -1)
	{
		perror("Cannot open");
		return (1);
	}
	printf("Opened successfully: %d\n", fd);

	close(fd);
	return (0);
}
