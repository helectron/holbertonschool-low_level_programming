#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 * @n: int parameter number of times that prints
 * Return: void
 */


void print_diagonal(int n)
{
	int a, b;

	if (n < 1)
		_putchar(10);
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < a; b++)
			_putchar(' ');
		_putchar(92);
		_putchar(10);
	}
}
