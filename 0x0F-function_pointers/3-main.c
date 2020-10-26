#include "3-calc.h"

/**
 * main - recive the args for simple math operations
 * @argc: argument counter
 * @argv: program´s arguments
 * Return: Always 0
 * */

int main (int argc, char  *argv[])
{
	int a = 0; 
	int b = 0;

	/*Check the number of arguments*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*For storing the numbers*/
	a = atoi (argv[1]);
	b = atoi (argv[3]);

	/*Does it recives a NULL back? checking with get_op_func*/
	if ((get_op_func(argv[2])) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/*Get the first character of the string for comparing*/
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	
	
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
