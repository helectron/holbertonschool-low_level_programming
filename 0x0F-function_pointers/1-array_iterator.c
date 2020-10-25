#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @size: the size of the array
 * @action: pointer to the function to use
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;
	
	if (action != NULL && array != NULL)
	{
		for (c = 0; c < size; c++)
			action(array[c]);
	}
}
