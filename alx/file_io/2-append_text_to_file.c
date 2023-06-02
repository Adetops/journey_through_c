#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name to append to
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;
	ssize_t output;

	if (text_content == NULL)
		fd = open(filename, O_WRONLY);
	else
		fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1 || filename == NULL)
		return (-1);
	count = 0;
	while (text_content[count] != '\0')
		count++;
	output = write(fd, text_content, count);
	if (output == -1)
		return (-1);

	close(fd);
	return (1);
}
