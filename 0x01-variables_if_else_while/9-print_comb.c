#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of put gigits from 0 in base 10.
 * Return: 0 (success).
 */

int /*data type for the function, that will usually returns 0 if success */
main(void) /*this progam prints a combination of digits from 0 to 9 */

{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n != 10)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
