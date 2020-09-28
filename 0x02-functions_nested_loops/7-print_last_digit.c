#include "holberton.h"

/**
 * print_last_digit - entry point
 * @last: integer argument
 * Return: 0 for succes.
 */

int print_last_digit(int x)

{
int r = x % 10;

if (r >= 0)
{
_putchar(r + '0');
return (r);
}

_putchar(-r + '0');
return (-r);
}
