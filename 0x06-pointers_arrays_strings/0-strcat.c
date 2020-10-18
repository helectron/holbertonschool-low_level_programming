#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @src: string added to dest
 * @dest: string to append by src, overwrite the 0 of dest
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, i++)

		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
