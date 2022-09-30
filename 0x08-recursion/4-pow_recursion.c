#include "main.h"

/**
 * _pow_recursion - printing value of x to the power y
 * @x: first value to pass
 * @y: second value to pass
 * Return: return x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
