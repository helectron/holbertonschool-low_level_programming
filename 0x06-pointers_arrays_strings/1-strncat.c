#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: number of bytes to be appended from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++, a++)

		dest[a] = src[b];

	dest[a] = '\0';
	return (dest);
}
