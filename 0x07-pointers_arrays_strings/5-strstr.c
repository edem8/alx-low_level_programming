#include "main.h"

/**
 * _strstr - Locating substring
 * @haystack: String we will scan
 * @needle: string sequence to be search for
 * Return: return any of the entire character sequence specified
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
