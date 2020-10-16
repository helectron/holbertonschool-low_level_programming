#include "holberton.h"

/**
 *array_range - creates an array of integers
 *@min: minumum value
 *@max: maximum value
 */

int *array_range(int min, int max)
{
	int *a;
	int i = 0;
	int t = min;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));

	if (!a)
		return (0);
	while (i <= max - min)
		a[i++] = t++;
	return (a);

}
