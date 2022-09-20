#include "main.h"


/**
 * print_rev - priting strings in reverse
 * @s: Parameter to pass
 * Return: rteurn nothing
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (s[i] != '\0')
	{
		if (i > 0)
		{
			printf("%s", &s[i]);
		}
		i--;
	}
}
