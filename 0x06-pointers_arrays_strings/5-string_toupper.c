#include "main.h"

/**
 * string_toupper - changes all lowercases to uppecase
 *@a: parameter to pass
 * Return: return pointer
 */
char *string_toupper(char *a)
{
	int len = strlen(a);
	int i = 0;
	char r[20];

	for (; i < len ; i++)
	{
		r[i] = toupper(a[i]);
	}
	i = i - len;
	for (; i  < len ; i++)
	{
		a[i] = r[i];
	}
	return (a);
}
