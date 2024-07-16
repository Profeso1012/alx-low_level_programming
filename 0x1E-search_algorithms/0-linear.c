#include "search_algos.h"

/**
 * linear_search -  funct that searches for a value in an array of ints
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int s = size;

	if (array == NULL)
		return (-1);
	for (i = 0; i < s; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
