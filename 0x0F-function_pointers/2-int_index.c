#include <stdio.h>

/**
 * int_index - Afunction that searches for an integer
 *  @array: array to search
 *  @size: size of the array
 *  @cmp: pointer to a function
 *  Return: return index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if ((*cmp)(*(array + i)))
			return (i);
	}
	return (-1);
}
