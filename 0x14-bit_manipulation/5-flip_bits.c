#include "main.h"

/**
 * flip_bits - flipss the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	int i;
	unsigned long int bin;
	unsigned long int xor;

	xor = n ^ m;
	for (i = 0; i < 64; i++)
	{
		bin = xor >> i;
		if (bin & 1)
			flips++;
	}
	return (flips);
}
