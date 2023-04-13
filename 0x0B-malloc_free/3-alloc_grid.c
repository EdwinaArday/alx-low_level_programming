#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dimensional array created or NULL on error
 */

int **alloc_grid(int width, int height)
{
	int **q;
	int b, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	q = malloc(sizeof(int *) * height);

	if (q == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		q[b] = malloc(sizeof(int) * width);

		if (q[b] == NULL)
		{
			for (; b >= 0; b--)
				free(q[b]);

			free(q);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			q[b][c] = 0;
	}

	return (q);
}
