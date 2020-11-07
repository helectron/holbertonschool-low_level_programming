#include "holberton.h"

/**
  * times_table - function that prints to the stdout the 9 times table
  * Return: void
  */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			if ((a * b) <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(a * b + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(a * b / 10 + '0');
				_putchar(a * b % 10 + '0');
			}

		}
		_putchar(10);
	}
}