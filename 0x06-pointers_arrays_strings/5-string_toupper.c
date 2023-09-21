#include "main.h"

/**
 * string_toupper - Changes all lowercase characters to uppercase.
 * @n: Pointer to the string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32; /* Convert lowercase to uppercase */
		i++;
	}
	return (n);
}

