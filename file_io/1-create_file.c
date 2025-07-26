#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates
 * @filename: file
 * @text_content: text
 *
 * Return: w
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written = 0;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		written = write (fd, text_content, len);
		if (written == -1 || (size_t)written != len)
		{
			close(fd);
			return(-1);
		}
	}
	close(fd);
	return (1);
}




