#include "lists.h"

/**
 * add_nodeint - add a new node at beginning of list
 * @head: pointer to head
 * @n: value to assign new node
 * Return: pointer to created node;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (0);
	}

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
