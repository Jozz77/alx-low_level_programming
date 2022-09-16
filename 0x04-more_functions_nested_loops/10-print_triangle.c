#include <stdio.h>

/**
* print_triangle - prints the size of a traingle using #.
* @size: The size of the triangles to be printed.
*
*/

void print_triangle(int size)
{
int hsh, arr;
if (size > 0)
{
for (hsh = 1; hsh <= size; hsh++)
{
for (arr = size - hsh; arr > 0; arr--)
putchar(' ');
for (arr = 0; arr < hsh; arr++)
putchar('#');
if (hsh == size)
continue;
putchar('\n');
}
}
putchar('\n');
}
