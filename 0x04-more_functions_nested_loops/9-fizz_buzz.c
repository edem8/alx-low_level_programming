#include <stdio.h>

/**
 * print_Fizz_Buzz - printing and replacing with Fizz Buzz or FizzBuzz
 *
 * Return: return (0) or nothing
 */
int print_Fizz_Buzz(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
