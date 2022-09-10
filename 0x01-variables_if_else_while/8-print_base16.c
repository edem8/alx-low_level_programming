#include <stdio.h>

/**
 *main - printing hexadecimals
 *
 *Return: return (0) or nothing
*/
int main(void)
{
	char a = 48;
	char b = 'a';

	for (; a < 58 ; a++)
	{
		putchar(a);
	}
	for (; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
