#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to be checked
 * @c: character to check for
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
