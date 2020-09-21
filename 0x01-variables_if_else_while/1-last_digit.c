#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod > 5)	
{
	printf("Last digit of %i is %i and is greater than 5\n", n, mod);
}
	else if (mod < 6)
{
	printf("Last digit of %i is %i and is less than \n", n, mod);
}
	else if (mod == 0)
{
	printf("Last digit of %i is %i and is 0\n", n, mod);
}
	return (0);
}
