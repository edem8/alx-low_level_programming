#include <stdio.h>

/**
 *main - pritning alphabets
 *
 *Return: return (0)
*/
int main(void)
{
	char ra_ = 'a';
	char cap = 'A';

	for (;ra_ <= 'z'; ra_++)
	{
		putchar(ra_);
	}
	for (;cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}
