#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an initializaes a array
 * @size: size of the array
 * @c: constant, char that initialize the array
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *p;

	if (size == 0)
		return (0);
	p = malloc((size) * sizeof(char));
	if (p == '\0')
		return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
