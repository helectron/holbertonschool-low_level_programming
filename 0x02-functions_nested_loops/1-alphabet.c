#include "holberton.h"

/**
 * print_alphabet - alphabeth in lowercase with just 2 _putchar.
 * Entry point
 * Return: void.
 */
void print_alphabet(void)

{
	int c = 0;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}
