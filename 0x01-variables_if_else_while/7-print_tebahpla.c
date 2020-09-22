#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point backward alphabeth.
 * Return: 0 (success).
*/

int /*data type for the function, that will usually returns 0 if success */
main(void) /*the name: main. This program puts the alphabeth backward */

{
	int c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar(10);

	return (0);
}
