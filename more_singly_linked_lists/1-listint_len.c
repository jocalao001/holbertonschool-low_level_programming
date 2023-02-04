#include "lists.h"

/**
 * listint_len - returns nodes
 * @h: pointer to head
 *
 * Return: elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
