#include "main.h"
#include <stdio.h>

/**
 * _memset - fill the memory with a constant byte.
 * @b: the constant bytes.
 * @n: number of bytes to fill
 * @s: A pointer to the memory area.
 *
 * Return: memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}

	return (s);
}
