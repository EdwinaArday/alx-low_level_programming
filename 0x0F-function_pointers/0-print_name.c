#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - this pprints the name using the pointer to the function
 * @name: the string to add
 * @f: the pointer to the function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
