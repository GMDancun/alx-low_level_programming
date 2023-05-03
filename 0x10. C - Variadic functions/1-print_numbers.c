#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - a function that prints num bers,
  * followed by a new line.
  * @separator: the string to be printed btwn no.'s
  * @n: num of intergers passed to the function
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlst;
	unsigned int u = 0;

	if (n > 0)
	{
		va_start(vlst, n);

		while (u < n)
		{
			printf("%d", va_arg(vlst, int));

			if (u != n - 1  && separator != NULL)
				printf("%s", separator);

			u++;
		}
		va_end(vlst);
	}
	printf("\n");
}
