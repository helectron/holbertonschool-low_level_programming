#include "holberton.h"

/**
 * print_square - prints squre
 * @size: square's size
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);

	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
			_putchar(35);
		_putchar(10);
	}
}
