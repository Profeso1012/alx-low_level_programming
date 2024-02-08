#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		ret = 2 * ret + (b[i] - '0');
	}
	return (ret);
}
