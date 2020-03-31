#include "holberton.h"

#define KB 1024

/**
 * read_textfile - reads a text file and prints it to the POSIX standard ouput
 *@filename: name of the file to read
 *@letters: expected number of bytes to read
 *
 * Return: number of letters read or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[5 * KB];
	int rd, wd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, buf, letters);

	close(fd);

	wd = write(STDOUT_FILENO, buf, rd);
	if (wd == -1)
		return (0);

	return (wd);
}
