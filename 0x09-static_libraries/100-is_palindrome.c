#include  "main.h"
int _strlen(char *s);
int check_palindrome(int l, int r, char *p);
/**
 * is_palindrome -  check if palindrome or not
 * @s: string pointer to pass
 * Return: return 1 or 0
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}

/**
 * _strlen -  check length of the string
 * @s: string to check
 * Return: return 0 0r len
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - actual check
 * @l: left index
 * @r: right index
 * @p: pssible palindrome
 * Return: return 1 or 0
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

