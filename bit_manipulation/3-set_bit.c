#include "main.h"

/**
  * set_bit - sets a bit to one at index given
  * @n: number to change
  * @index: position to change bit
  * Return: 1 if success, -1 if fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l, d;

	l = (sizeof(unsigned long int) * 8) - 1;

	if (index > l)
		return (-1);
	d = 1 << index;
	*n = *n | d;
	return (1);
}
