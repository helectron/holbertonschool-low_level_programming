#include <stdlib.h>
#include <stdio.h>
/**
 * Main - entry point
 *
 * Return: Always 0 (Sucess)
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
