#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this adds a new node at the start of a linked list
 * @head: this represents a double pointed to the list_t list
 * @str: this represents a new string to be added in
 * the node of the linked list
 *
 * Return: should return the adress of the new element
 * on success or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
