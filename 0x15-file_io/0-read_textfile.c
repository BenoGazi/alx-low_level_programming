#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - eads a text file and prints
 * it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters to be read and
 * printed
 * Return: Success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, i, j;
	char *ptr;
	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	ptr =  malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		close(fp);
		return (0);
	}
	i = read(fp, ptr, letters);
	if (i == - 1)
	{
		free(ptr);
		close(fp);
		return (0);
	}
	j = write(STDOUT_FILENO, ptr, i);
	free(ptr);
	close(fp);
	if (j == -1)
	{
		return (0);
	}
	return(i);
}
