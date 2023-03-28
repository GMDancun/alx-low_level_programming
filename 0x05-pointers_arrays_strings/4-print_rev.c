#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: str
 */
void print_rev(char *s)
{
	int j = 0;
	int i;

	while (*s != '\0')
	{
		j++;
		i++;
	}
	i--;
	for (j = i; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
