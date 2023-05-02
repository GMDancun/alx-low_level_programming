#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins to
 *  make change for an amount of money
 *
 *  @argc: No. of arguments to be passed
 *  @argv: arrays
 *
 *  Return: the minimum coins needed to give back
 *
 */

int main(int argc, char *argv[])
{
	int y = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);

	while (coins > 0)
	{
		if (coins - 25 >= 0)
		{
			coins = coins - 25;
		}
		else if (coins - 10 >= 0)
		{
			coins = coins - 10;
		}
		else if (coins - 5 >= 0)
		{
			coins = coins - 5;
		}
		else if (coins - 2 >= 0)
		{
			coins = coins - 2;
		}
		else if (coins - 1 == 0)
		{
			coins = coins - 1;
		}
		y++;
	}
	printf("%d\n", y);
	return (0);
}

