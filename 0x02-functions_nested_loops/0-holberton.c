#include "holberton.h"

/**
*main - Entry point. This program prints Holberton
*Return: 0 for success
*/

int main(void)

{
	int x;
	char h[9] = "Holberton";

	for (x = 0; x < 9; x++)
	{
		_putchar (x[h]);
	}
	_putchar (10);
	return (0);
}
