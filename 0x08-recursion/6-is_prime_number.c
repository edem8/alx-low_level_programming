#include "main.h"
int prime_check(int a, int n);
/**
 * is_prime_number - printing 1 if primenumber and zero otherwise
 * n: number to check
 * Return: one or zero
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}

/**
 * prime_check - check if its actaully prime
 * @n: number to check
 * @a: prime checker
 * Return: return 1 or 0
 */
int prime_check(int a, int n)
{
	if (n < 2 || n % a  == 0)
		return (0);
	else if (a > n / 2)
		return (1);
	else
		return  (prime_check(a + 1, n));
}
