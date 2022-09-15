#include <stdio.h>
#include "main.h"

/**
 * print_numbers - printing numbers from 0 to 9
 *
 * Return: return (0) or (1)
*/
void print_numbers(void)
{
	char i = '0';

	for (; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
