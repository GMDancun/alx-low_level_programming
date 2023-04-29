#include <stdio.h>
#include "lists.h"

/*
 * printbeforemain - function that prints a sentence before the main function
 *
 * void: points to the head function
 *
 * Return: Always Success
 */

void printbeforemain(void) __attribute__ ((constructor));

void printbeforemain(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back! \n");
}

