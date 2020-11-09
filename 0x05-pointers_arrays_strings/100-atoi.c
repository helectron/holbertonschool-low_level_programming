#include "holberton.h"

/**
 * _atoi - converts the initial portion of the string to int
 * @s: pointer to a string to be converted to an integer
 * Return: integer
 */


int _atoi(char *s)

{
	int res = 0;
	int sign = 1;  /*Initialize sign as a positive*/
	int i = 0;  /*Initialize index of first digit*/
	int r;

	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[i] == '-')  /*If number is negative update the sign */
		sign *= -1;
		
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				res = ((s[i] - '0') * sign) + res * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (res);
}

