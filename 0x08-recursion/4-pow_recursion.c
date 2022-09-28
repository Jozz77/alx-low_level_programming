#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - prints the value of @x rasied to power of @y
 *@y: the power number
 *@x: the number to raised
 * Return: the power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
