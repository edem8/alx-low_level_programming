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

	while (len >= 0)
	{
		printf("%d", a[len]);
		if (len != 0)
		{
			printf(", ");
		}
		len--;
	}
	printf("\n");
}
