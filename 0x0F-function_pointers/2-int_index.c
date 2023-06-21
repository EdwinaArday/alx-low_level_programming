#include "function_pointers.h"
/**
 * int_index - returns index place if comparison = true, else return -1
 * @array: array
 * @size: this is the size of elements in the array
 * @cmp: the pointer to function of one of the three in the main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
