#include <stdio.h>
#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @n: Number to pass
 */

void test_islower(int n)
{
	int r;

	r = _islower(n);
	putchar(r + '0');
	
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
	putchar('\n');
	return (0);
}
