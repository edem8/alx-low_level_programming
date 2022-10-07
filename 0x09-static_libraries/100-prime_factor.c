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
	long int div;
	long int maxFact;

	n = 612852475143;
	div = 2;

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
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
