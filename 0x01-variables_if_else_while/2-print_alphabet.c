#include <stdio.h>

/**
 * Print a-z in lowercase
 * Return: 0 (success).
 */

int /* the main function will usually returns a 0 if success*/ 
main(void) /*this is the naime, in this case main*/
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
