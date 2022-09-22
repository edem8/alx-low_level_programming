#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @a: paramter to pass
 * Return: return pointer
 */
char *cap_string(char *a)
{
	int len = strlen(a);
	int i = 0;
	char b[13] = {'\t','\n',' ',';','.','!','?','"','(',')','{','}'};

	for (; i < len ; i++)
	{
		int j = 0;

		for (; j < 13 ; j++)
		{
			if (a[i] == b[0])
				a[i] = ' ';
			if (a[i] == b[j])
				a[i + 1] = toupper(a[i + 1]);
		}
	}
	return (a);
}
