#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - printing time left for jack bauer
 * Return: return (0) or nothing
*/
void jack_bauer(void)
{
	int i = 0;

	for (; i < 24; i++)
	{
		int j = 0;

		for (; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}

