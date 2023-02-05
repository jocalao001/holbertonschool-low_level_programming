#include "main.h"
/**
 * get_bit - return value in a specific index
 * @n: number
 * @index:  index to print
 *
 * Return: Value of the bit in the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, v;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	i = 1 << index;
	v = n & i;
	if (i == v)
	{
		return (1);
	}
		return (0);
}
