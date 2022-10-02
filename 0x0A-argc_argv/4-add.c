#include "main.h"

/**
 * main - adding two positive integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return (0) or (1)
 */
int main(int argc, char **argv)
{
	int i = 0;
	int j;
	int sum = 0;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
