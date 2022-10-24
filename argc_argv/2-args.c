#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * arguments: Arguments typed for people.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arguments;

	for (arguments = 0; arguments < argc ; arguments++)
		printf("%s\n", argv[arguments]);

	return (0);
}
