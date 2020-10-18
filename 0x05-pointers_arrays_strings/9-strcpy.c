#include "holberton.h"

/**
 * _strcpy - this function copy the string pointed to by src
 * @dest: destination of the copy
 * @src: source to the copy
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
