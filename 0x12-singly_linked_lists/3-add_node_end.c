#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this adds a new node at the tail of a linked list
 * @head: this represents a double pointer to the list_t list
 * @str: this represnts the string to put in the new
 * node of the linked list
 *
 * Return: should return thr address of the new element on
 * success or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}

