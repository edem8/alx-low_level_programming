#include "main.h"

/**
 * create_array - create an array of characters and intialise with a charcater
 * @c: character to initalize
 * @size: size of array
 * Return: return NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	if (size == 0)
		return (NULL);
	return (arr);
}
