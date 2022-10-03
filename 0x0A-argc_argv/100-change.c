#include "main.h"

/**
 * main - printing minimum number of coins to make change
 * @argc: number of arguments
 * @argv:array of arguments
 * Return: return (0) or (1)
 */
int main(int argc, char **argv)
{
	int total, change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	for (total = 0; change > 0; total++)
	{
		if (change - 25 >= 0)
			change -= 25;
		else if (change - 10 >= 0)
			change -= 10;
		else if (change - 5 >= 0)
			change -= 5;
		else if (change - 2 >= 0)
			change -= 2;
		else if (change - 1 >= 0)
			change -= 1;
	}
	printf("%d\n", total);
	return (0);
}
