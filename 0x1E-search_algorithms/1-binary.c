#include "search_algos.h"

/**
 * binary_search - Searches for a value in the
 * sorted array using binary search
 *
 * @array: Pointer t o the first element
 * @size: Size of the array.
 * @value: The value being searched for.
 *
 * Return: Return -1 if the value is not present or array is NULL
 * Else just return the index/position of the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t iterator;
	size_t left = 0, right = size - 1;

	/*Check if the array is NULL*/
	if (array == NULL)
	{
		/*Return -1 if yes and....*/
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		/*Print the elemnets of the sub_array being searched*/
		for (iterator = left; iterator < right; iterator++)
		{
			printf("%d, ", array[iterator]);
		}
		printf("%d\n", array[iterator]);
		/*Calculate middle index of the current array*/
		mid = left + (right - left) / 2;
		/*If the middle element is the target value*/
		if (array[mid] == value)
			/*then please....*/
			return (mid);
		/*
		 * Else if the mid element is less than the target value,
		 *search in the right half
		 */
		else if (array[mid] < value)
			left = mid + 1;
		/*
		 *If the middle element is greater than the target value,
		 *search the left half of the array
		 */
		else
			right = mid - 1;
	}
	/*Finally, return -1 if the value is not founf i the array*/
	return (-1);
}
