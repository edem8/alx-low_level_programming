#include "main.h"

/**
 * swap_int - swapping values of two integers
 * @a: Parameter to pass
 * @b: Parameter to pass
 * Return: return nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
