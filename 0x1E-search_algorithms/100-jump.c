#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *	using the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int i, prev = 0;
	int index = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		prev = index;
		index += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	for (i = prev; i < (int)size && i <= index; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
