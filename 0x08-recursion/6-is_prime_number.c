#include "main.h"

/**
 * is_prime - displays if number is prime
 *
 * @n: number
 *
 * @m: iteration
 *
 * Return: 1 if prime and if otherwise 0
 */

int is_prime(int n, int m)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == m)
	{
		return (1);
	}
	else if (n % m == 0 || m <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, m + 1));
	}
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: number
 *
 * Return: prime number
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));

}
