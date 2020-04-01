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
	int f_to, f_from, bufcount, check;
	char buf[KB];
	mode_t permissions = 00664;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, permissions);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bufcount = read(f_from, buf, KB)) > 0)
	{
		check = write(f_to, buf, bufcount);
		if (check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bufcount == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	hClose(f_from);
	hClose(f_to);
	return (0);
}

/**
 * hClose - close file with error msg
 *@fd: open file to close
 */
void hClose(int fd)
{
	int check;

	check = close(fd);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd);
		exit(100);
	}
}
