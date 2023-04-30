#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - this converts the parameters passed to the
 * program to string
 * @ac: this represents the argument count
 * @av: this represents the argument vector
 *
 * Return: ...
 */

char *argstostr(int ac, char **av)
{
	int c = 0, x = 0, y = 0, z = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			c++;
			y++;
		}

		y = 0;
		x++;
	}

	st = malloc((sizeof(char) * c) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			st[z] = av[x][y];
			z++;
			y++;
		}

		st[z] = '\n';

		y = 0;
		z++;
	}
	z++;
	st[z] = '\0';
	return (st);
}
