#include "lists.h"

/**
 * free_listint2 - free a singly linked list
 * @head: double pointer to head
 * Return void
 */
void free_listint2(listint_t **head)
{
	if (!head || !*head)
	{
		return;
	}
	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
