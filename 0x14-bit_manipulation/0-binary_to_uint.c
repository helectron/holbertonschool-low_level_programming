#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars (binary)
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int dec_v = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec_v = dec_v << 1;

		if (b[i] == '1')
			dec_v = dec_v ^ 1;
		i++;
	}
	return (dec_v);
}
