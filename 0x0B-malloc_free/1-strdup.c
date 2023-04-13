#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - make another copy to the new memory space loaction
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *y;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	y = malloc(sizeof(char) * (i + 1));

	if (y == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		y[r] = str[r];
	return (y);
}
