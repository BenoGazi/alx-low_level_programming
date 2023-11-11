#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function to iterate through the array
 * @array: array to iterate through
 * @size: size of the array
 * @action: pointer to the function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterator = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (iterator < size)
	{
		iterator++;
		action(array[iterator]);
	}
}
