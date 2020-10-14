#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copy a string in other memory direction
 * @str: pointer to string
 * Return: pointer, the direction of the string to be copied.
 * NULL otherwise
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
