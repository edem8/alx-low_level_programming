#include <stdio.h>
#include "main.h"

/**
 * print_line - printing a line
 * @n: parameter to pass
 * Return: return (0) or (1);
*/
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i = 1;

		for (; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
