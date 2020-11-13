#include "holberton.h"

/**
 * read_er - check if error on file read
 * @file: pointer to file
 */
void read_er(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * write_er - if can not create or if write to file_to fails
 * @file: pointer to file
 */
void write_er(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_er - check if can not close a file descriptor
 * @fd: file descriptor
 */
void close_er(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * check_er - check if file is NULL
 * @file1: first file
 * @file2: second file
 */
void check_er(char *file1, char *file2)
{
	if (file1 == NULL)
		read_er(file1);
	if (file2 == NULL)
		write_er(file2);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int file_i, file_o, file_read, file_write, file_close,
		file_o_close;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	check_er(argv[1], argv[2]);
	file_i = open(argv[1], O_RDONLY);
	if (file_i == -1)
		read_er(argv[1]);
	file_o = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_o == -1)
		write_er(argv[2]);
	buffer = malloc(BUF_SIZE * sizeof(char));
	if (buffer == NULL)
		return (1);
	file_read = read(file_i, buffer, BUF_SIZE);
	if (file_read == -1)
		read_er(argv[1]);
	while (file_read > 0)
	{
		file_write = write(file_o, buffer, file_read);
		if (file_write == -1)
			write_er(argv[2]);
		file_read = read(file_i, buffer, BUF_SIZE);
		if (file_read == -1)
			read_er(argv[1]);
	}
	file_close = close(file_i);
	if (file_close == -1)
		close_er(file_close);
	file_o_close = close(file_o);
	if (file_o_close == -1)
		close_er(file_o_close);
	free(buffer);
	return (0);
}
