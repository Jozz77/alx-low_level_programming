#include "main.h"
#include <stdio.h>

/**
* print_array - prints the number array.
*
* @a: the pointer
* @n: the integer
*
* Return: the output string.
*/

void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; n > i; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
}
putchar('\n');
}
