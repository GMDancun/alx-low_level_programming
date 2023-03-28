#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: str
 */
void print_rev(char *s)
{
	char str = 0;
	int i;
	
	while (*s != '\0')
	{
		str++;
		i++;
	}
	i--;
	for (i = str; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
