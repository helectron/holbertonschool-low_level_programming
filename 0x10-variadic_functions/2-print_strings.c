#include "variadic_functions.h"

/**
 * print_strings - print strings, if is NULL prints (nil)
 * @separator: char to separate strings
 * @n: number of string arguments passed to function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
