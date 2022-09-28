#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - natural square root of a number
 * @n: parameter to pass
 * Return: return sqrt or (-1)
 */
int _sqrt_recursion(int n)
{
	int s = 0;

	if (n < 0)
		return (-1);
	s += ((int)sqrt(n) - 1) * ((int)sqrt(n) - 1);
	if ((int)(sqrt(n) - s) % 2 != 0)
		return (-1);
	else
		return (sqrt(n));
}
