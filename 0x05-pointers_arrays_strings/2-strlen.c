#include "holberton.h"

/**
 *_strlen - the string´s lenght
 *
 *@s: input char
 *Return: lenght of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
