#include "main.h"

/**
 * strtow - separates the words of a string
 * @str: string to pass
 * Return: return a double pointer
 */
char **strtow(char *str)
{
	char **p;
	int i, j, k, l, words,  length;

	words = 0, k = 0, i = 0;
	if (str == NULL || *(str) == '\0')
		return (NULL);
	while (*(str + i) != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
		i++;
	}
	if (words == 0)
		return (NULL);
	p = malloc((words + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < words; i++)
	{
		if (str[i] != ' ')
		{
			length = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++, length++;
			p[k] = malloc((length + 1) * sizeof(**p));
			if (p[k] == NULL)
			{
				for (k--; k >= 0; k--)
					free(p[k]);
				free(p);
				return (NULL);
			}
			for (l = 0; l < length; l++, i++)
				p[k][l] = str[i];
			p[k++][l] = '\0';
		}
	}
	p[k] = '\0';
	return (p);
}
