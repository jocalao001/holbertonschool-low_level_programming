#include "lists.h"

/**
 * add_node - add new head to singly linked list
 * @head: head of list
 * @str: str for head node
 * Return: pointer to head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *f_node = malloc(sizeof(list_t));

	if (!f_node)
	{
		return (0);
	}
	f_node->str = strdup(str);
	f_node->len = strlen(str);
	f_node->next = *head;
	*head = f_node;
	return (f_node);
}
