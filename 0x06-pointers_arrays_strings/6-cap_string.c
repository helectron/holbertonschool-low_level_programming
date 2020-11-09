#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: capitalize string
 */

char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*Is the first letter a lowercase?*/
		if (s[0] <= 122 && s[0] >= 97)
		{
			s[0] -= 32;
		}
		/*comparation chars*/
		if (s[i] == 32 || s[i] == 46 || s[i] == '\t' ||
			s[i] == '\n' || s[i] == 44 || s[i] == 59 ||
			s[i] == '!' || s[i] == '?' || s[i] == '(' ||
			s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			/*compare each char to change to uppercase*/
			if (s[i + 1] <= 122 && s[i + 1] >= 97)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
