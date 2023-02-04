#include "lists.h"

/**
 * add_nodeint_end - add a tail to the list
 * @head: pointer to pointer to head
 * @n: value for new node
 * Return: pointer to tail node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head_aux, *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (0);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		head_aux = *head;
		while (head_aux->next != NULL)
			head_aux = head_aux->next;
		head_aux->next = new_node;
	}
	return (new_node);
}
