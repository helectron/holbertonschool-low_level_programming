#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#define BUF_SIZE 1024

void check_er(char *file1, char *file2);
void read_er(char *file);
void write_er(char *file);
void close_er(int fd);

#endif
