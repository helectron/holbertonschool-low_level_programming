#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Return: no.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar(10);
	}
}
