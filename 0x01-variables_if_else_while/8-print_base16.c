#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point of print all numbers of base 16 in lowercase.
* Return: 0 (success).
*/

int /*data type for the function, that will usually returns 0 if success */
main(void) /*This progam prints all the numbers of base 16 in lowercase */

{
	int base16;

	for (base16 = '0' ; base16 <= '9' ; base16++)
	{
		putchar(base16);
	}
	for (base16 = 'a' ; base16 <= 'f' ; base16++)
	{
		putchar(base16);
	}

putchar(10);

	return (0);
}
