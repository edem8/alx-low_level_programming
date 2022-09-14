#include <stdio.h>

/**
 * print_sign - print signs and return
 * @n: parameter to pass
 * Return: return (1) or (0)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}
