#include "search_algos.h"
/**
 * jump_search - Searches for a value in the array Using Jump search
 * @array: Array to search through
 * @size: Size of the array
 * @value: index of the number
 *
 * Return: Index/Position of th value
 */

int jump_search(int *array, size_t size, int value)
{
	int idx, prev;
	int _jumps = (int)sqrt((double)size);
	int _steps = 0;

	/*First check if the array is NULL or the size if 0*/
	if (array == NULL || size == 0)
		/*If yes, please....*/
		return (-1);
	/*Now please get to business and perform the Jump search*/
	prev = idx = 0;
	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		/*If the value is found at the current position....*/
		if (array[idx] == value)
			/*Please..*/
			return (idx);
		/**
		 * Update previous index and then move by the number of jumps
		 * Next, Increment the step count
		 */
		prev = idx;
		idx += _jumps;
		_steps++;
		/*
		 * Keep looking while the index is within the array bounds
		 * and value of index is less than target value
		 */
	} while (idx < (int)size && array[idx] < value);
	/*Print message indicating value is between previous and current index*/
	printf("Value found between indexes [%d] and [%d]\n", prev, idx);
	/*Now please perform a linear search between prev and current index*/
	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("value checked array[%d] = [%d]\n", prev, array[prev]);
		/*Now, If its found during the linear search, please return it*/
		if (array[prev] == value)
			return (prev);
	}
	/*Finally return -1 if value is not found*/
	return (-1);
}
