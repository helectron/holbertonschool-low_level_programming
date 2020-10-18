#include "holberton.h"

/**
 * puts2 - print selected chars from a string
 *@str: string to print, input
 *Return: void
 */


void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
