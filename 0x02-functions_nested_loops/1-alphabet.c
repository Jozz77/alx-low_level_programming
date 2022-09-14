#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Description: 'prints the alphabet in lowercase, followed by a new line'
*
* Return: Always 0 (Success)
*/

int print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
return 0;
}
