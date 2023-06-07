#include "main.h"

/**
 * _square - return the natural square root of the number
 * @q: iterator
 * @p: number to calculate the square
 *
 * Return: square root
 *
 */
int _square(int p, int q)
{
	int sqr = q * q;

	if (sqr == p)
		return (q);

	else if (sqr > p)
		return (-1);

	return (_square(p, q + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
		return (_square(n, 1));
}

