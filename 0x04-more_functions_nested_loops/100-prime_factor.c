#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * main - prints the largest factor
 *
 * Return: return(0) or nothing
 */
int main(void)
{
	long int n;

	n = 612852475143;

	long int div = 2, ans = 0, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld is the largest prime factor !", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
