#include "holberton.h"
#include <string.h>
/**
 * print_rev - prints string
 * @s: input
 * Return: no
 */

void rev_string(char *s)
{
	int i;
	int j;
	int largo = strlen(s);
	char a;

	for (i = 0, j = largo - 1; i < j; i++, j--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
}

