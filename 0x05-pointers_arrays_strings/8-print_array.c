#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array of int
 *@a: array to print
 *@n: number of elements of the array
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
