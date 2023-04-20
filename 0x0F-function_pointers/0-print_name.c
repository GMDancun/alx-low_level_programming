#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: points to the string
 * @f: points to the function
 *
 * Return: the string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
