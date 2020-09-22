#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main: numbers of base 10 follow by a new line
*return: 0 (sucess)
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
