#include "holberton.h"

/**
 * string_toupper - from a string of lowercase letters to uppercase
 * @s: character string
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = (int) s[i] - 32;
	}
	return (s);
}
