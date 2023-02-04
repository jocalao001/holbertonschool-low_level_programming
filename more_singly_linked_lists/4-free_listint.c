#include "lists.h"

/**
 * free_listint - free a singly linked list
 * @head: pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (!head)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
