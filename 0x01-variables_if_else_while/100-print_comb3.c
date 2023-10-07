#include <stdio.h>
/**
 * main - prints all possible combinations of two digit numbers
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (i = j + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 8 && j == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
