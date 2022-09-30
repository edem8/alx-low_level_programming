#include "main.h"

/**
 * print_array - print n numbers of the array
 * @a: parameter to be passed
 * @n: parameter to be passed
 * Return: return nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
