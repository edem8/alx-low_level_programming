#include <stdio.h>

/**
 *main - printing double numbers
 *
 *Return: return (0) or nothing
*/
int main(void)
{
	int i = 48;

	for (; i < 57 ; i++)
	{
		int a = 1;
		
		for (; a < 58 ; a++)
		{
			if (i < a)
			{
				putchar(i);
				putchar(a);
				if (i != 56 && a != 58)
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

