#include <stdio.h>
#include "main.h"

/**
 * print_sign - print signs and return
 * @n: parameter to pass
 * Return: return (1) or (0)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
