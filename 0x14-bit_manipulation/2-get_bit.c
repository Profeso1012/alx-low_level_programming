#include "main.h"

/**
 * get_bit - returns the value of bit at given index in a dec num
 * @n: number passed
 * @index: index of bit
 *
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bin;

	if (index > 63)
		return (-1);
	bin = n >> index;
	return (bin & 1);
}
