#include "main.h"

/**
 *swap_int - swaps the value of two integers
 *
 *@a: first value
 *@b: second value
 *
 *return: void
 *
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
