#include "variadic_functions.h"

/**
 * print_numbers - print numbers follow by a new line
 * @n: number of arguments passed to the function
 * @separator: char string separator of numbers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
