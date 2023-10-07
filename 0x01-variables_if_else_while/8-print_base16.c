#include <stdio.h>

/**
 * main - main function: to print all numbers of base16 in lowercase
 *
 * Return: always return 0
 * function print base hex digits
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
