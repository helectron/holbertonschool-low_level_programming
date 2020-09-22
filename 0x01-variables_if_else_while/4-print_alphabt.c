#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e')
		{
			if (c != 'q')
			{
				putchar(c);
			}
		}
	}

	putchar(10);

	return (0);
}
