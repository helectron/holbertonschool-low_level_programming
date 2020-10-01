#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)

{
	int m1, m2, h1, h2;
	for (m1 = 0; m1 < 3; m1++)
	{
		if (m1 < 2)
		{
			for (m2 = 0; m2 < 10; m2++)
			{
				for (h1 = 0; h1 < 6; h1++)
				{
					for (h2 = 0; h2 < 10; h2++)
					{
						_putchar(m1 + 48);
						_putchar(m2 + 48);
						_putchar(':');
						_putchar(h1 + 48);
						_putchar(h2 + 48);
						_putchar(10);
					}
				}
			}
		}
		else
		{
			for (m2 = 0; m2 < 4; m2++)
			{
				for (h1 = 0; h1 < 6; h1++)
				{
					for (h2 = 0; h2 < 10; h2++)
					{
						_putchar(m1 + 48);
						_putchar(m2 + 48);
						_putchar(':');
						_putchar(h1 + 48);
						_putchar(h2 + 48);
						_putchar(10);
					}
				}
			}
		}
	}
}
