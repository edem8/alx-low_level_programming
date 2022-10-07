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

	for (; i < len ; i++)
	{
		if (a[i] == a[0])
		{
			a[i] = toupper(a[i]);
		}
		if (a[i] == '.' || a[i] == ' ')
		{
			++i;
			a[i] = toupper(a[i]);
		}
		if (a[i] == '\n' || a[i] == '\t')
		{
			++i;
			a[i] = toupper(a[i]);
		}
	}
	return (a);
}
