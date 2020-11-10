#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: char pointer to name of file to read and write
 * @letters: number of letters it should read and print
 * Return: letters print or 0 if file can not be opened or read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file; /*file indicator*/
	ssize_t total, error;
	char *text; /*buffer that saves the chars that are read*/

	if (filename == NULL) /*check some errors */
		return (0);
	text = malloc(sizeof(*text) * letters);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY); /*file access mode to open and read*/
	if (file == -1)
	{
		free(text);
		return (0); /*return 0 if file can't be opened or read */
	}
	total = read(file, text, letters); /*read */
	if (total == -1)
	{
		free(text);
		return (0);
	}
	error = write(STDOUT_FILENO, text, total); /*write*/
	close(file);
	free(text);
	if (error == total)
		return (total);
	return (0);
}
