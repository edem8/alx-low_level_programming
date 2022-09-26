#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals
 * @a: Matrix
 * @size: Size of the matrix
 * Return: return nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1, diag2;

	for (i = 0; i < size ; i++)
	{
		diag1 += a[(size * i) + i];
		diag2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", diag1, diag2);
}
