#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: NULL terminated string vectors
 * Return: Always o
 */
int main(int argc, char **argv)
{
	int fd, cl, i, error = STDERR_FILENO;
	ssize_t output, input;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(error, "Usage: cp file_from file_to\n");
		exit(97);
	}
	for (i = 0; i <= 1; i++)
	{
		if (i == 0)
		{
			fd = open(argv[1], O_RDONLY);
			input = read(fd, buff, sizeof(buff));
			if (fd == -1 || input == -1)
			{
				dprintf(error, "Error: Can't read from file %s\n", argv[1]);
				exit(98);
			}
		}
		if (i == 1)
		{
			fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
			output = write(fd, buff, input);
			if (fd == -1 || output == -1)
			{
				dprintf(error, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
		cl = close(fd);
		if (cl == -1)
		{
			dprintf(error, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}
	return (0);
}
