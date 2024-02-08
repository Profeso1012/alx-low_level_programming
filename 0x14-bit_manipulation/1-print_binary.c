#include "main.h"

/**
 * print_binary - prints the binary rep of a decimal number
 * @n: num to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int itter;
	int count = 0;

	for (itter = 63; itter >= 0; itter--)
	{
		bin = (n >> itter);
		if (bin & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
