#include "main.h"

/**
 * print_array - print n numbers of the array
 * @a: parameter to be passed
 * @n: parameter to be passed
 * Return: return nothing
 */
void print_array(int *a, int n)
{
	for (int i = 0; i <= n ; i++)
	{
		printf("%d, ", a[i]);
	}
}
