#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: the minimun range of values stored
 * @max: the maximum range of values stored and the number of elements
 *
 * Return: the pointer to the new array
 */

int *array_range(int min, int max)
{
	int *pntr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pntr = malloc(sizeof(int) * size);

	if (pntr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		pntr[a] = min++;

	return (pntr);
}
