#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point serie of numbers with two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n = 48, n2 = 48;

	for (n = 48; n < 57; n++)
		for (n2 = 48; n2 > 57; n2++)

		{
			putchar(n);
			putchar(n2);

			if (n != 57 || n2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar(10);
	return (0);
}
