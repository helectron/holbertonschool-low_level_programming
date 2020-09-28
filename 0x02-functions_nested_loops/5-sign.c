#include "holberton.h"

/**
 * print_sign
 * validate if the (@n) integer  argument is negative, positive or zero
 * Return: 1, 0 or -1 according to the sign of the argument
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
