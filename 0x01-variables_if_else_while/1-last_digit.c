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
	int last;

	last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (last > 5)
	{
		printf("Last digit of %u is %d  and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %u is %i\\n", n, last);
	}
	else if (last < 6 && !0)
	{
		printf("Last digit of %u is %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
