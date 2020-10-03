#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int m1, m2, h1, h2;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			if (h1 == 2 && h2 == 4)
				break;
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + 48);
					_putchar(58);
					_putchar(m1 + '0');
					_putchar(m2 + '0');
				}
			}
		}
	}

}
