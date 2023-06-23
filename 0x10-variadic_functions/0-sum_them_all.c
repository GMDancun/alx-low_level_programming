#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the variadic inputs
 * Return: 0, if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlst;
	unsigned int u, s = 0;

	if (n == 0)
		return (0);

	va_start(vlst, n);

	for (u = 0; u < n; u++)
	{
		s += va_arg(vlst, const unsigned int);
	}

	va_end(vlst);

	return (s);
}
