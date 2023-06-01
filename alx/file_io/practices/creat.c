#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - main code
 *
 * Return: always 0
 */
int main(void)
{
	char *pathname = "./create";
	mode_t mode = S_IRUSR | S_IWUSR | S_IROTH;
	int fd;

	fd = creat(pathname, mode);

	if (fd == -1)
	{
		perror("Unable to create");
		return (1);
	}
	printf("Created successfully with indicated permissions and fd %d\n", fd);
	close(fd);

	return (0);
}
