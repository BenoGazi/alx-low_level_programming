#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 * @array: Array to be searched
 * @size: size of the array
 * @value: Value being searched for
 * Return: index/position of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	double m;
	size_t position;

	/*Check if the array is NULL*/
	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		m = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + m);
		if (position >= size)
		{
			printf("Value checked array[%d]", (int)position);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)position, array[position]);
		if (array[position] == value)
		{
			return (int)position;
		}
		else if (array[position] < value)
		{
			low = position + 1;
		}
		else
			high = position - 1;
	}
	printf("Value %d is out of range\n", value);
	return (-1);
}
