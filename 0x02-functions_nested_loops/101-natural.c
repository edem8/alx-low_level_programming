#include <stdio.h>

/**
 * main - printing natural numbers
 *
 * Return: return nothing
*/
int main(void)
{
	unsigned long int num3, num5, num;
	int a = 0;

	num3 = 0;
	num5 = 0;
	num = 0;

	for (; a < 1024; a++)
	{
		if ((a % 3) == 0)
		{
			num3 = num3 + a;
		}
		else if ((a % 5) == 0)
		{
			num5 = num5 + a;
		}
	}
	num = num3 + num5;
	printf("%lu\n", num);
	return (0);
}
