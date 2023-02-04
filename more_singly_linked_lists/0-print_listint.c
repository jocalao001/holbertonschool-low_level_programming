#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print a singly linked list
 * @h: pointer to head
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *aux = h;

	unsigned int nodes = 0;

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		nodes++;
	}
	return (nodes);
}
