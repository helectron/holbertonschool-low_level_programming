#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
typedef unsigned long size_t;
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
