#include "main.h"
int actual_sqrt(int n, int a);
/**
 * _sqrt_recursion - natural square root of a number
 * @n: parameter to pass
 * Return: return sqrt or (-1)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt - printing our sqrt now
 * @n: number to pass
 * @a: iterator
 * Return: the sqrt
 */
int actual_sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt(n, a + 1));
}
