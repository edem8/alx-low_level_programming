#include "main.h"

/**
 * factorial - printing factorial of numbers
 * @n: number whose factorial we will find
 * Return: return (1) or (-1)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
