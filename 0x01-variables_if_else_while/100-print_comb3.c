#include <stdio.h>

/**
 * main - Entry point, print a combinations of 2 digits
 * Return: 0 for success
 * */

int main(){
	int a;
	int b;

	for (a = 48; a <= 57; a++) /*loop until a i equal to 9, same as 57 in ASCII */
	{
		for (b = a + 1; b<= 57; b++) /*b is one more than a*/
		{
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
			{
				putchar(10);/*print a new line if the if condition satisfy */
				break;
			}
			putchar(','); /*put a comma */
			putchar(32); /*print a space */
		}
	}
	return (0);
}