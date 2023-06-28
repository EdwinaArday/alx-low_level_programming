#include <stdlib.h>
#include "main.h"
/**
 * _memset - filld the memory with a constant byte
 * @s: the memory area to be filled
 * @b: char to be copied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory allocation which is a
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
	return (s);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements present in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pntr = malloc(size * nmemb);

	if (pntr == NULL)
		return (NULL);

	_memset(pntr, 0, nmemb * size);

	return (pntr);
}
