#ifndef __VARIADIC_FUNCTIONS__
#define __VARIADIC_FUNCTIONS__
#include <stdarg.h>
#include <stdio.h>

/**
* struct format - struct format to print type with corresponding print function 
* @f: type format
* @str: print function
*/
typedef struct format
{
	char *format;
	void (*str)();
} my_format;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
