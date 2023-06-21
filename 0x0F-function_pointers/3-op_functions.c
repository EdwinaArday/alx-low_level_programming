#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - this returns the sum of two numbers
 * @a: this represents the first number
 * @b: this represents the second number
 *
 * Return: the value of the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this returns the difference of two numbers
 * @a: this represents the first number
 * @b: this represents the first number
 *
 * Return: the value of the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this returns the product of two numbers
 * @a: this represents the first number
 * @b: this represents the second number
 *
 * Return: the value of the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this returns the division of two numbers
 * @a: this represents the first number
 * @b: this represents the second number
 *
 * Return: the value of the division of the two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - this returns the remainder from the division of two numbers
 * @a: this represents the first number
 * @b: this represents the second number
 *
 * Return: the value of the remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
