#include "holberton.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{

		if (s[count] == c)
		{
			return (s + count);
		}
	}
	return (0);
}
