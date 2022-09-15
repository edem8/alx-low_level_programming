#include <stdio.h>
#include "main.h"

/**
 * more_numbers - printing ten times
 *
 * Return: return (0) or nothing
*/
void more_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for (; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
