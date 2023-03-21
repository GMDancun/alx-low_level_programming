#include "main.h"
#include <unistd.h>

/**
 * -putchar - writes character
 *
 *  Return: on Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
