#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: 0 for success
*/
int main(void)
{
	int a;
	int b;
	int c;

for (a = 48; a <= 57 ; a++)
	{
	for (b = a + 1 ; b <= 57 ; b++) /*b is one added to a*/
	{
		for (c = b + 1 ; c <= 57 ; c++)
		{
			putchar (a);
			putchar (b);
			putchar (c);
			if (a == 55 && b == 56 && c == 57)
		{
			putchar (10);/* put a newline*/
			break;
		}
			putchar (44); /*print a comma*/
			putchar (32); /*put a space*/
		}
	}
	}
	return (0);
}
