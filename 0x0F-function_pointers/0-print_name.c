#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: name to print
 * @f: pointer to function
 * Return: return nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		printf("Error\n");
	else
		f(name);
}
