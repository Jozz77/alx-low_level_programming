#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Description: 'print a function that prints 10 times the alphabet'
*
* Return: Always 0 (Success)
*/

int print_alphabet(void)
{
char i;
int add = 0;
while (add++ <= 9)
{
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}
return (0);
}
