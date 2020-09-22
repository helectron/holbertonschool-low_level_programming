#include <stdio.h>

/**
 * Print A-Z in lowercase
 * Return: 0 (success).
 */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
