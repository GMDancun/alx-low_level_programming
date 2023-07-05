#include <stdio.h>
#include <stdlib.h>

/**
 * main - write a program that prints the opcodes 
 * of its own main function
 * @argc: N0. of arguments given
 * @argv: Arguments of number of bytes to be printed
 *
 * Return: 0 on success, If the number of argument is
 * not the correct one, print Error, 
 * followed by a new line, and exit with the status 1
 * If the number of bytes is negative, print Error, 
 * followed by a new line, and exit with the status 2
 *
 */
int main(int argc, char *argv[])
{
	char *add;
	int n, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	add = (char *)&main;
	bytes = atoi(argv[1]);
	n = 0;
	while (n < bytes - 1)
	{
		printf("%02hhx ", add[n]);
		n++;
	}
	printf("%02hhx\n", add[n]);
	return (0);
}
