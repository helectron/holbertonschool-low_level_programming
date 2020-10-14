#include <stdio.h>

/**
 * main - prints the name of the executable.
 *
 * @argc: counter of the arguments.
 * @argv: array with the inputs.
 *
 * Return: Always 0 success
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
