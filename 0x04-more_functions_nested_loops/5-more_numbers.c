#include <stdio.h>

/**
* more_numbers - prints the numners 0 to 1, ten times.
*
* Return: The sequence in order from 0 to 14, ten times.
*/

void more_numbers(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
putchar((i / 10) + '0');
}
putchar((i % 10) + '0');
}
putchar('\n');
}
}
