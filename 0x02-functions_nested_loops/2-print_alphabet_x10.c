#include "holberton.h"

/**
 *print_alphabet_x10 - prints the alphabeth 10 times with just 2 _putchar
 *
 */

void print_alphabet_x10(void)

{
int x = 0;
int alph = 0;

for (x = 0; x < 10; x++)
{
for (alph = 97; alph <= 122; alph++)
_putchar (alph);
}
alph = 122;
_putchar(10);
}
