#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: parameter to pass
 * Return: return something
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	while (s[a] != '\0')
		a++;
	while (b < a && c == 0)
	{
		if (s[b] == '-')
			++d;
		if (s[b] >= '0' && s[b] <= '9')
		{
			f = s[b] - '0';
			if (d % 2)
				f = -f;
			e = e * 10 + f;
			c = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			c = 0;
		}
		b++;
	}
	if (c == 0)
		return (0);
	return (e);
}
