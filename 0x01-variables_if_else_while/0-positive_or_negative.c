#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - 0_positive_or_negative
 *
 *Return: return (0) or nothing
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%u is positive\n", n);
	else if (n == 0)
		printf("%u is zero\n", n);
	else if (n < 0) 
		printf("%u is negative\n", n);
	return (0);
}
