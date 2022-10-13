#include <stdio.h>

/**
 * array_iterator - executes a pointer func as parameter on each array index
 * @array: Array to pass
 * @size: size of the array
 * @action: pointer to a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(*(array + i));
	}
}
