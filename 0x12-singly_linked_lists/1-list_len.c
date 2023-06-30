#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this returns the number of elements present
 * in a linked list
 * @h: represents the pointer to the list list_t
 *
 * Return: should return the number of elements in h on success
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
