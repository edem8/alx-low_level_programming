#include "main.h"
#include <time.h>

/**
 * main - random passwords
 *
 * Return: return (0)
 */
int main(void)
{
	int s[100];
	int i = 0;
	int j = 0;
	int n;

	srand(time(NULL));

	for (; i < 100 ; i++)
	{
		s[i] = rand() % 78;
		j += (s[i] + '0');
		putchar(s[i] + '0');
		if ((2772 - j) - '0' < 78)
		{
			n = 2772 - j - '0';
			j += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
