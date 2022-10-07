#include <stdio.h>

/**
 *main - printing numbers
 *
 *Return: return (0) or nothing
*/
int main(void)
{
	char st = 'z';

	for (; st >= 'a'; st--)
	{
		putchar(st);
	}
	putchar('\n');
	return (0);
}
