#include "main.h"
#include <stdio.h>

/**
 * _strchr - search for the first occurrence of c and prints the rest.
 * @s: the string to be searches
 * @c: the character to watch out for
 *
 * Return: the pointer to the character
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0' && s[j] != c)
		j++;

	if (s[j] == c)
		return (&s[j]);
	else
		return (NULL);
}
