#include "main.h"

/**
 *print_most_numbers - printsnumbers from 0 to 9 except 2 and 4
 *
 * Retun: void
 */


void print_most_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			_putchar(i);
			continue;
		}
		_putchar('\n');
	}
}
