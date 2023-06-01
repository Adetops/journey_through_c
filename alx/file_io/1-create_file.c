#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created, 
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t output;
	size_t len = 0;

	if (text_content == NULL)
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	else
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		output = write(fd, text_content, len);
		if (output == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
