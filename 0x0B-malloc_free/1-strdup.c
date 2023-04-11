#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: character
 *
 * Return: Null if str = NULL
 *
 */

char *_strdup(char *str)
{
	char *otherstr;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	otherstr = malloc(sizeof(char) * (len + 1));

	if (otherstr == NULL)
		return (NULL);

	while ((otherstr[i] = str[i]) != '\0')
		i++;

	return (otherstr);
}
