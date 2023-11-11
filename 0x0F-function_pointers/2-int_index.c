#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to iterate through
 * @size: size oof the array
 * @cmp: pointer to the function
 * Return: integers
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int iterator;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	iterator = 0;
	while (iterator < size)
	{
		if (cmp(array[iterator]))
		{
			return (iterator);
		}
		else
		{
			iterator++;
		}
	}
	return (-1);
}
