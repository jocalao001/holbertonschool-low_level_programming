#include "main.h"

/**
  * print_binary - prints a number in base 2
  * @n: number in base 10
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int a, i, k;

	a = n;
	i = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (a != 0)
	{
		i++;
		a = a >> 1;
	}
	while (i)
	{
		a = n;
		for (k = 1; k < i; k++)
			a = a >> 1;
		if (a == (a | 1))
			_putchar('1');
		else
			_putchar ('0');
		i--;
	}
}
