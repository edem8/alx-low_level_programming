#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - printing diagonal lines diagonally
 * @n: parameter to be passed
 * Return: return (0) or nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i = 0;

		for (; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
