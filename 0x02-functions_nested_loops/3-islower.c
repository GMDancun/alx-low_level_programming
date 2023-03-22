#include <stdio.h>

/**
 *  _islower - check lowercase
 *  c: input character
 *  Return: 1 if it is a lowercase or 0 if it is an uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
