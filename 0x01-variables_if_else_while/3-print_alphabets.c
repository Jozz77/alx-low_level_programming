#include <stdio.h>
/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/
int main(void)
{
/* Get the character to be written */
char y;
char z;
for (y = 'a'; y <= 'z'; y++)
putchar(y);
for (z = 'A'; z <= 'Z'; z++)
putchar(z);
putchar('\n');

return (0);
}
