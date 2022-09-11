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
for (y = '0'; y <= '9'; y++)
putchar(y);
for (z = 'a'; z <= 'f'; z++)
putchar(z);
putchar('\n');

return (0);
}
