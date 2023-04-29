#include <stdio.h>


void print(void) __attribute__ ((constructor));

/**
 * print - prints before the main function
 *
 * Description - function that prints a sentence before the main function
 *
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back! \n");
}

