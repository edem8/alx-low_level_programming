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

	for (; a[i] != '\0' ; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] -=32;
		int j = 0;

		for (; j < 13 ; j++)
		{
			if (a[i] == b[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] -= 32;
			}
		}
	}
	return (a);
}
