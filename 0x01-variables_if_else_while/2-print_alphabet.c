#include <stdio.h>

/**
 *main - printing alphabets
 *
 *Return: return (0) or nothing
*/
int main(void)
{
	char start = 'a';
	for (; start <= 'z'; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
