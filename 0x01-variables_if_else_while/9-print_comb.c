#include <stdio.h>
/**
 * main - Entry point ascendent digits
 *
 * Return: Always 0 (Success)
 */
int /*data type integrers*/
main(void) /*main: function for print ascendent digits with commas*/
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
