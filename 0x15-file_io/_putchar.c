#include <unistd.h>

/*
 * _putchar - writes a character to standard output
 * @c: character to write
 * Return: character/string
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
