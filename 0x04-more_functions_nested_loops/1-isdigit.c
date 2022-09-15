#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Check if its a digit
 * @c: parameter to pass
 * Return: return (0) or (1)
*/
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
