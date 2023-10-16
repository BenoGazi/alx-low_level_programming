#include "main.h"

/**
 * print_array - prints elemsts of arrays
 *
 * @a: input
 * @n: length of array
 *
 * return: void
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(",");
		printf(" ");
	}
	}
	printf("\n");
}
