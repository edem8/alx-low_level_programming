#include "main.h"

/**
 * print_chessboard - printing chessboard using 2D Arrays
 * @a: pointer parameter
 * Return: 2D chessbord Array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
