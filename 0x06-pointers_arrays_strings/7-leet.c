#include "main.h"

/**
 * leet - Encoding a string to 1337
 * @a: parameter to pass
 * Return: return (0)
 */
char *leet(char *a)
{
	int len = strlen(a);
	int i = 0;
	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (; i < len ; i++)
	{
		if (a[i] == b[i])
			a[i] = c[i];
	}
	return (a);
}	
