#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input string
 */
void puts_half(char *str)
{
	int a, n, j;

	j = 0;

	for (a = 0; str[a] != '\0'; a++)
		j++;

	n = (j / 2);

	if ((j % 2) == 1)
		n = ((j + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}

