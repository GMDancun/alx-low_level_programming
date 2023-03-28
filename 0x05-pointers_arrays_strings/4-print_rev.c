#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: str
 */
void print_rev(char *s)
{
	int i, len;
	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar('s[i]');
	}
}
