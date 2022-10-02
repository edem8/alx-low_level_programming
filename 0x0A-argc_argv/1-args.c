#include "main.h"

/**
 * main - print number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return (0)
 */
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
