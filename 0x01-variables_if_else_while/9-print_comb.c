#include <stdio.h>

/**
 *main - printing comb
 *
 *Return: return (0) or something
*/
int main(void)
{
	int ok;

	for (ok = 48; ok < 58; ok++)
	{
		putchar(ok);
		if (ok != 57)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
