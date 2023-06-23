#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: String to print between other strings
 * @n: Number of strings being printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ws;
	char *w;
	unsigned int u;

	va_start(ws, n);
	u = 0;
	while (u < n)
	{
		w = va_arg(ws, char *);
		if (w != NULL)
			printf("%s", w);
		else
			printf("(nil)");
		if (u < n - 1 && separator != NULL)
			printf("%s", separator);
		u++;
	}
	printf("\n");
	va_end(ws);
}
