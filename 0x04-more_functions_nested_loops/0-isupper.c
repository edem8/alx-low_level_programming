#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checking for upper case
 * @c: parameter to pass
 * Return: return (0)
*/
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

