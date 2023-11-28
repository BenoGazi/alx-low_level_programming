#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: Null terminated string
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i;
	int str_len;

	if (!filename || text_content == NULL)
	{
		return (-1);
	}
	str_len = 0;
	while (text_content[str_len])
	{
		str_len++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	i = write(fp, text_content, str_len);
	if (i == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
