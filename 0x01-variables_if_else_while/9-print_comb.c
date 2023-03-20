#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -main entry point
 * Return: should always return 0
*/

int main(void)
{

	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}

