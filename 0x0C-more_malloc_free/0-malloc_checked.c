#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @w: number of bytes that have to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int w)
{
	void *pntr;

	pntr = malloc(w);

	if (pntr == NULL)
		exit(98);

	return (pntr);
}

