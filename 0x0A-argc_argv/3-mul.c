#include "main.h"
/**
 * main - print the product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return (0) or (-1)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
