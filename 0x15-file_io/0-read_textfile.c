#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to
 * the POSIX standard output
 *
 * @filename: pointer variable
 *
 * @letters: size-letters
 *
 * Return: the actual number of letters it could read and print, 0
 *
 * if the file can not be opened or read, if filename is NULL return
 *
 * if write fails or does not write the expected amount of bytes,
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_open, file_read, file_write;
	char *file_text;

	file_text = malloc(letters);
	if (file_text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file_open = open(filename, O_RDONLY);

	if (file_open == -1)
	{
		free(file_text);
		return (0);
	}

	file_read = read(file_open, file_text, letters);

	file_write = write(STDOUT_FILENO, file_text, file_read);

	close(file_open);

	return (file_write);
}
