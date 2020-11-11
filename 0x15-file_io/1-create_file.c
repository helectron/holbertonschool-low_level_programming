#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 for success
 */

int create_file(const char *filename, char *text_content)
{
	int f_i, f_o;
	int count = 0;

	if (filename == NULL) /*check errors. if filename is NULL return -1*/
		return (-1);

	/*read. if the file already exists, truncate it */
	f_i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f_i == -1)
		return (-1);
	if (text_content == NULL) /*if text content is NULL create an empty file*/
		return (1);

	for (count = 0; text_content[count]; count++) /*lenght of the text content*/
		;

	f_o = write(f_i, text_content, count); /*write*/
	if (f_o == -1)
		return (-1);
	close(f_i);
	return (1);
}
