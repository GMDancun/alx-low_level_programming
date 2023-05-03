#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that Concatenates two strings using at
 * most an inputted number of bytes.
 *
 * @s1: string.
 * @s2: string.
 * @n: number of bytes
 *
 * Return: If the function fails - NULL.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	con = malloc(sizeof(char) * (len + 1));

	if (con == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		con[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		con[len++] = s2[index];

	con[len] = '\0';

	return (con);
}
