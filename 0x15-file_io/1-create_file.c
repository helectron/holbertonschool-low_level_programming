#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 */

int create_file(const char *filename, char *text_content)
{
	int f_i, f_o;
	int count = 0;

	/*check errors*/
	if (filename == NULL)
		return (-1);

	f_i = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600); /*read*/

	if (f_i == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	for (count = 0; text_content[count]; count++) /*lenght of the text content*/
		;

	f_o = write(f_i, text_content, count); /*write*/
	close(f_i);
	if (f_o == -1)
	{
		return (-1);
	}
	return (1);
}


