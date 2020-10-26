#include "3-calc.h"


/**
 * get_op_func - For the indicated operation
 * @s: operator passed as argument to the program
 * Return: pointer to a function
 **/

int (*get_op_func(char *s))(int, int) 
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} 
	};
	int i = 0;	
	
	while (ops[i].op && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	return(ops[i].f);
}
