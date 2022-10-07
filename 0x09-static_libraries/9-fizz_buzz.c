#include "main.h"
#include <stdio.h>
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
		if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
