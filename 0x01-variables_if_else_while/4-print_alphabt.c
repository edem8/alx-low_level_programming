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
		else
			st = st + 1;
	}
	putchar('\n');
	return (0);
}
