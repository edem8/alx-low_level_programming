#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - pritning last_digits
 *@c: parameter to pass
 *Return: return (0) or (1)
*/
int print_last_digit(int c)
{
	int dum;

	if (c < 0)
		c = -c;
	dum = c % 10;

	if (dum < 0)
		dum = -dum;
	_putchar('0' + dum);
	return (dum);
}
