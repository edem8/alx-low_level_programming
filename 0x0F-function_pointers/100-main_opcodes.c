#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing opcodes
 * @argc: argument count
 * @argv: array of arguments
 * Return: return (0)
 */
int main(int argc, char **argv)
{
	int i, a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < a; i++)
	{
		printf("%02hhx", *((char *)main + 1));
		if (i < a - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
