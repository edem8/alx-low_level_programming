#include "main.h"

/**
 * reverse_array - printing array in reverse
 * @a: array to pass
 * @n: size of array
 * Return: retiurn nothing
 */
void reverse_array(int *a, int n)
{
	int len = n - 1;
	int i = 0;
	int r[13];

	while (len >= 0)
	{
		r[i] = a[len];
		len--;
		i++;
	}
	len++;
	while (len < n)
	{
		a[len] = r[len];
		len++;
	}
}

