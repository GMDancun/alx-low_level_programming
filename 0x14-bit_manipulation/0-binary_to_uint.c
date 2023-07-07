#include "main.h"

/**
 * binary_to_uint - C function that converts 
 * a binary number to an unsigned int.
 *
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: 0 If string b is not 0 or 1 -  or if its NULL
 * or the converted
 *
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		num += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (num);

}
