#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: dest string
 * @src: src string
 * @n: int n to copy
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (src[s] != 0 && s < n)
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = 0;
		s++;
	}


	return (dest);
}
