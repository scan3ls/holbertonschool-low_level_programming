#include "holberton.h"

/**
 * create_file - create a file
 *@filename: name of the file to create
 *@text_content: content of new file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int wd, fd;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;
	len++;

	wd = write(fd, text_content, len);

	close(fd);
	if (wd == -1)
		return (-1);

	return (1);
}
