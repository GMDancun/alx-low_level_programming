#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: No. of arguments
 * @argv: array
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int multiply;
	char t[] = "Error";

	multiply = 0;

	if (argc != 3)
	{
		printf("%s\n", t);
		return (1);
	}
	multiply = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", multiply);

	return (0);
}
