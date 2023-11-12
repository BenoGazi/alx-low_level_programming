#include <stdio.h>
#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two integers
 * Return: Addition of two integers
 * @a: param 1
 * @b: param 2
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between a and b
 * @a: param 1
 * @b: param 2
 * Return: difference between two ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two ints
 * @a: param 1
 * @b: param 2
 * Return: Products of two ints
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: param 1
 * @b: param 2
 * Return: Division of two ints
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of two divided ints
 * @a: param 1
 * @b: param 2
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
