#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - this selects the correct function to be used
 * to perform an operation initiated by the user
 * @s: this represents the operator passed as argument
 *
 * Return: should return a pointer to the function corresponding
 * as the parameter given to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"_", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
