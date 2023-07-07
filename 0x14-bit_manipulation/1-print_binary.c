#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * print_binary - a function that prints the binary representation of a number.
 * 
 * Prototype: void print_binary(unsigned long int n);
 * 
 * @n: No. to be converted to binary
 *
 * other intructiobs
 * not allowed to use arrays
 * not allowed to use malloc
 * not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
