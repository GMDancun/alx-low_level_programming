#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers
 * @argc: No. of arguments
 * @argv: array
 *
 * Return: Always (0)
 *
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (argv[num1][num2] < '0' || argv[num1][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[num1]);
	}
	printf("%d\n", sum);
	return (0);
}
