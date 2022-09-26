#include "main.h"
#include <stdio.h>

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target for accept
 * Return: number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int times = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				times++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (times);
		}
		i++;
	}
	return (times);
}
