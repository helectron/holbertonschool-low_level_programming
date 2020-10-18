#include "holberton.h"

/**
 * rev_string - prints string in reverse
 * @s: input
 * Return: no
 */

void rev_string(char *s)
{
	int x, y, z;
	char a;

	for (x = 0; s[x] != '\0'; x++)
		;
	z = x;
	x--;
	for (y = 0; y < z / 2; y++)
	{
		a = s[y];
		s[y] = s[x];
		s[x] = a;
		x--;
	}
}
