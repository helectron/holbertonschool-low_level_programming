#include "holberton.h"

/**
 *print_triangle - prints a triangle
 *@size: size of the triangle
 *
 *Return: no
 */

void print_triangle(int size)

{
	int i, j, h;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
		{
			_putchar(32);
		}
		for (h = 1; h <= i; h++)
		{
			_putchar(35);
		}
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
