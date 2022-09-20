#include "main.h"

/**
 * rev_string - reversing a string
 * @s: parameter to pass
 * Return: return nothing
 */
void rev_string(char *s)
{
	int len = strlen(s) - 1;
	int i = 0;

	while (i >=0 && i <= len)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
