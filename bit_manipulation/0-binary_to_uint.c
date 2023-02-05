#include "main.h"

/**
 * binary_to_uint - turn binary into unsigned int
 * @b: binary to turn into unsigned int
 * Return: unsigned int; 0 if b != binary number or b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, i, res, counter;

	if (!b || b[0] == '\0')
	{
		return (0);
	}

	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
	}
	counter = counter - 1;

	res = 0;
	dec = 0;
	i = 0;
	while (i <= counter)
	{
		dec = (b[i] - '0') << (counter - i);
		res = dec + res;
		i++;
	}
	return (res);
}
