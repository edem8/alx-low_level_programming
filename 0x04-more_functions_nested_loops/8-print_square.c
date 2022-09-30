#include "main.h"

/**
 * print_square - printing squares with #
 * @size: parameter to be passed
 * Return: return (0) or (1)
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 0;

		for (; i < size; i++)
		{
			int j = 1;

			for (; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
