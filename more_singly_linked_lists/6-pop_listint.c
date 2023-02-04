#include "lists.h"

/**
 * pop_listint - delete head of a singly linked list
 * @head: pointer to pointer to address of head node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int data_head;

	if (!*head)
	{
		return (0);
	}

	data_head = (*head)->n;
	h = (*head)->next;
	free(*head);
	*head = h;

	return (data_head);
}
