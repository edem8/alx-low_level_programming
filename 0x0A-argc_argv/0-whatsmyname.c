#include "main.h"

/**
 * main - prints the name of a program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return (0)
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
