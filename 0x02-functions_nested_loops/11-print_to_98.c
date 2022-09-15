#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - printing natural numbers to 98
 * @n: parameter to pass
 * Return: return (0)
*/
void print_to_98(int n)
{
	while (n <= 97)
	{
		printf("%d, ", n);
		n++;
	}
	_putchar('\n');
	while (n > 97)
	{
		printf("%d, ", n);
		n--;
	}
	_putchar('\n');
}
		
