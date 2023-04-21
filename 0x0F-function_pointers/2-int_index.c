#include "functions_pointers.h"
/**
 * int_index - returns index place if comparison = true, else return -1
 * @array: array
 * @size: this is the size of elements in the array
 * @cmp: the pointer to function of one of the three in the main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	if (array = NULL || siez <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if ((cmp(array[a]))
				return (a);
	}
	return (-1);
}
