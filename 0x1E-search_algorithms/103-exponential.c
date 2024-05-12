#include "search_algos.h"
/**
 * exponential_search - Searched for a a value in a sorted array of ints
 * @array: Pointer to the first element
 * @value: The value to search for
 * @size: Size of the array
 * Return: If the value is not found, return -1, else print value location
 * Description: Prints the [sub] array searcched for
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, start;
	size_t end = size - 1;
	size_t range_end;

	if (array == NULL)
	{
		return (-1);
	}
	if (value < array[0] || value > array[end])
	{
		return (-1);
	}
	if (array[0] == value)
	{
		printf("Value found at index: 0\n");
		return (0);
	}
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	start = i / 2;
	range_end = (i < size) ? i : size;
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	return (bin_search(array, start, range_end - 1, value));
}

/**
 * bin_search - search for value in sorted array of ints
 * @array: Array to search through
 * @end: Ending of the array
 * @start: start of the array
 * @value: Value to search for
 * Return: If the value is not found, return -1, else index of value
 */

int bin_search(int *array, size_t end, size_t start, int value)
{
	size_t iterator;
	size_t mid;

	if (array == NULL || start > end)
	{
		return (-1);
	}
	while (start <= end)
	{
		printf("Searching in array: ");
		for (iterator = start; iterator <= end; iterator++)
		{
			printf("%d, ", array[iterator]);
		}
		printf("\n");
		mid = start + (end - start) / 2;
		if (array[mid] == value)
		{
			printf("Found %d at index: %ld\n", value, mid);
			return (mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	printf("Value %d not found\n", value);
	return (-1);
}
