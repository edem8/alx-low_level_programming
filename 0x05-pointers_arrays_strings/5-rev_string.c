#include "main.h"

/**
 * rev_string - reversing a string
 * @s: parameter to pass
 * Return: return nothing
 */
void rev_string(char *s)
{
	int len = strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
