#include <stdio.h>
/**
 * void print_alphabet_x10(void) - prints alphabet ten times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char characters;

	for (i = 0; i <= 10; i++)
	{
		for (characters = 'a'; characters <= 'z'; characters++)
		{
			putchar(characters);
		}
		putchar('\n');
	}
}
