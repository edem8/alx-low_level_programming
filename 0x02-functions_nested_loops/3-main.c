#include <stdio.h>
#include "main.h"
void _putchar(int a);
/**
 * test_islower - Test the _islower function
 *
 * @n: Number to pass
 */

void test_islower(int n)
{
	int r;

	r = _islower(n);
	_putchar(r + '0');
	
}

void _putchar(int a)
{
	putchar (a);
}

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main (void)
{

	test_islower('H');
	test_islower('o');
	test_islower(108);
	_putchar('\n');
	return (0);
}
