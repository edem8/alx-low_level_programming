#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print number except 2 and 4
 * Return: return nohing
*/
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
