#include "lists.h"

/**
 * add_node_end - add new tail to list
 * @head: head node
 * @str: string of node
 * Return: pointer to head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *e_node, *tmp;

	e_node = malloc(sizeof(list_t));

	if (!e_node)
		return (NULL);

	e_node->str = strdup(str);
	e_node->len = strlen(str);
	e_node->next = NULL;

	if (!*head)
	{
		*head = e_node;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = e_node;
	return (e_node);

}
