#include "main.h"
#include <stdio.h>

/**
 *the_prime-  recursively divide by higher divisor, skip even nums
 *@n: the number to check
 *@div: the divisor
 * Return: the prime number
 */

int the_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (the_prime(n, div + 1));
}


/**
 * is_prime_number - checks for prime, otherwise return 0.
 * @n: n
 * Return: the prime number
 */

int is_prime_number(int n)
{

	int div = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (the_prime(n, div));
}
