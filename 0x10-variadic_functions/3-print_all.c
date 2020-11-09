#include "variadic_functions.h"
/**
 * print_all - print char, integer, float and string from a va_list
 * @format: format
 * @list: va_list passed to function
*/
void print_all(const char * const format, ...)
{
	
	unsigned int i, j = 0;
	int start = 0;
	char *str = NULL;
	va_list list;

	va_start(list, format);
	while (format[j] != '\0')
		j++;
	while (format[i])
	{
		/*print char type element from va_list an the the rest of the formats*/
		switch (format[i])
		{ case 'c': 
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			str = va_arg(list, char*);
			if (str)
			{ printf("%s", str);
			break; }
			printf("%p", str);
			break; }
		i++;
	}
	printf("\n");
	va_end(list);
}
