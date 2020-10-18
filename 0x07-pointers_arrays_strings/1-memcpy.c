#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory space to be copied to from src
 * @src: memory space to be copied to dest
 * @n: unsigned int value of bytes to be copied from src to dest
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
