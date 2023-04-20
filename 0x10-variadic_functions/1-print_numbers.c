#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this prints numbers followed by a new line
 * @separator: this os the string that has to be printed between the numbers
 * @n: this is the number of integers passed to the function
 * @...: this is the number of the variables of the numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s, separator);
	}

	prinf("\n");

	va_end(nums);
}
