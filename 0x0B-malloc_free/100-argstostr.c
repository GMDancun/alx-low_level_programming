#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates
 * all arguments of the program into a string;
 * arguments are separated by a new line in the string.
 * @ac: No. of arguments passed to the program.
 * @av: array .
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *st;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	st = malloc(sizeof(char) * size + 1);

	if (st == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			st[index++] = av[arg][byte];

		st[index++] = '\n';
	}

	st[size] = '\0';

	return (st);
}
