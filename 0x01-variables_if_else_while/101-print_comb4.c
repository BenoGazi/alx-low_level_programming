#include <stdio.h>

/**
 * main - main function print all possible combinations of 3 digit numbers
 *
 * Return: always returns 0
 *
 */

int main(void)
{
	char i, j, m;

	for (i = 0; i < 8; i++)
	{
		for (j = 1 + 1; j < 19; j++)
		{
			for (m = j + 1; m < 10; m++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((m % 10) + '0');

				if (i == 7 && j == 8 && m == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
