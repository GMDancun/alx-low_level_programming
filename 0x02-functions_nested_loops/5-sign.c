#include <stdio.h>
/**
 * print_sign - return 1 if n is positive and 0 if n is less than 0
 * @n: number entered for testing
 * Return: 1, or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
