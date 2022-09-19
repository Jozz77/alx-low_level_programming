#include "main.h"
#include <stdio.h>

/**
* _strlen - prints the lenght of a string.
*
* @s: the string
*
* Return: Lenght of the string.
*/

int _strlen(char *s)
{
int strlenght = 0;
while (*s++)
strlenght++;
return (strlenght);
}
