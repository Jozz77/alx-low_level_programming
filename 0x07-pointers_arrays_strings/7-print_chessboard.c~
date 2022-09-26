#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: the given string
 * @needle: substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, y;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			y = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[y] == needle[j])
				y++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + 1);
			}
		}
		i++;
	}
	return (NULL);
}
