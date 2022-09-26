#include "main.h"

/**
 * print_chessboard - printing chessboard using 2D Arrays
 * @a: pointer parameter
 * Return: 2D chessbord Array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 64 ; i++)
	{
		if (i == 8 || i == 16 || i == 24)
			_putchar('\n');
		if (i == 32 || i == 40 || i == 48)
			_putchar('\n');
		if (i == 56)
		{
			_putchar('\n');
			_putchar((*a)[i]);
		}
		else
			_putchar((*a)[i]);
	}
	_putchar('\n');
}

