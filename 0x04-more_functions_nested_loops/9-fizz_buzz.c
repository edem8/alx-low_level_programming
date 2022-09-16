#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing and replacing with Fizz Buzz or FizzBuzz
 *
 * Return: return (0) or nothing
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s ", "FizBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("%s ", "Fizz");
		}
		else if ((i % 5) == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
