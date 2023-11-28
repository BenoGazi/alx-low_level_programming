#include "main.h"

int main(int argc, char *argv[]);

/**
 * fcheck - checks for file availability
 * @desc: file
 * @fp: name
 * @filename: name of file
 * corp: closing/open
 * Return: nothing
 */
void fcheck(int fp, int desc, char *filename, char corp)
{
	if (corp == 'C' && desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", fp);
		exit(100);
	}
	else if (corp == 'O' && desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (corp == 'W' && desc == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", filename);
		exit(99);
	}
}


/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 * Return: 1 on success, else exit
 */

int main(int argc, char *argv[])
{
	int i, j;
	int byte = 1024;
	int w, cl_i, cl_j;
	unsigned int corp = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open (argv[1], O_RDONLY);
	fcheck(i, -1, argv[1], 'O');
	j = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, corp);
	fcheck(j, -1, argv[2], 'W');
	while (byte == 1024)
	{
		byte = read(i, buff, sizeof(buff));
		if (byte == -1)
		{
			fcheck(-1, i, argv[1], 'O');
		}
		w = write(j, buff, byte);
		if (w == -1)
		{
			fcheck(-1, j, argv[2], 'W');
		}
		cl_i = close(i);
		fcheck(cl_i, i, NULL, 'C');
		cl_j = close(j);
		fcheck(cl_j, j, NULL, 'C');
	}
	return (0);
}
