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
	char r[10];

	for (; i < len ; i++)
	{
		r[i] = toupper(a[i]);
	}
	a = r;
	return (a);
}
