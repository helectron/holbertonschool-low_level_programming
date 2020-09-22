#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point of put gigits from 0 in base 10.
* Return: 0 (success).
*/

int /*data type for the function, that will usually returns 0 if success */
main(void) /*the name: main. This progam puts the digits in base 10 */

{
	int base10;

	for (base10 = '0' ; base10 <= '9' ; base10++)
	{
		putchar(base10);
	}

	putchar(10);

	return (0);
}
