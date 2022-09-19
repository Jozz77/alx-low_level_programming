#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string.
*
* @str: the string
*
* Return: the given string
*/
void _puts(char *str)
{
while (*str)
putchar(*str++);
putchar('\n');
}
