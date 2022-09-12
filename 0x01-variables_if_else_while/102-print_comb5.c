#include <stdio.h>

/**
 *main - print two two digit numbers
 *
 *Return: reutrn (0) or nothing
*/
int main(void)
{
	int a = 0;
	int b = 0;
	for (; a < 100; a++)
	{
		for (; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
