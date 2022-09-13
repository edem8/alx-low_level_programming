#include <stdio.h>

/**
 * print_alphabet_x10 - printing ten times
 *
 * Return: return nothing
*/
void print_alphabet_x10(void)
{
	int i = 1;

	for (; i <= 10; i++)
	{
		char a = 97;
		while (a < 123)
		{
			putchar(a);
			a++;
		}
		putchar('\n');
	}
}
