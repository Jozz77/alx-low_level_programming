#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of the string.
*
* @str: the string
*
* Return: the output string.
*/

void puts_half(char *str)
{
int j;
for (j = 0; str[j] != '\0'; j++)
j++;
for (j /= 2; str[j] != '\0'; j++)
{
putchar(str[j]);
}
putchar('\n');
}
