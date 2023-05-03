#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list vlst;
	int q = 0, u = 0;
	char *p = ", ";
	char *t;

	va_start(vlst, format);

	while (format && format[u])
		u++;

	while (format && format[q])
	{
		if (q  == (u - 1))
		{
			p = "";
		}
		switch (format[q])
		{
		case 'c':
			printf("%c%s", va_arg(vlst, int), p);
			break;
		case 'i':
			printf("%d%s", va_arg(vlst, int), p);
			break;
		case 'f':
			printf("%f%s", va_arg(vlst, double), p);
			break;
		case 's':
			t = va_arg(vlst, char *);
			if (t == NULL)
				t = "(nil)";
			printf("%s%s", t, p);
			break;
		}
		q++;
	}
	printf("\n");

	va_end(vlst);
}
