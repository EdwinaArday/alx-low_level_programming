#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * c: the character to print
 *
 * Return: on success should return 1
 * on error, should return -1 and error is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
