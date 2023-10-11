#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10x in lowercase
 *
 * Return: always return void
 */

void print_alphabet_x10(void)
{
	char i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
