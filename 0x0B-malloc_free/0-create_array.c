#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates an array of char variables
 * @size: tells the array size
 * @c: this is the char to fill the array
 * Return: filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
