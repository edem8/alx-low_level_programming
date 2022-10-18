#include "main.h"

/**
 * argstostr - concatenates arguments passed
 * @ac: argument count
 * @av: argument array
 * Return: return pointer to concatenated args
 */
char *argstostr(int ac, char **av)
{
	char *p, *q;
	int i, j, result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, result = 0; i < ac; i++, result++)
	{
		j = 0;
		while (*(*(av + i) + j) != '\0')
		{
			j++;
			result++;
		}
	}
	result++;
	p = malloc(result * sizeof(char));
	if (p == NULL)
		return (NULL);
	q = p;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*p = av[i][j];
			p++;
		}
		*p = '\n';
		p++;
	}
	return (q);
}
