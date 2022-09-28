#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - natural square root of a number
 * @n: parameter to pass
 * Return: return sqrt or (-1)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	int s = (sqrt(n) - 1) * (sqrt(n) - 1);
	
	if (abs(sqrt(n) - s) % 2 != 0)
		return (-1);
	else
		return (sqrt(n));
}
