#include "main.h"
#include <stdio.h>

/**
 *the_root - look for the root of a number
 *@n: the number
 *@root: check for the root
 * Return: the root
 */

int the_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (the_root(n, root + 1));
}


/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)

{

	if (n < 0)
		return (-1);

	return (the_root(n, 0));
}
