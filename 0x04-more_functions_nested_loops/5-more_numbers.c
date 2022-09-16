#include <stdio.h>

/**
* more_numbers - prints the numners 0 to 1, ten times.
*
* Return: The sequence in order from 0 to 14, ten times.
*/

void more_numbers(void)
{
int i, count;
for (count = 0; count <= 9; count++)
{
for (i = 0; i <= 14; i++)
{
if (i <= 14)
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
putchar('\n');
}
}
