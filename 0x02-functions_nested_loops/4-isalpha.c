#include <stdio.h>
#include <ctype.h>

/**
 *_isalpha - printing if alphabet
 *@c: Parameter to pass
 *Return: return (1) or (0)
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
