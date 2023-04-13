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
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
