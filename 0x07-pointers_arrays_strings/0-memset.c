#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled by n bytes
 * @b: constant byte value to fill memory
 * @n: number bytes of the memory area pointed to fill in memory area s
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
