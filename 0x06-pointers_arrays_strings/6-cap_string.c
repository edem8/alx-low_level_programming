#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @a: paramter to pass
 * Return: return pointer
 */
char *cap_string(char *a)
{
	int len = strlen(a);
	int i = 0;
	char r[100];

	for (; i < len ; i++)
	{
		if (i == 0)
			r[i] = toupper(a[i]);
	return (a);
}
