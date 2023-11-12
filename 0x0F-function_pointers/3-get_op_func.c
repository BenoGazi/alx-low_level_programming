#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - function pointer
 * @s: opertor passed as argument
 * Return: Get Operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

int i = 0;
while (ops[i].op != NULL && *(ops[i].op) != *s)
{
	i++;
}
	return (ops[i].f);
}
