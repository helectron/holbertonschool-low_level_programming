#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Print a-z in lowercase with putchar
 * Return: 0 (success).
 */

int /*the main function will usually returns 0 if success */
main(void) /*this is the namem in this case main*/
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
