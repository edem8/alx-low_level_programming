#include <stdio.h>

/**
 * main - printing three digit combination
 *
 * Return: return (0) or nothing
*/
int main(void)
{
	int i = 48;

	for (; i < 56 ; i++)
	{
		int a = 1;

		for (; a < 57 ; a++)
		{
			int c = 2;

			for (; c < 58 ; c++)
			{
				if (i < a && a < c)
				{
					putchar(i);
					putchar(a);
					putchar(c);
					if (i != 55 || a != 56 || c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


