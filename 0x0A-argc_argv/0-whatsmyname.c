#include <stdio.h>

/**
 * main - prints the name of the program.
 * @argc: count, argument´s counter.
 * @argv: value, one dimensional array of strings with the inputs.
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
