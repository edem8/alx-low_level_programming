#include <stdio.h>

/**
 * main - code for aplhabet printing
 *
 * Return: return (0)
*/
void print_alphabet(void)
{
	char a = 97;

	for (; a < 123 ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return;
}
