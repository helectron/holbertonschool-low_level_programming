#include "holberton.h"

/**
 * main - print the alphabet in lowercase with just 2 _putchar.
 *
 * Return: void.
 */
void print_alphabet(void) /* function ti print the alphabeth */
{
	int c = 0;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}
