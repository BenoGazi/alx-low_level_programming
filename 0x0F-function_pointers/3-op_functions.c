#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adding two integers
 * @a: first parameter
 * @b: second parameter
 * Return: sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between two ints
 * @a: first parameter
 * @b: second parameter
 * Return: Difference between the two ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two given ints
 * @a: first parameter
 * @b: second parameter
 * Return: Product of two ints
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first parameter
 * @b: divisor
 * Return: Divided a by b
 */

int op_div(int a, int b)

{
	return (a / b);
}

/**
 * op_mod - returns the remainder of a divided by b
 * @a: first parameter
 * @b: divisor
 * Return: Remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
