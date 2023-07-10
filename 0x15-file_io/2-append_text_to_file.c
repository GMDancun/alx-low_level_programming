#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: pointer variable
 *
 * @text_content: file content.
 *
 * Return: 1 on success, -1 on failure and If filename is NULL
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f = 0, file_open;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[f] != '\0')
	{
		f++;
	}

	file_open = open(filename, O_WRONLY | O_APPEND);

	if (file_open == -1)
		return (-1);

	write(file_open, text_content, f);

	return (1);
}
