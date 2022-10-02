#include "main.h"

/**
 * main - print the product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Rteurn: return (0) or (-1)
 */
int main(int argc, char **argv)
{
	int i = 1;
	int mul = 1;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
