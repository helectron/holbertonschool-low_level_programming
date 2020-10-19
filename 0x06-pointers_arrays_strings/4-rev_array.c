#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to an array of integers
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int t;

	for (i = 0, j = n - 1; j >= i; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	for (i = 0; i < n; i++)
		;
}
