#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space
 * @str: string copy
 * Return: return a pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strdup(str));
}
