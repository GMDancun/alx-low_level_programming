#include <stdio.h>


void print_beforemain(void) __attribute__((constructor));
/*
 * printbeforemain - prints a sentence before the main function
 *
 *
 */

void print_beforemain(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back! \n");
}

