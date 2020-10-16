#include "holberton.h"

/**
 * malloc_checked - using malloc to allocate memory
 *@b: bytes allocate
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
