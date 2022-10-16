#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int contador;

	contador = 0;
	while (*(s) != '\0')
	{
		s = s + 1;
		contador++;
	}
	return (contador);
}
