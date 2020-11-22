#include "holberton.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: char string
 *Return: number of bytes of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	else
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

