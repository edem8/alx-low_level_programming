#include <stdio.h>
#include <ctype.h>
/**
 * _islower - printing (0) or (1)
 * @c: parameter needed for execution
 *Return: return (0) 0r (1)
*/
int _islower(int c)
{
	if ( islower(c) )
		return (1);
	else 
		return (0);
		
		
}
