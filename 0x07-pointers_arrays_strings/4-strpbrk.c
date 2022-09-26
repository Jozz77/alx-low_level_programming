#include "main.h"
#include <stdio.h>

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target for accept
 * Return: number of bytes matched
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
