#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

#define KB 1024

/**
 * main - copies contents from one file to another
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f_to, f_from;
	char buf[5 * KB];
	mode_t permissions = 00664;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* read source file */
	f_from = read_file(argv[1], (5 * KB), buf);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n",
			argv[1]
			);
		exit(98);
	}
	/* write copy file */
	f_to = create_file2(argv[2], buf, permissions);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO,
		       "Error: Can't write to %s\n",
		       argv[2]
			);
		exit(99);
	}

	return (0);
}

/**
 * read_file - read file and save content to buffer
 *@filename: file to read
 *@letters: len of the file
 *@buf: buffer to save content to
 *
 * Return: 1 on success, -1 on failure
 */

ssize_t read_file(const char *filename, size_t letters, char *buf)
{
	int fd, rd, flc;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	rd = read(fd, buf, letters);

	flc = close(fd);
	if (flc == -1)
	{
		dprintf(STDERR_FILENO,
		       "Error: Can't close fd %d\n",
		       fd
			);
		exit(100);
	}
	return (rd);
}

/**
 * create_file2 - create a new file
 *@filename: name of new file
 *@text_content: content of new file
 *@permissions: permissions of new file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file2(const char *filename, char *text_content, mode_t permissions)
{
	int wd, fd, flc;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, permissions);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[len] != '\0')
		len++;

	wd = write(fd, text_content, len);

	flc = close(fd);
	if (flc == -1)
	{
		dprintf(STDERR_FILENO,
		       "Error: Can't close fd %d\n",
		       fd
			);
		exit(100);
	}
	if (wd == -1)
		return (-1);

	return (1);
}
