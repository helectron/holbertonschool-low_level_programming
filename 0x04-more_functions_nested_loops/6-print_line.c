#include "holberton.h"
/**
* print_line - to print (_) a number of times
* @n: size
*return: no
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
	else
		_putchar(10);
}
