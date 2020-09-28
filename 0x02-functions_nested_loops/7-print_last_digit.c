#include "holberton.h"

/**
 * print_last_digit - entry point
 * @last: integer argument
 * Return: 0 for succes.
 */

int print_last_digit(int last)

{
int l = last % 10;

if (l >= 0)

_putchar(l);
return (l);

_putchar(-l);
return (-l);
}
