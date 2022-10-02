#include "main.h"

/**
 * main - printing all arguments recieved
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return (0);
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
