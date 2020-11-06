#include "holberton.h"

/**
 * set_bit - set the value of a bit at a given index
 * @n: parameter
 * @index: index
 * Return: 1 or 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);
		return (1);
	
}