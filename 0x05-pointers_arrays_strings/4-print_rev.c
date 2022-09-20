#include "main.h"


/**
 * print_rev - priting strings in reverse
 * @s: Parameter to pass
 * Return: rteurn nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int len = strlen(s) - 1;
	char r[strlen(s)];

	for (; i <= len ; i++)
	{
		if (s[len - i] == '\0')
		{
		}
		else
		{
			r[i] = s[len - i];
		}
	}
	puts(r);
}
