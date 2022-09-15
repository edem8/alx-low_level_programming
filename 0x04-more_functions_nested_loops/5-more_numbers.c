#include <stdio.h>
#include "main.h"

/**
 * more_numbers - printing 10 times numbers from 0 to 14
 * Return: return nothing
*/
void more_numbers(void)
{
	int i = 0;

	for (; i < 11; i++)
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
		_putchar('\n');
	}
}
