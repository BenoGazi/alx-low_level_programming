#include <stdio.h>
/**
 * main -main function
 *
 * Return: always return 0
 */

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != 'q' && j != 'e')
			putchar(j);
	}
	putchar('\n');
	return (0);
}
