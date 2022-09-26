#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: given strin
 * @accept: target matched character
 * Return: pointer to index of string at first occurence
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
