#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int m, n;

	for (m = 0; haystack[m] != '\0'; m++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[m + n] != needle[n])
			{
				break;
			}
		}
		if (needle[n] == '\0')
		{
			return (&haystack[m]);
		}
	}
	return (0);
}
