#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: NULL terminated string to add
 * at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, str_len, i;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		str_len = 0;
		while (text_content[str_len])
		{
			str_len++;
		}
		i = write(fp, text_content, str_len);
		if (i == -1)
		{
			return (-1);
		}
		close(fp);
	}
	return (1);
}
