#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: Success
 */

int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;
	return (*j == 1 ? 1 : 0);
}
