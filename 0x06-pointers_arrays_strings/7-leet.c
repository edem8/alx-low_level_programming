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
		int j = 0;
		int len2 = strlen(b);
		
		for (; j < len2 ; j++)
		{
			if (a[i] == b[j])
			a[i] = c[j];
		}
	}
	return (a);
}	
