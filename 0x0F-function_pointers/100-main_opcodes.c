#include <stdio.h>
#include <stdlib.h>

/**
 * main - this prints out its own opcodes
 * @argc: this represents the number of arguments
 * @argv: this represents the array of arguments
 *
 * Return: should always return 0 as success
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
		}
	return (0);
}
