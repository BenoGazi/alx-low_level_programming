#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - main function
 *
 * Return: always return 0
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ln = n % 10;
	if (ln > 5)
	{
		printf("Last digit of %u is %d and is greater than 5\n", n, ln);
	}
	else if (ln == 0)
	{
		printf("Last digit of %u is %i and is 0\n", n, ln);
	}
	else if (ln < 6 && !0)
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, ln);
	}
	return (0);
}
