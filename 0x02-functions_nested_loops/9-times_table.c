#include "main.h"

/**
 * times_table - prints the nine times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
		if (j != 0)
		{
			_putchar(',');
		if (result < 10)
			_putchar(' ');
		}

		if (result < 10)
		{
			_putchar(' ');
		}
			_putchar(result + '0');
		if (j < 9)
			_putchar(' ');
		}
		_putchar('\n');

	}
}
