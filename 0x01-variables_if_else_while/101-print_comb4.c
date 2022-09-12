#include <stdio.h>
/**
* main - Entry point
*
* Print all possible combinations of single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
/* Get the character to be written */
int y = 0;
int z;
int a;
for (y = 0; y < 9; y++)
{
for (z = y + 1; z < 10; z++)
{
for (a = z + 1; a < 10; a++)
{
putchar((y % 10) + '0');
putchar((z % 10) + '0');
putchar((a % 10) + '0');
if (y == 7 && z == 8 && a == 9)
continue;

putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
