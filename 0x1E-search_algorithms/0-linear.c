#include "search_algos.h"

/**
 * linear_search - Using linear search, it returns the
 * value in an array of integers
 * @array: A pointer to the first element of the array
 * @size: The number of the elements in the array
 * @value: Value to search for
 *
 * Return: Returns -1 if the value is not present or NULL
 * or the first index/position of the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t iterator = 0;

	/*Checks for the state of the array*/
	if (array == NULL)
	{
		return (-1);
	}

	/*Iterate through the array*/
	while (iterator < size)
	{
		/*Print the value being checked*/
		printf("Value checked array[%ld] = [%d]\n", iterator, array[iterator]);
		/*verifies if the value being checked is not found*/
		if (array[iterator] == value)
		{
			/*Found value, yaay...okay now*/
			return (iterator);
		}
		iterator++;
	}
		/*Oh well, value not found, therefore*/
		return (-1);
}
