#include <stdio.h>

/**
 * main - a program that prints the name of
 * the file it was compiled from, followed by a new line.
 *
 * Return: Always 0.
 */
inr main(void)
{
	print("%s\n", __FILE__);
	return (0);
}
