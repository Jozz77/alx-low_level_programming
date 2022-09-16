#include <stdio.h>

/**
* print_square - prints the size of a square using #.
* @size: The size of the squares to be printed.
*
*/

void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
putchar('#');
if (i == size - 1)
continue;
putchar('\n');
}
}
putchar('\n');
}
