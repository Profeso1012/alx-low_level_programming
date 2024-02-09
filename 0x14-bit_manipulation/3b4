#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number passed
 * @index: is the index, from 0 of the bit to be set
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin, a;
	if (index < 63)
		return (-1);
	bin = (1UL << index);
	a = (bin | *n);
	*n = a;
	return (1);
}
