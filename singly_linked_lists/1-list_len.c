#include "lists.h"

/**
 * list_len - calculate the number of the nodes
 * @h: singly linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes;

	nodes = 0;
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
