#include "main.h"

/**
 * string_toupper - changes all lowercases to uppecase
 * @a: parameter to pass
 * Return: return pointer
 */
char *string_toupper(char *a)
{
	int len = strlen(a);
	int i = 0;

	for (; i < len ; i++)
	{
		a[i] = toupper(a[i]);
	}
	return (a);
}
