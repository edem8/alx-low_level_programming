#include <stdio.h>

/**
 *main - printing alphabets
 *
 *Return: return (0) or nothing
*/
int main(void)
{
	char st = 'a';

	for (; st <= 'z' ; st++)
	{
		if (st != 'q' && st != 'e')
			putchar(st);
	}
	putchar('\n');
	return (0);
}
