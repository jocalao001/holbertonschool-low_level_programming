#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: pointer to head node
 * @index: number of the node
 * Return: NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (!head)
	{
		return (NULL);
	}

	while (head)
	{
		if (node == index)
		{
			return (head);
		}
	head = head->next;
	node++;
	}
	return (NULL);
}
