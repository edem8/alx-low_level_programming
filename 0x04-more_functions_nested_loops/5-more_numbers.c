#include <stdio.h>
#include "main.h"

/**
 *more_numbers - printing ten times
 *
 *Return: return nothing
*/
void more_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for (; j < 15; j++)
		{
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		printf("\n");
	}
}
