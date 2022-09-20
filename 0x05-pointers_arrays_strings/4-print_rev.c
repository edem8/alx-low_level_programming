#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - priting strings in reverse
 * @s: Parameter to pass
 * Return: rteurn nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int length = strlen(s);
	int hold;

	for (; i < length / 2; i++)
	{
		hold = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = hold;
	}
}
