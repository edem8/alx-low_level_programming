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
	
	while (*(s + i) != '\0')
	{
		i += 1;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
