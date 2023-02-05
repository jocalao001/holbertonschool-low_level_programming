#include "main.h"
/**
 * flip_bits - Returns the number of
 * bits needed to flip to get from one number to another.
 * @n: start number
 * @m: number to get to
 *
 * Return: bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int count;

	count = n ^ m;

	while (count)
	{
		i += count & 1;
		count = count >> 1;
	}

	return (i);
}
