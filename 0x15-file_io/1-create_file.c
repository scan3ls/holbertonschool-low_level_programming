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

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_contnt = "";
	}

	while (text_content[len] != '\0')
		len++;

	wd = write(fd, text_content, len);

	close(fd);
	if (wd == -1)
		return (-1);

	return (1);
}
