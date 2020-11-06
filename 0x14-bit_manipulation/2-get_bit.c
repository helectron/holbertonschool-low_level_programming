#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: decimal parameter to check bits
 * @index: position
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i =  1;

	if (index > 32)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
