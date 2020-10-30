#include "variadic_functions.h"

/**
 * sum_them_all - sum of all the args
 *@n: mumber of parameters
 * Return: adding.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list list_num;

	va_start(list_num, n);

	if (n == 0)
		return (0);
	{
		for (x = 0; x < n; x++)
		{
			sum += va_arg(list_num, int);
		}
		va_end(list_num);
	}
	return (sum);
}
