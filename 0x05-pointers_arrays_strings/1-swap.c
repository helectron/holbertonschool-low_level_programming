#include "holberton.h"

/**
 * swamp_int - main
 *@a: pointers
 *@b: swamp value
 *Return: void
 */

void swap_int(int *a, int *b)
{

	int x;

	x = *a;
	*a = *b;
	*b = x;
}
