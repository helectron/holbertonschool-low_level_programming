#include <stdio.h>

/**
 * main - prints the name of the executable.
 * @argc: argument´s counter.
 * @argv: array arguments.
 * Return: 0 success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
