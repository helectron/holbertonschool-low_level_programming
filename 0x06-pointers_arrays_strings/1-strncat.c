#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @dest: input
 * @src: string to append to dest
 * @n: number of bytes to be appended from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)

		dest[i] = src[j];

	dest[a] = '\0';
	return (dest);
}
