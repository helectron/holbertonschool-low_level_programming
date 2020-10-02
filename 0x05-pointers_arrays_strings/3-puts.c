#include "holberton.h"

/**
 *_puts - main
 *@str: - pointer
 *
 */

void _puts(char *str)
{
	char s[64] = "Holberton";
	int x;

	for (x = 0; x <= 64; x++)
		_putchar(x[s]);
}
