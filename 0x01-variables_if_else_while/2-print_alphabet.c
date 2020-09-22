#include <stdio.h>

/**
 * Print a-z in lowercase with putchar
 * Return: 0 (success).
 */
int 
main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
