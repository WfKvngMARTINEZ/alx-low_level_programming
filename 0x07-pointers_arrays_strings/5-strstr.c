#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to search in.
 * @needle: The substring to search for.
 *
 * Return: If the substring is found - a pointer to the beginning of the
 * substring. If the substring is not found - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
