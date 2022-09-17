#include <stdio.h>

/**
* print_number - prints an integer.
* @n: number to be printed
*
*/

void print_number(int n)
{
unsigned int pos = n, dig, ten;
double beg = 1;
if (n == 0)
putchar('0');
else
{
if (n < 0)
{
pos = n * -1;
putchar('-');
}
while (beg <= pos)
beg *= 10;
ten = beg / 10;
while (ten >= 1)
{
dig =  pos / ten;
putchar(dig + '0');
pos = (pos - (ten * dig));
ten /= 10;
}
}
}
