#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the first char
 * @src: the second char
 * Return: orgdst
 */
char *_strcat(char *dest, char *src)
{
	char *orgdst = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orgdst);
}
