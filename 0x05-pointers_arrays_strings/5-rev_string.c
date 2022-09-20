#include "main.h"

/**
 * rev_string - reversing a string
 * @s: parameter to pass
 * Return: return nothing
 */
void rev_string(char *s)
{
	int len = strlen(s) - 1;
	int i = 0;
	char r;
	int j;

	for (; i <= len / 2; i++)
	{
		r = s[i];
		j = s[len - i];
		s[i] = j;
		s[len - i] = r;
	}
}
