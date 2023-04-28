#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints all of the elements present in a linked list
 * @h: this represents the pointer to print the list_t list
 *
 * Return: should return the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
