#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies a string
*
* @src: character
* @dest: character
*
* Return: the output string.
*/

char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
