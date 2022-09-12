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
for (y = 0; y <= 98; y++)
{
for (z = y + 1; z <= 99; z++)
{
putchar((y / 10) + '0');
putchar((y % 10) + '0');
putchar(' ');
putchar((z / 10) + '0');
putchar((z % 10) + '0');
if (y == 98 && z == 99)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
