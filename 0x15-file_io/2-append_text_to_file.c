#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 *@filename: file to be appended
 *@text_content: text to append to filename
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd;
	int len = 0;

	if  (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		wd = write(fd, text_content, len);

		if (wd == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
