#include "holberton.h"

/**
 * _pow_recursion - returns the value of a raised to the power of b
 *@a: integer
 *@b: integer
 *Return: if y is lower than 0, the function should return -1
*/
int _pow_recursion(int a, int b)
{
	if (b < 0)
	{
		return (-1);
	}
	else if (b == 0)
	{
		return (1);
	}
	else
	{
		return (a * _pow_recursion(a, b - 1));
	}
}
