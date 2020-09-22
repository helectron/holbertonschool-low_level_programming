#include <stdio.h>

/**
 * Print a-z in lowercase with putchar
 * Return: 0 (success).
 */
int /* The main function will return a 0 if success*/
main(void) /* This is the name, in this case main*/
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
