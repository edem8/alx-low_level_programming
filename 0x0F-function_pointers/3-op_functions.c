#include "3-calc.h"

/**
 * op_add - Perfroms an addition
 * @a: first value
 * @b: second value
 * Return: return sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Performs subtraction
 * @a: first value
 * @b: second value
 * Return: return the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Performs multiplication
 * @a: first value
 * @b: second value
 * Return: return product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Performs divison
 * @a: first value
 * @b: second value
 * Return: return quotient of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - Peforms modulus
 * @a: first value
 * @b: second value
 * Return: return remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return ( a % b);
}
