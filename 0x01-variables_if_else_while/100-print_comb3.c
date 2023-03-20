#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -main entry point
 * Return: should always return 0
*/

int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; p++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	}
	}
	}
	putchar('\n');
	return (0);
}
