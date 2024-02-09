#include "main.h"

/**
 * set_bit - sets a bit
 * @n: pointer to the number passed
 * @index: index of the bit concerned
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
