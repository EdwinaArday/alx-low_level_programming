#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -main entry point
 * Return: should always return 0
*/

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A' ; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
