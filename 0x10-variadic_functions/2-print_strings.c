#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this prints strings then followed by a new line
 * @separator: this is the string to be printed between the strings
 * @n: this is the number of strings that are passed to the function
 * @...: this is variable number of strings to be printed
 * Description: If the separator is NULL, its is not printed
 * but if it is just one of the strings which is NULL, (nil) is printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

