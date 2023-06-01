#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the executable file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY);
	ssize_t input, output;
	char *buff;


	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	
	buff = malloc(sizeof(char) * letters);
	input = read(fd, buff, letters);
	if (input == -1)
	{
		return (0);
	}
/*	for (i = 0; buff[i] != '\0'; i++) */
/*	{ */
/*		putchar(buff[i]); */
/*	} */
	output = write(STDOUT_FILENO, buff, input);
	if (output == -1 || output != input)
		return (0);
	close(fd);
	free(buff);

	return (output);
}
