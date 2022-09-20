#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string in reverse.
*
* @s: the string
*
* Return: the given string in reverse.
*/

void print_rev(char *s)
{
int idx = 0;
while (s[idx])
idx++;
while (idx--)
{
putchar(s[idx]);
}
putchar('\n');
}
