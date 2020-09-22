#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* Print a-z in lowercase and the uppercase with putchar
* Return: 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar(10);
	return (0);
}
