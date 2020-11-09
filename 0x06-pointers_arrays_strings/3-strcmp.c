#include "holberton.h"

/**
 * _strcmp - copies a string
 * @s1: array 1
 * @s2: array 2
 * Return: the difference in the array of chars
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while ((s1[count] == s2[count]) && (s1[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
