#include <stdio.h>

/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);

	_putchar('\n');
}