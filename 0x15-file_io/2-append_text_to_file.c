#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 for success and -1 to fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_a, f_b;
	int count = 0;

	if (filename == NULL) /*check errors. if filename is NULL return -1*/
		return (-1);

	/*read. if the file already exists, truncate it */
	f_a = open(filename, O_WRONLY | O_APPEND);
	if (f_a == -1)
		return (-1);
	if (text_content == NULL) /*if text content is NULL create an empty file*/
		return (1);

	for (count = 0; text_content[count]; count++) /*lenght of the text content*/
		;

	f_b = write(f_a, text_content, count); /*write*/
	if (f_b == -1)
		return (-1);
	close(f_a);
	return (1);
}
