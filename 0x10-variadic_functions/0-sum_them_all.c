#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sums of all of its parameters
 * @n: the number of parameters that have been passed to the function
 * @...: a variable number of parameters whose sum should be calculated
 *
* Return: if n == 0 - 0
*	  Otherwise - sum of all the parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
