#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: Always NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	int size;
	char *otherchar;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	size = i + j;
	otherchar = malloc(sizeof(char) * (size + 1));

	if (otherchar == NULL)
		return (NULL);
	for (k = 0; k < i ; k++)
		*(otherchar + k) = *(s1 + k);
	for (l = 0 ; l < j ; l++)
		*(otherchar + (k + l)) = *(s2 + l);
	return (otherchar);
}
