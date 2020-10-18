#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: input to print
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);

}
